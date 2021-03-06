//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "alarms.h"
#include "main.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAlarms1 *Alarms1;
//---------------------------------------------------------------------------
__fastcall TAlarms1::TAlarms1(TComponent* Owner)
    : TForm(Owner)
{
    Button1Click(NULL);
}
//---------------------------------------------------------------------------

void __fastcall TAlarms1::Button2Click(TObject *Sender)
{

    if(Edit1->Text != "")
    {
        Query1->Close();
        Query1->SQL->Clear();
        Query1->SQL->Add("UPDATE Eventos.db");
        Query1->SQL->Add("SET Atendido = 'Si', Atendido_por = '"+Principal->Label5->Caption+"'");
        Query1->SQL->Add("WHERE Nro_Evento =" + Edit1->Text);
        Query1->ExecSQL();
    }
    else
    {
        ShowMessage("Por favor escriba la alarma que desea atender y luego presione el bot?n Atender.");
    }
    Edit1->Text="";
    DBGrid1->Refresh();
    Principal->Table2->Refresh();

    Button1Click(NULL);


}
//---------------------------------------------------------------------------




void __fastcall TAlarms1::Button1Click(TObject *Sender)
{
    Query1->Close();
    Query1->SQL->Clear();
    Query1->SQL->Add("select Nro_Evento,Fecha,Hora,Usuario,Descripcion from Eventos.db");
    Query1->SQL->Add("where Atendido = 'No'");
    Query1->SQL->Add("order by Fecha,Hora ASC");
    Query1->Open();
}
//---------------------------------------------------------------------------

void __fastcall TAlarms1::DBGrid1CellClick(TColumn *Column)
{
    Edit1->Text = DBGrid1->Fields[Column->Index]->AsString;
}
//---------------------------------------------------------------------------



