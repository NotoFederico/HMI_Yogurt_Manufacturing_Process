//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "receipt_selection.h"
#include "main.h"
#include "string.h"
#include "communication.h"
#include "receipt_add.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

#define YOGURT 0
#define YOG_COL 1
#define YOG_COL_CUB 2


TReceiptSelection *ReceiptSelection;
TStringList  *ReceiptValues = new TStringList;
Alarm tempRef, tempEst, tempPas, tempHom, tempPre, tempInc, tempEnf, timePas, timePre, timeInc, timeEnf, ppYog, ppCol, ppCub;

//---------------------------------------------------------------------------
__fastcall TReceiptSelection::TReceiptSelection(TComponent* Owner)
    : TForm(Owner)
{
    ComboBox1->AddItem("Yogurt",NULL);
    ComboBox1->AddItem("Yogurt con colchon",NULL);
    ComboBox1->AddItem("Yogurt con colchon y cubierta",NULL);
    ComboBox1->ItemIndex = -1;

}
//---------------------------------------------------------------------------
void __fastcall TReceiptSelection::Button2Click(TObject *Sender)
{
    ModalResult = mrOk;
}
//---------------------------------------------------------------------------




void __fastcall TReceiptSelection::Button1Click(TObject *Sender)
{


    if(ComboBox1->ItemIndex!=-1)
    {
        if(Principal->Label15->Caption=="Desconectado")
        {
            Application->MessageBoxA("Primeramente establezca conexion con el servidor para continuar", "Error de conexion", MB_OK | MB_ICONERROR);
        }
        else
        {
            if(Application->MessageBoxA("Está seguro que quiere cargar la receta seleccionada?","Confirmación de carga",MB_YESNO)== IDYES)
            {
                Principal->Label9->Caption = ComboBox1->Items->Strings[ComboBox1->ItemIndex].c_str();

                ReceiptAdd->Query1->Close();
                ReceiptAdd->Query1->SQL->Clear();
                ReceiptAdd->Query1->SQL->Add("select * from Recetas.db");
                ReceiptAdd->Query1->SQL->Add("where Nombre_Receta = '"+Principal->Label9->Caption+"'");
                ReceiptAdd->Query1->Open();
                ReceiptAdd->Query1->First();
                Label1->Caption = ReceiptAdd->Query1->Fields->Fields[1]->AsString;

                for(int i = 2; i<(ReceiptAdd->Query1->FieldCount); i++)  // creo el label con todos los campos de la fila seleccionada
                {
                    Label1->Caption = Label1->Caption+ "," + ReceiptAdd->Query1->Fields->Fields[i]->AsString;
                }

                if(Comms->ClientSocket1->Active)
                {
                    Comms->ClientSocket1->Socket->SendText(Label1->Caption);  //envio el texto del Label

                    ReceiptValues->CommaText = Label1->Caption;


                    tempRef.ll = StrToFloat(ReceiptValues->Strings[0]);
                    tempRef.l = StrToFloat(ReceiptValues->Strings[1]);
                    tempRef.ideal = StrToFloat(ReceiptValues->Strings[2]);
                    tempRef.h = StrToFloat(ReceiptValues->Strings[3]);
                    tempRef.hh = StrToFloat(ReceiptValues->Strings[4]);

                    tempEst.ll = StrToFloat(ReceiptValues->Strings[5]);
                    tempEst.l = StrToFloat(ReceiptValues->Strings[6]);
                    tempEst.ideal = StrToFloat(ReceiptValues->Strings[7]);
                    tempEst.h = StrToFloat(ReceiptValues->Strings[8]);
                    tempEst.hh = StrToFloat(ReceiptValues->Strings[9]);

                    tempPas.ll = StrToFloat(ReceiptValues->Strings[10]);
                    tempPas.l = StrToFloat(ReceiptValues->Strings[11]);
                    tempPas.ideal = StrToFloat(ReceiptValues->Strings[12]);
                    tempPas.h = StrToFloat(ReceiptValues->Strings[13]);
                    tempPas.hh = StrToFloat(ReceiptValues->Strings[14]);

                    timePas.ll = StrToFloat(ReceiptValues->Strings[15]);
                    timePas.l = StrToFloat(ReceiptValues->Strings[16]);
                    timePas.ideal = StrToFloat(ReceiptValues->Strings[17]);
                    timePas.h = StrToFloat(ReceiptValues->Strings[18]);
                    timePas.hh = StrToFloat(ReceiptValues->Strings[19]);

                    tempHom.ll = StrToFloat(ReceiptValues->Strings[20]);
                    tempHom.l = StrToFloat(ReceiptValues->Strings[21]);
                    tempHom.ideal = StrToFloat(ReceiptValues->Strings[22]);
                    tempHom.h = StrToFloat(ReceiptValues->Strings[23]);
                    tempHom.hh = StrToFloat(ReceiptValues->Strings[24]);

                    timePre.ll = StrToFloat(ReceiptValues->Strings[25]);
                    timePre.l = StrToFloat(ReceiptValues->Strings[26]);
                    timePre.ideal = StrToFloat(ReceiptValues->Strings[27]);
                    timePre.h = StrToFloat(ReceiptValues->Strings[28]);
                    timePre.hh = StrToFloat(ReceiptValues->Strings[29]);

                    tempPre.ll = StrToFloat(ReceiptValues->Strings[30]);
                    tempPre.l = StrToFloat(ReceiptValues->Strings[31]);
                    tempPre.ideal = StrToFloat(ReceiptValues->Strings[32]);
                    tempPre.h = StrToFloat(ReceiptValues->Strings[33]);
                    tempPre.hh = StrToFloat(ReceiptValues->Strings[34]);

                    timeInc.ll = StrToFloat(ReceiptValues->Strings[35]);
                    timeInc.l = StrToFloat(ReceiptValues->Strings[36]);
                    timeInc.ideal = StrToFloat(ReceiptValues->Strings[37]);
                    timeInc.h = StrToFloat(ReceiptValues->Strings[38]);
                    timeInc.hh = StrToFloat(ReceiptValues->Strings[39]);

                    tempInc.ll = StrToFloat(ReceiptValues->Strings[40]);
                    tempInc.l = StrToFloat(ReceiptValues->Strings[41]);
                    tempInc.ideal = StrToFloat(ReceiptValues->Strings[42]);
                    tempInc.h = StrToFloat(ReceiptValues->Strings[43]);
                    tempInc.hh = StrToFloat(ReceiptValues->Strings[44]);

                    tempEnf.ll = StrToFloat(ReceiptValues->Strings[45]);
                    tempEnf.l = StrToFloat(ReceiptValues->Strings[46]);
                    tempEnf.ideal = StrToFloat(ReceiptValues->Strings[47]);
                    tempEnf.h = StrToFloat(ReceiptValues->Strings[48]);
                    tempEnf.hh = StrToFloat(ReceiptValues->Strings[49]);

                    timeEnf.ll = StrToFloat(ReceiptValues->Strings[50]);
                    timeEnf.l = StrToFloat(ReceiptValues->Strings[51]);
                    timeEnf.ideal = StrToFloat(ReceiptValues->Strings[52]);
                    timeEnf.h = StrToFloat(ReceiptValues->Strings[53]);
                    timeEnf.hh = StrToFloat(ReceiptValues->Strings[54]);

                    ppYog.ll = StrToFloat(ReceiptValues->Strings[55]);
                    ppYog.l = StrToFloat(ReceiptValues->Strings[56]);
                    ppYog.ideal = StrToFloat(ReceiptValues->Strings[57]);
                    ppYog.h = StrToFloat(ReceiptValues->Strings[58]);
                    ppYog.hh = StrToFloat(ReceiptValues->Strings[59]);

                    ppCol.ll = StrToFloat(ReceiptValues->Strings[60]);
                    ppCol.l = StrToFloat(ReceiptValues->Strings[61]);
                    ppCol.ideal = StrToFloat(ReceiptValues->Strings[62]);
                    ppCol.h = StrToFloat(ReceiptValues->Strings[63]);
                    ppCol.hh = StrToFloat(ReceiptValues->Strings[64]);

                    ppCub.ll = StrToFloat(ReceiptValues->Strings[65]);
                    ppCub.l = StrToFloat(ReceiptValues->Strings[66]);
                    ppCub.ideal = StrToFloat(ReceiptValues->Strings[67]);
                    ppCub.h = StrToFloat(ReceiptValues->Strings[68]);
                    ppCub.hh = StrToFloat(ReceiptValues->Strings[69]);

                    Principal->Timer1->Enabled = true;

                    if(Principal->DdeClientConv1->OpenLink())
                    {
                        Beep();
                    }
                    Application->MessageBoxA("Receta seleccionada exitosamente","Confirmación de seleccion",MB_OK);
                }

            }
        }
    }
    else
    {
        Application->MessageBoxA("Ninguna receta fue elegida", "Seleccione una receta", MB_OK | MB_ICONERROR);
    }

}
//---------------------------------------------------------------------------







