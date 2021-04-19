//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "user_add.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TUserAdd *UserAdd;

TEdit* edits_user[5];

int validation(void);
//---------------------------------------------------------------------------
__fastcall TUserAdd::TUserAdd(TComponent* Owner)
    : TForm(Owner)
{
    ComboBox1->AddItem("Administrador",NULL);
    ComboBox1->AddItem("Supervisor",NULL);
    ComboBox1->AddItem("Operario",NULL);
    ComboBox1->ItemIndex = -1;

}
//---------------------------------------------------------------------------



void __fastcall TUserAdd::Button2Click(TObject *Sender)
{
    UserAdd->Close();
}
//---------------------------------------------------------------------------

void __fastcall TUserAdd::Button1Click(TObject *Sender)
{
    int jerarquia = 0;

    if(UserAdd->ComboBox1->Text == "Administrador")
    {
        jerarquia = 1;
    }
    else if(UserAdd->ComboBox1->Text == "Supervisor")
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
        Query1->SQL->Add("insert into Users.db");
        Query1->SQL->Add("(USERS,PASSWORDS,NAME,SURENAME,HIERARCHY)");
        Query1->SQL->Add("values('"+Edit1->Text+"','"+Edit2->Text+"','"+Edit3->Text+"','"+Edit4->Text+"',"+jerarquia+")");
        Query1->ExecSQL();
        Application->MessageBoxA("El Usuario ha sido agregado satisfactoriamente","Carga exitosa");
    }
    else if(value == 0)
    {
        Application->MessageBoxA("El nombre de usuario elegido ya está en uso","Error");
    }
    else if(value == 1)
    {
        Application->MessageBoxA("Faltan ingresar datos en los campos, revise atentamente","Error");
    }
    else
    {
        Application->MessageBoxA("Error desconocido","Error fatal");
    }


}
//---------------------------------------------------------------------------

int validation(void)
{


    edits_user[0] = UserAdd->Edit1;
    edits_user[1] = UserAdd->Edit2;
    edits_user[2] = UserAdd->Edit3;
    edits_user[3] = UserAdd->Edit4;
//edits_user[4] = UserAdd->ComboBox1->Text;


    UserAdd->Query1->Close();
    UserAdd->Query1->SQL->Clear();
    UserAdd->Query1->SQL->Add("select * from Users.db");
    UserAdd->Query1->SQL->Add("where USERS = '"+UserAdd->Edit1->Text+"'");
    UserAdd->Query1->SQL->Add("order by USERS asc");
    UserAdd->Query1->Open();
    if (UserAdd->Query1->RecordCount != 0)
    {
        return 0;
    }

    if (edits_user[0]->Text == "" || edits_user[1]->Text == "" || edits_user[2]->Text == "" || edits_user[3]->Text == "" || UserAdd->ComboBox1->ItemIndex ==  -1)
    {
        return 1;
    }

    return 2;
}
