//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include <vcl.h>
#pragma hdrstop
#include <string.h>
#include "main.h"
#include "credentials.h"
#include "time.h"
#include "communication.h"
#include "historical_chart.h"
#include "receipt_selection.h"
#include "receipt_edition.h"
#include "receipt_add.h"
#include "receipt_delete.h"
#include "user_add.h"
#include "user_delete.h"
#include "user_edition.h"
#include "reports.h"
#include "math.h"
#include "query.h"
#include "alarms.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TUserEdition *UserEdition;

TEdit* edits_ant[5];   // Valores antiguos de los BdD
TEdit* edits_act[5];   // Valores actualizados de los Edits a la BdD

int validation(void);

//---------------------------------------------------------------------------
__fastcall TUserEdition::TUserEdition(TComponent* Owner)
    : TForm(Owner)
{
    ComboBox2->AddItem("Administrador",NULL);
    ComboBox2->AddItem("Supervisor",NULL);
    ComboBox2->AddItem("Operario",NULL);
    ComboBox2->ItemIndex = -1;
}
//---------------------------------------------------------------------------
void __fastcall TUserEdition::Button2Click(TObject *Sender)
{
    UserEdition->Close();
}
//---------------------------------------------------------------------------


void __fastcall TUserEdition::Button1Click(TObject *Sender)
{
    int jerarquia = 0;
//int jerarquia_ant = atoi(edits_ant[4]->Text.c_str());

    if(Application->MessageBoxA("?Est? seguro que quiere modificar el usuario seleccionado?","Confirmaci?n de carga",MB_YESNO)== IDYES)
    {
        if(UserEdition->ComboBox2->Text == "Administrador")
        {
            jerarquia = 1;
        }
        else if(UserEdition->ComboBox2->Text == "Supervisor")
        {
            jerarquia = 2;
        }
        else
        {
            jerarquia = 3;
        }

        int value = validation();

        if(value == 2)
        {
            Query1->Close();
            Query1->SQL->Clear();
            Query1->SQL->Add("update Users.db");
            Query1->SQL->Add("set USERS ='"+UserEdition->Label3->Caption+"', PASSWORDS ='"+UserEdition->Edit1->Text+"', NAME ='"+UserEdition->Edit3->Text+"', SURENAME ='"+UserEdition->Edit4->Text+"', HIERARCHY ="+jerarquia);
            //Query1->SQL->Add("where USERS ='"+UserEdition->Label3->Caption+"' and PASSWORDS ='"+edits_ant[1]->Text+"'and NAME ='"+edits_ant[2]->Text+"'and SURENAME ='"+edits_ant[3]->Text+"'and HIERARCHY ="+jerarquia_ant);
            Query1->SQL->Add("where USERS ='"+UserEdition->Label3->Caption+"'");
            Query1->ExecSQL();

            Application->MessageBoxA("El Usuario ha sido modificado satisfactoriamente","Carga exitosa");
        }
        /*else if(value == 0)
        {
        Application->MessageBoxA("El nombre de usuario elegido ya est? en uso","Error");
        }*/
        else if(value == 1)
        {
            Application->MessageBoxA("Faltan ingresar datos en los campos, revise atentamente","Error");
        }
        else
        {
            Application->MessageBoxA("Error desconocido","Error fatal");
        }
    }

}
//---------------------------------------------------------------------------

void __fastcall TUserEdition::ComboBox1Change(TObject *Sender)
{
    Label3->Caption = ComboBox1->Items->Strings[ComboBox1->ItemIndex].c_str();

    Query1->Close();
    Query1->SQL->Clear();
    Query1->SQL->Add("select * from USERS.db");
    Query1->SQL->Add("where USERS = '"+UserEdition->Label3->Caption+"'");
    Query1->Open();
    Query1->First();

    Edit1->Text =  Query1->Fields->Fields[1]->AsString;
    Edit3->Text =  Query1->Fields->Fields[2]->AsString;
    Edit4->Text =  Query1->Fields->Fields[3]->AsString;

    ComboBox2->ItemIndex =  Query1->Fields->Fields[4]->AsInteger - 1;



    edits_ant[0]->Text =  Query1->Fields->Fields[1]->AsString;
    edits_ant[1]->Text =  Query1->Fields->Fields[2]->AsString;
    edits_ant[2]->Text =  Query1->Fields->Fields[3]->AsString;
    edits_ant[3]->Text =  Query1->Fields->Fields[4]->AsString;
    //edits_ant[4]->Text =  Query1->Fields->Fields[5]->AsString;
}
//---------------------------------------------------------------------------
int validation(void)
{
    if (UserAdd->ComboBox1->ItemIndex ==  -1 || UserEdition->Edit1->Text == "" || UserEdition->Edit3->Text == "" || UserEdition->Edit4->Text == "" || UserEdition->ComboBox2->ItemIndex ==  -1)
    {
        return 1;
    }

    return 2;
}
