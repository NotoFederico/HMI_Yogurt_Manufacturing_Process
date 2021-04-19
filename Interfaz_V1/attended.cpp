//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "attended.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAttended1 *Attended1;
//---------------------------------------------------------------------------
__fastcall TAttended1::TAttended1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TAttended1::Button2Click(TObject *Sender)
{
    Query1->Close();
    Query1->SQL->Clear();
    Query1->SQL->Add("select Nro_Evento,Fecha,Hora,Usuario,Descripcion,Atendido_por from Eventos.db");
    Query1->SQL->Add("where Atendido = 'Si'");
    Query1->SQL->Add("order by Fecha,Hora,Atendido_por ASC");
    Query1->Open();
}
//---------------------------------------------------------------------------


void __fastcall TAttended1::Button1Click(TObject *Sender)
{
    Label2->Caption = ComboBox1->Items->Strings[ComboBox1->ItemIndex].c_str();
    Query1->Close();
    Query1->SQL->Clear();
    Query1->SQL->Add("select Nro_Evento,Fecha,Hora,Usuario,Descripcion,Atendido_por from Eventos.db");
    Query1->SQL->Add("where Atendido = 'Si'");
    Query1->SQL->Add("AND Atendido_por = '"+Label2->Caption+"'");
    Query1->SQL->Add("order by Fecha,Hora ASC");
    Query1->Open();
}
//---------------------------------------------------------------------------

