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
TReceiptEdition *ReceiptEdition;
TEdit* edits[70];

int validation(void);

//---------------------------------------------------------------------------
__fastcall TReceiptEdition::TReceiptEdition(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TReceiptEdition::Button2Click(TObject *Sender)
{
    ModalResult = mrOk;
}
//---------------------------------------------------------------------------



void __fastcall TReceiptEdition::Button1Click(TObject *Sender)
{
    int value = validation();

    if(ComboBox1->ItemIndex!=-1)
    {
        if(Principal->Label9->Caption == ComboBox1->Items->Strings[ComboBox1->ItemIndex].c_str())
        {
            Application->MessageBoxA("No puede modificar una receta en ejecucion", "Error", MB_OK | MB_ICONERROR);
        }
        else
        {
            if(Application->MessageBoxA("Está seguro que quiere modificar la receta seleccionada?","Confirmación de carga",MB_YESNO)== IDYES)
            {
                if(value == 2)
                {
                    /*Query1->Close();
                    Query1->SQL->Clear();
                    Query1->SQL->Add("delete from Recetas.db");
                    Query1->SQL->Add("where Nombre_Receta = '"+Label21->Caption+"'");
                    Query1->ExecSQL();  */

                    Query1->Close();
                    Query1->SQL->Clear();
                    Query1->SQL->Add("update Recetas.db");
                    Query1->SQL->Add("set Nombre_Receta='"+ReceiptEdition->Label21->Caption+"',");
                    Query1->SQL->Add("Temp_Ref_LL="+Edit1->Text+",Temp_Ref_L="+Edit2->Text+",Temp_Ref_N="+Edit3->Text+",Temp_Ref_H="+Edit4->Text+",Temp_Ref_HH="+Edit5->Text+",");
                    Query1->SQL->Add("Temp_Est_LL="+Edit6->Text+",Temp_Est_L="+Edit7->Text+",Temp_Est_N="+Edit8->Text+",Temp_Est_H="+Edit9->Text+",Temp_Est_HH="+Edit10->Text+",");
                    Query1->SQL->Add("Temp_Pas_LL="+Edit11->Text+",Temp_Pas_L="+Edit12->Text+",Temp_Pas_N="+Edit13->Text+",Temp_Pas_H="+Edit14->Text+",Temp_Pas_HH="+Edit15->Text+",");
                    Query1->SQL->Add("Tiem_Pas_LL="+Edit16->Text+",Tiem_Pas_L="+Edit17->Text+",Tiem_Pas_N="+Edit18->Text+",Tiem_Pas_H="+Edit19->Text+",Tiem_Pas_HH="+Edit20->Text+",");
                    Query1->SQL->Add("Temp_Hom_LL="+Edit21->Text+",Temp_Hom_L="+Edit22->Text+",Temp_Hom_N="+Edit23->Text+",Temp_Hom_H="+Edit24->Text+",Temp_Hom_HH="+Edit25->Text+",");
                    Query1->SQL->Add("Tiem_Pre_LL="+Edit26->Text+",Tiem_Pre_L="+Edit27->Text+",Tiem_Pre_N="+Edit28->Text+",Tiem_Pre_H="+Edit29->Text+",Tiem_Pre_HH="+Edit30->Text+",");
                    Query1->SQL->Add("Temp_Pre_LL="+Edit31->Text+",Temp_Pre_L="+Edit32->Text+",Temp_Pre_N="+Edit33->Text+",Temp_Pre_H="+Edit34->Text+",Temp_Pre_HH="+Edit35->Text+",");
                    Query1->SQL->Add("Tiem_Inc_LL="+Edit36->Text+",Tiem_Inc_L="+Edit37->Text+",Tiem_Inc_N="+Edit38->Text+",Tiem_Inc_H="+Edit39->Text+",Tiem_Inc_HH="+Edit40->Text+",");
                    Query1->SQL->Add("Temp_Inc_LL="+Edit41->Text+",Temp_Inc_L="+Edit42->Text+",Temp_Inc_N="+Edit43->Text+",Temp_Inc_H="+Edit44->Text+",Temp_Inc_HH="+Edit45->Text+",");
                    Query1->SQL->Add("Tiem_Enf_LL="+Edit46->Text+",Tiem_Enf_L="+Edit47->Text+",Tiem_Enf_N="+Edit48->Text+",Tiem_Enf_H="+Edit49->Text+",Tiem_Enf_HH="+Edit50->Text+",");
                    Query1->SQL->Add("Temp_Enf_LL="+Edit51->Text+",Temp_Enf_L="+Edit52->Text+",Temp_Enf_N="+Edit53->Text+",Temp_Enf_H="+Edit54->Text+",Temp_Enf_HH="+Edit55->Text+",");
                    Query1->SQL->Add("Porc_Yor_LL="+Edit56->Text+",Porc_Yor_L="+Edit57->Text+",Porc_Yor_N="+Edit58->Text+",Porc_Yor_H="+Edit59->Text+",Porc_Yor_HH="+Edit60->Text+",");
                    Query1->SQL->Add("Porc_Col_LL="+Edit61->Text+",Porc_Col_L="+Edit62->Text+",Porc_Col_N="+Edit63->Text+",Porc_Col_H="+Edit64->Text+",Porc_Col_HH="+Edit65->Text+",");
                    Query1->SQL->Add("Porc_Cub_LL="+Edit66->Text+",Porc_Cub_L="+Edit67->Text+",Porc_Cub_N="+Edit68->Text+",Porc_Cub_H="+Edit69->Text+",Porc_Cub_HH="+Edit70->Text);

                    Query1->SQL->Add("where Nombre_Receta ='"+ReceiptEdition->Label21->Caption+"'");

                    /*Query1->SQL->Add("values('"+Label21->Caption+"',");
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
                    Query1->SQL->Add(""+Edit66->Text+","+Edit67->Text+","+Edit68->Text+","+Edit69->Text+","+Edit70->Text+")");*/

                    Query1->ExecSQL();
                    Application->MessageBoxA("La receta ha sido modificada satisfactoriamente","Carga exitosa");
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
    }
}
//---------------------------------------------------------------------------
int validation(void)
{
//int cnt = 0;

    edits[0] = ReceiptEdition->Edit1;
    edits[1] = ReceiptEdition->Edit2;
    edits[2] = ReceiptEdition->Edit3;
    edits[3] = ReceiptEdition->Edit4;
    edits[4] = ReceiptEdition->Edit5;
    edits[5] = ReceiptEdition->Edit6;
    edits[6] = ReceiptEdition->Edit7;
    edits[7] = ReceiptEdition->Edit8;
    edits[8] = ReceiptEdition->Edit9;
    edits[9] = ReceiptEdition->Edit10;
    edits[10] = ReceiptEdition->Edit11;
    edits[11] = ReceiptEdition->Edit12;
    edits[12] = ReceiptEdition->Edit13;
    edits[13] = ReceiptEdition->Edit14;
    edits[14] = ReceiptEdition->Edit15;
    edits[15] = ReceiptEdition->Edit16;
    edits[16] = ReceiptEdition->Edit17;
    edits[17] = ReceiptEdition->Edit18;
    edits[18] = ReceiptEdition->Edit19;
    edits[19] = ReceiptEdition->Edit20;
    edits[20] = ReceiptEdition->Edit21;
    edits[21] = ReceiptEdition->Edit22;
    edits[22] = ReceiptEdition->Edit23;
    edits[23] = ReceiptEdition->Edit24;
    edits[24] = ReceiptEdition->Edit25;
    edits[25] = ReceiptEdition->Edit26;
    edits[26] = ReceiptEdition->Edit27;
    edits[27] = ReceiptEdition->Edit28;
    edits[28] = ReceiptEdition->Edit29;
    edits[29] = ReceiptEdition->Edit30;
    edits[30] = ReceiptEdition->Edit31;
    edits[31] = ReceiptEdition->Edit32;
    edits[32] = ReceiptEdition->Edit33;
    edits[33] = ReceiptEdition->Edit34;
    edits[34] = ReceiptEdition->Edit35;
    edits[35] = ReceiptEdition->Edit36;
    edits[36] = ReceiptEdition->Edit37;
    edits[37] = ReceiptEdition->Edit38;
    edits[38] = ReceiptEdition->Edit39;
    edits[39] = ReceiptEdition->Edit40;
    edits[40] = ReceiptEdition->Edit41;
    edits[41] = ReceiptEdition->Edit42;
    edits[42] = ReceiptEdition->Edit43;
    edits[43] = ReceiptEdition->Edit44;
    edits[44] = ReceiptEdition->Edit45;
    edits[45] = ReceiptEdition->Edit46;
    edits[46] = ReceiptEdition->Edit47;
    edits[47] = ReceiptEdition->Edit48;
    edits[48] = ReceiptEdition->Edit49;
    edits[49] = ReceiptEdition->Edit50;
    edits[50] = ReceiptEdition->Edit51;
    edits[51] = ReceiptEdition->Edit52;
    edits[52] = ReceiptEdition->Edit53;
    edits[53] = ReceiptEdition->Edit54;
    edits[54] = ReceiptEdition->Edit55;
    edits[55] = ReceiptEdition->Edit56;
    edits[56] = ReceiptEdition->Edit57;
    edits[57] = ReceiptEdition->Edit58;
    edits[58] = ReceiptEdition->Edit59;
    edits[59] = ReceiptEdition->Edit60;
    edits[60] = ReceiptEdition->Edit61;
    edits[61] = ReceiptEdition->Edit62;
    edits[62] = ReceiptEdition->Edit63;
    edits[63] = ReceiptEdition->Edit64;
    edits[64] = ReceiptEdition->Edit65;
    edits[65] = ReceiptEdition->Edit66;
    edits[66] = ReceiptEdition->Edit67;
    edits[67] = ReceiptEdition->Edit68;
    edits[68] = ReceiptEdition->Edit69;
    edits[69] = ReceiptEdition->Edit70;


//validacion por campos nulos
    int i=0,j=0;

    /*ReceiptEdition->Query1->Close();
    ReceiptEdition->Query1->SQL->Clear();
    ReceiptEdition->Query1->SQL->Add("select * from Recetas.db");
    ReceiptEdition->Query1->SQL->Add("where Nombre_Receta = '"+ReceiptEdition->Label21->Caption+"' ");
    ReceiptEdition->Query1->SQL->Add("order by Nombre_Receta asc");
    ReceiptEdition->Query1->Open();
    if (ReceiptEdition->Query1->RecordCount != 0)
    {return 0;} */
//validacion por campos mayores y menores

    for(i=0; i<70; i+=5)
    {
        for(j=i; j<=(i+3); j++)
        {
            if(StrToInt(edits[j]->Text)> StrToInt(edits[j+1]->Text))
            {
                return 1;
            }
        }
    }
    return 2;
}

void __fastcall TReceiptEdition::ComboBox1Change(TObject *Sender)
{
    ReceiptEdition->Label21->Caption = ComboBox1->Items->Strings[ComboBox1->ItemIndex].c_str();

    ReceiptEdition->Query1->Close();
    ReceiptEdition->Query1->SQL->Clear();
    ReceiptEdition->Query1->SQL->Add("select * from Recetas.db");
    ReceiptEdition->Query1->SQL->Add("where Nombre_Receta = '"+ReceiptEdition->Label21->Caption+"'");
    ReceiptEdition->Query1->Open();
    ReceiptEdition->Query1->First();


    ReceiptEdition->Edit1->Text =  ReceiptEdition->Query1->Fields->Fields[1]->AsString;
    ReceiptEdition->Edit2->Text =  ReceiptEdition->Query1->Fields->Fields[2]->AsString;
    ReceiptEdition->Edit3->Text =  ReceiptEdition->Query1->Fields->Fields[3]->AsString;
    ReceiptEdition->Edit4->Text =  ReceiptEdition->Query1->Fields->Fields[4]->AsString;
    ReceiptEdition->Edit5->Text =  ReceiptEdition->Query1->Fields->Fields[5]->AsString;
    ReceiptEdition->Edit6->Text =  ReceiptEdition->Query1->Fields->Fields[6]->AsString;
    ReceiptEdition->Edit7->Text =  ReceiptEdition->Query1->Fields->Fields[7]->AsString;
    ReceiptEdition->Edit8->Text =  ReceiptEdition->Query1->Fields->Fields[8]->AsString;
    ReceiptEdition->Edit9->Text =  ReceiptEdition->Query1->Fields->Fields[9]->AsString;
    ReceiptEdition->Edit10->Text =  ReceiptEdition->Query1->Fields->Fields[10]->AsString;
    ReceiptEdition->Edit11->Text =  ReceiptEdition->Query1->Fields->Fields[11]->AsString;
    ReceiptEdition->Edit12->Text =  ReceiptEdition->Query1->Fields->Fields[12]->AsString;
    ReceiptEdition->Edit13->Text =  ReceiptEdition->Query1->Fields->Fields[13]->AsString;
    ReceiptEdition->Edit14->Text =  ReceiptEdition->Query1->Fields->Fields[14]->AsString;
    ReceiptEdition->Edit15->Text =  ReceiptEdition->Query1->Fields->Fields[15]->AsString;
    ReceiptEdition->Edit16->Text =  ReceiptEdition->Query1->Fields->Fields[16]->AsString;
    ReceiptEdition->Edit17->Text =  ReceiptEdition->Query1->Fields->Fields[17]->AsString;
    ReceiptEdition->Edit18->Text =  ReceiptEdition->Query1->Fields->Fields[18]->AsString;
    ReceiptEdition->Edit19->Text =  ReceiptEdition->Query1->Fields->Fields[19]->AsString;
    ReceiptEdition->Edit20->Text =  ReceiptEdition->Query1->Fields->Fields[20]->AsString;
    ReceiptEdition->Edit21->Text =  ReceiptEdition->Query1->Fields->Fields[21]->AsString;
    ReceiptEdition->Edit22->Text =  ReceiptEdition->Query1->Fields->Fields[22]->AsString;
    ReceiptEdition->Edit23->Text =  ReceiptEdition->Query1->Fields->Fields[23]->AsString;
    ReceiptEdition->Edit24->Text =  ReceiptEdition->Query1->Fields->Fields[24]->AsString;
    ReceiptEdition->Edit25->Text =  ReceiptEdition->Query1->Fields->Fields[25]->AsString;
    ReceiptEdition->Edit26->Text =  ReceiptEdition->Query1->Fields->Fields[26]->AsString;
    ReceiptEdition->Edit27->Text =  ReceiptEdition->Query1->Fields->Fields[27]->AsString;
    ReceiptEdition->Edit28->Text =  ReceiptEdition->Query1->Fields->Fields[28]->AsString;
    ReceiptEdition->Edit29->Text =  ReceiptEdition->Query1->Fields->Fields[29]->AsString;
    ReceiptEdition->Edit30->Text =  ReceiptEdition->Query1->Fields->Fields[30]->AsString;
    ReceiptEdition->Edit31->Text =  ReceiptEdition->Query1->Fields->Fields[31]->AsString;
    ReceiptEdition->Edit32->Text =  ReceiptEdition->Query1->Fields->Fields[32]->AsString;
    ReceiptEdition->Edit33->Text =  ReceiptEdition->Query1->Fields->Fields[33]->AsString;
    ReceiptEdition->Edit34->Text =  ReceiptEdition->Query1->Fields->Fields[34]->AsString;
    ReceiptEdition->Edit35->Text =  ReceiptEdition->Query1->Fields->Fields[35]->AsString;
    ReceiptEdition->Edit36->Text =  ReceiptEdition->Query1->Fields->Fields[36]->AsString;
    ReceiptEdition->Edit37->Text =  ReceiptEdition->Query1->Fields->Fields[37]->AsString;
    ReceiptEdition->Edit38->Text =  ReceiptEdition->Query1->Fields->Fields[38]->AsString;
    ReceiptEdition->Edit39->Text =  ReceiptEdition->Query1->Fields->Fields[39]->AsString;
    ReceiptEdition->Edit40->Text =  ReceiptEdition->Query1->Fields->Fields[40]->AsString;
    ReceiptEdition->Edit41->Text =  ReceiptEdition->Query1->Fields->Fields[41]->AsString;
    ReceiptEdition->Edit42->Text =  ReceiptEdition->Query1->Fields->Fields[42]->AsString;
    ReceiptEdition->Edit43->Text =  ReceiptEdition->Query1->Fields->Fields[43]->AsString;
    ReceiptEdition->Edit44->Text =  ReceiptEdition->Query1->Fields->Fields[44]->AsString;
    ReceiptEdition->Edit45->Text =  ReceiptEdition->Query1->Fields->Fields[45]->AsString;
    ReceiptEdition->Edit46->Text =  ReceiptEdition->Query1->Fields->Fields[46]->AsString;
    ReceiptEdition->Edit47->Text =  ReceiptEdition->Query1->Fields->Fields[47]->AsString;
    ReceiptEdition->Edit48->Text =  ReceiptEdition->Query1->Fields->Fields[48]->AsString;
    ReceiptEdition->Edit49->Text =  ReceiptEdition->Query1->Fields->Fields[49]->AsString;
    ReceiptEdition->Edit50->Text =  ReceiptEdition->Query1->Fields->Fields[20]->AsString;
    ReceiptEdition->Edit51->Text =  ReceiptEdition->Query1->Fields->Fields[51]->AsString;
    ReceiptEdition->Edit52->Text =  ReceiptEdition->Query1->Fields->Fields[52]->AsString;
    ReceiptEdition->Edit53->Text =  ReceiptEdition->Query1->Fields->Fields[53]->AsString;
    ReceiptEdition->Edit54->Text =  ReceiptEdition->Query1->Fields->Fields[54]->AsString;
    ReceiptEdition->Edit55->Text =  ReceiptEdition->Query1->Fields->Fields[55]->AsString;
    ReceiptEdition->Edit56->Text =  ReceiptEdition->Query1->Fields->Fields[56]->AsString;
    ReceiptEdition->Edit57->Text =  ReceiptEdition->Query1->Fields->Fields[57]->AsString;
    ReceiptEdition->Edit58->Text =  ReceiptEdition->Query1->Fields->Fields[58]->AsString;
    ReceiptEdition->Edit59->Text =  ReceiptEdition->Query1->Fields->Fields[59]->AsString;
    ReceiptEdition->Edit60->Text =  ReceiptEdition->Query1->Fields->Fields[60]->AsString;
    ReceiptEdition->Edit61->Text =  ReceiptEdition->Query1->Fields->Fields[61]->AsString;
    ReceiptEdition->Edit62->Text =  ReceiptEdition->Query1->Fields->Fields[62]->AsString;
    ReceiptEdition->Edit63->Text =  ReceiptEdition->Query1->Fields->Fields[63]->AsString;
    ReceiptEdition->Edit64->Text =  ReceiptEdition->Query1->Fields->Fields[64]->AsString;
    ReceiptEdition->Edit65->Text =  ReceiptEdition->Query1->Fields->Fields[65]->AsString;
    ReceiptEdition->Edit66->Text =  ReceiptEdition->Query1->Fields->Fields[66]->AsString;
    ReceiptEdition->Edit67->Text =  ReceiptEdition->Query1->Fields->Fields[67]->AsString;
    ReceiptEdition->Edit68->Text =  ReceiptEdition->Query1->Fields->Fields[68]->AsString;
    ReceiptEdition->Edit69->Text =  ReceiptEdition->Query1->Fields->Fields[69]->AsString;
    ReceiptEdition->Edit70->Text =  ReceiptEdition->Query1->Fields->Fields[70]->AsString;

}
//---------------------------------------------------------------------------

