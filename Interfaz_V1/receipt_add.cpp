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
TReceiptAdd *ReceiptAdd;
TEdit* edits1[70];

int validation(void);

//---------------------------------------------------------------------------
__fastcall TReceiptAdd::TReceiptAdd(TComponent* Owner)
    : TForm(Owner)
{

}
//---------------------------------------------------------------------------



void __fastcall TReceiptAdd::Button2Click(TObject *Sender)
{
    ModalResult = mrOk;
}
//---------------------------------------------------------------------------




void __fastcall TReceiptAdd::Button1Click(TObject *Sender)
{
    int value = validation();

    if(Application->MessageBoxA("Est? seguro que quiere agregar la receta?","Confirmaci?n de carga",MB_YESNO)== IDYES)
    {
        if(value == 2)
        {

            Query1->Close();
            Query1->SQL->Clear();
            Query1->SQL->Add("insert into Recetas.db");
            Query1->SQL->Add("(Nombre_Receta,");
            Query1->SQL->Add("Temp_Ref_LL,Temp_Ref_L,Temp_Ref_N,Temp_Ref_H,Temp_Ref_HH,");
            Query1->SQL->Add("Temp_Est_LL,Temp_Est_L,Temp_Est_N,Temp_Est_H,Temp_Est_HH,");
            Query1->SQL->Add("Temp_Pas_LL,Temp_Pas_L,Temp_Pas_N,Temp_Pas_H,Temp_Pas_HH,");
            Query1->SQL->Add("Tiem_Pas_LL,Tiem_Pas_L,Tiem_Pas_N,Tiem_Pas_H,Tiem_Pas_HH,");
            Query1->SQL->Add("Temp_Hom_LL,Temp_Hom_L,Temp_Hom_N,Temp_Hom_H,Temp_Hom_HH,");
            Query1->SQL->Add("Tiem_Pre_LL,Tiem_Pre_L,Tiem_Pre_N,Tiem_Pre_H,Tiem_Pre_HH,");
            Query1->SQL->Add("Temp_Pre_LL,Temp_Pre_L,Temp_Pre_N,Temp_Pre_H,Temp_Pre_HH,");
            Query1->SQL->Add("Tiem_Inc_LL,Tiem_Inc_L,Tiem_Inc_N,Tiem_Inc_H,Tiem_Inc_HH,");
            Query1->SQL->Add("Temp_Inc_LL,Temp_Inc_L,Temp_Inc_N,Temp_Inc_H,Temp_Inc_HH,");
            Query1->SQL->Add("Tiem_Enf_LL,Tiem_Enf_L,Tiem_Enf_N,Tiem_Enf_H,Tiem_Enf_HH,");
            Query1->SQL->Add("Temp_Enf_LL,Temp_Enf_L,Temp_Enf_N,Temp_Enf_H,Temp_Enf_HH,");
            Query1->SQL->Add("Porc_Yor_LL,Porc_Yor_L,Porc_Yor_N,Porc_Yor_H,Porc_Yor_HH,");
            Query1->SQL->Add("Porc_Col_LL,Porc_Col_L,Porc_Col_N,Porc_Col_H,Porc_Col_HH,");
            Query1->SQL->Add("Porc_Cub_LL,Porc_Cub_L,Porc_Cub_N,Porc_Cub_H,Porc_Cub_HH)");
            Query1->SQL->Add("values('"+Edit71->Text+"',");
            Query1->SQL->Add(""+Edit1->Text+","+Edit2->Text+","+Edit3->Text+","+Edit4->Text+","+Edit5->Text+",");
            Query1->SQL->Add(""+Edit6->Text+","+Edit7->Text+","+Edit8->Text+","+Edit9->Text+","+Edit10->Text+",");
            Query1->SQL->Add(""+Edit11->Text+","+Edit12->Text+","+Edit13->Text+","+Edit14->Text+","+Edit15->Text+",");
            Query1->SQL->Add(""+Edit16->Text+","+Edit17->Text+","+Edit18->Text+","+Edit19->Text+","+Edit20->Text+",");
            Query1->SQL->Add(""+Edit21->Text+","+Edit22->Text+","+Edit23->Text+","+Edit24->Text+","+Edit25->Text+",");
            Query1->SQL->Add(""+Edit26->Text+","+Edit27->Text+","+Edit28->Text+","+Edit29->Text+","+Edit30->Text+",");
            Query1->SQL->Add(""+Edit31->Text+","+Edit32->Text+","+Edit33->Text+","+Edit34->Text+","+Edit35->Text+",");
            Query1->SQL->Add(""+Edit36->Text+","+Edit37->Text+","+Edit38->Text+","+Edit39->Text+","+Edit40->Text+",");
            Query1->SQL->Add(""+Edit41->Text+","+Edit42->Text+","+Edit43->Text+","+Edit44->Text+","+Edit45->Text+",");
            Query1->SQL->Add(""+Edit46->Text+","+Edit47->Text+","+Edit48->Text+","+Edit49->Text+","+Edit50->Text+",");
            Query1->SQL->Add(""+Edit51->Text+","+Edit52->Text+","+Edit53->Text+","+Edit54->Text+","+Edit55->Text+",");
            Query1->SQL->Add(""+Edit56->Text+","+Edit57->Text+","+Edit58->Text+","+Edit59->Text+","+Edit60->Text+",");
            Query1->SQL->Add(""+Edit61->Text+","+Edit62->Text+","+Edit63->Text+","+Edit64->Text+","+Edit65->Text+",");
            Query1->SQL->Add(""+Edit66->Text+","+Edit67->Text+","+Edit68->Text+","+Edit69->Text+","+Edit70->Text+")");
            Query1->ExecSQL();
            Application->MessageBoxA("La receta ha sido agregada satisfactoriamente","Carga exitosa");
        }
        else if(value == 0)
        {
            Application->MessageBoxA("El nombre elegido ya est? en uso","Error");
        }
        else if(value == 1)
        {
            Application->MessageBoxA("Alguno de los campos es mayor a otro cuando deberia ser menor, revise atentamente","Error");
        }
        else
        {
            Application->MessageBoxA("Error desconocido","Error fatal");
        }
    }

}
//---------------------------------------------------------------------------

int validation(void)
{
//int cnt = 0;

    edits1[0] = ReceiptAdd->Edit1;
    edits1[1] = ReceiptAdd->Edit2;
    edits1[2] = ReceiptAdd->Edit3;
    edits1[3] = ReceiptAdd->Edit4;
    edits1[4] = ReceiptAdd->Edit5;
    edits1[5] = ReceiptAdd->Edit6;
    edits1[6] = ReceiptAdd->Edit7;
    edits1[7] = ReceiptAdd->Edit8;
    edits1[8] = ReceiptAdd->Edit9;
    edits1[9] = ReceiptAdd->Edit10;
    edits1[10] = ReceiptAdd->Edit11;
    edits1[11] = ReceiptAdd->Edit12;
    edits1[12] = ReceiptAdd->Edit13;
    edits1[13] = ReceiptAdd->Edit14;
    edits1[14] = ReceiptAdd->Edit15;
    edits1[15] = ReceiptAdd->Edit16;
    edits1[16] = ReceiptAdd->Edit17;
    edits1[17] = ReceiptAdd->Edit18;
    edits1[18] = ReceiptAdd->Edit19;
    edits1[19] = ReceiptAdd->Edit20;
    edits1[20] = ReceiptAdd->Edit21;
    edits1[21] = ReceiptAdd->Edit22;
    edits1[22] = ReceiptAdd->Edit23;
    edits1[23] = ReceiptAdd->Edit24;
    edits1[24] = ReceiptAdd->Edit25;
    edits1[25] = ReceiptAdd->Edit26;
    edits1[26] = ReceiptAdd->Edit27;
    edits1[27] = ReceiptAdd->Edit28;
    edits1[28] = ReceiptAdd->Edit29;
    edits1[29] = ReceiptAdd->Edit30;
    edits1[30] = ReceiptAdd->Edit31;
    edits1[31] = ReceiptAdd->Edit32;
    edits1[32] = ReceiptAdd->Edit33;
    edits1[33] = ReceiptAdd->Edit34;
    edits1[34] = ReceiptAdd->Edit35;
    edits1[35] = ReceiptAdd->Edit36;
    edits1[36] = ReceiptAdd->Edit37;
    edits1[37] = ReceiptAdd->Edit38;
    edits1[38] = ReceiptAdd->Edit39;
    edits1[39] = ReceiptAdd->Edit40;
    edits1[40] = ReceiptAdd->Edit41;
    edits1[41] = ReceiptAdd->Edit42;
    edits1[42] = ReceiptAdd->Edit43;
    edits1[43] = ReceiptAdd->Edit44;
    edits1[44] = ReceiptAdd->Edit45;
    edits1[45] = ReceiptAdd->Edit46;
    edits1[46] = ReceiptAdd->Edit47;
    edits1[47] = ReceiptAdd->Edit48;
    edits1[48] = ReceiptAdd->Edit49;
    edits1[49] = ReceiptAdd->Edit50;
    edits1[50] = ReceiptAdd->Edit51;
    edits1[51] = ReceiptAdd->Edit52;
    edits1[52] = ReceiptAdd->Edit53;
    edits1[53] = ReceiptAdd->Edit54;
    edits1[54] = ReceiptAdd->Edit55;
    edits1[55] = ReceiptAdd->Edit56;
    edits1[56] = ReceiptAdd->Edit57;
    edits1[57] = ReceiptAdd->Edit58;
    edits1[58] = ReceiptAdd->Edit59;
    edits1[59] = ReceiptAdd->Edit60;
    edits1[60] = ReceiptAdd->Edit61;
    edits1[61] = ReceiptAdd->Edit62;
    edits1[62] = ReceiptAdd->Edit63;
    edits1[63] = ReceiptAdd->Edit64;
    edits1[64] = ReceiptAdd->Edit65;
    edits1[65] = ReceiptAdd->Edit66;
    edits1[66] = ReceiptAdd->Edit67;
    edits1[67] = ReceiptAdd->Edit68;
    edits1[68] = ReceiptAdd->Edit69;
    edits1[69] = ReceiptAdd->Edit70;


//validacion por campos nulos
    int i=0,j=0;

    ReceiptAdd->Query1->Close();
    ReceiptAdd->Query1->SQL->Clear();
    ReceiptAdd->Query1->SQL->Add("select * from Recetas.db");
    ReceiptAdd->Query1->SQL->Add("where Nombre_Receta = '"+ReceiptAdd->Edit71->Text+"' ");
    ReceiptAdd->Query1->SQL->Add("order by Nombre_Receta asc");
    ReceiptAdd->Query1->Open();
    if (ReceiptAdd->Query1->RecordCount != 0)
    {
        return 0;
    }

    /*do
    {
     if(atoi(edits1[cnt++]->Text.c_str())==0)
     {
     return 0;
     }
    } while(cnt<70); */

//validacion por campos mayores y menores

    for(i=0; i<70; i+=5)
    {
        for(j=i; j<=(i+3); j++)
        {
            if(StrToInt(edits1[j]->Text)> StrToInt(edits1[j+1]->Text))
            {
                return 1;
            }
        }
    }
    return 2;

}





