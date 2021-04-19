//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "query.h"
#include "reports.h"
#include "reports2.h"
#include "reports3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TQuerySc *QuerySc;
AnsiString selectedVar;
//---------------------------------------------------------------------------
__fastcall TQuerySc::TQuerySc(TComponent* Owner)
    : TForm(Owner)
{
    RadioGroup1->Items->Add("Temperatura de refrigeración");
    RadioGroup1->Items->Add("Temperatura de estandarización");
    RadioGroup1->Items->Add("Temperatura de pasteurización");
    RadioGroup1->Items->Add("Temperatura de homogeneización");
    RadioGroup1->Items->Add("Temperatura de pre-enfriado");
    RadioGroup1->Items->Add("Temperatura de incubación");
    RadioGroup1->Items->Add("Temperatura de enfriado");
    RadioGroup1->Items->Add("Porcentaje de yogurt en el envase");
    RadioGroup1->Items->Add("Porcentaje de colchón de frutas/cereal en el envase");
    RadioGroup1->Items->Add("Porcentaje de cubierta en el envase");

    for(int i = 0; i<10; i++)
    {
        DBChart1->SeriesList->Series[i]->Active = false;
    }
}
//---------------------------------------------------------------------------
void __fastcall TQuerySc::Button4Click(TObject *Sender)
{
    DBGrid2->Visible = true;
    DBGrid1->Visible = false;

    Button2->Enabled = false;
    Button1->Enabled = false;
    Button5->Enabled = true;
    RadioGroup1->Enabled = false;

    Query2->Close();
    Query2->SQL->Clear();
    Query2->SQL->Add("select Nro_Evento,Fecha,Hora,Usuario,Descripcion from Eventos.db");
    Query2->SQL->Add("where Atendido = 'No'");
    Query2->SQL->Add("order by Usuario,Fecha,Hora asc");
    Query2->Open();
}
//---------------------------------------------------------------------------
void __fastcall TQuerySc::Button2Click(TObject *Sender)
{
    PrintReportTemp->QuickRep1->Preview();
}
//---------------------------------------------------------------------------
void __fastcall TQuerySc::Button5Click(TObject *Sender)
{
    PrintReportAlarms->QuickRep1->Preview();
}
//---------------------------------------------------------------------------
void __fastcall TQuerySc::Button3Click(TObject *Sender)
{
    DBGrid1->Visible = true;
    DBGrid2->Visible = false;
    DBChart1->Visible = true;
    Button2->Enabled = true;
    Button1->Enabled = true;
    Button5->Enabled = false;
    RadioGroup1->Enabled = true;

    Query1->Close();
    Query1->SQL->Clear();
    Query1->SQL->Add("select * from Variables.db");
    Query1->SQL->Add("order by FECHA,HORA asc");
    Query1->Open();
}
//---------------------------------------------------------------------------






void __fastcall TQuerySc::Button7Click(TObject *Sender)
{
    DBGrid1->Visible = true;
    DBGrid2->Visible = false;
    DBChart1->Visible = true;
    Button2->Enabled = true;
    Button1->Enabled = true;
    Button5->Enabled = false;
    RadioGroup1->Enabled = true;

    Query1->Close();
    Query1->SQL->Clear();
    Query1->SQL->Add("SELECT * FROM Variables.db");
    Query1->SQL->Add("WHERE FECHA BETWEEN '"+DateTimePicker1->Date.DateString()+"'");
    Query1->SQL->Add("AND '"+DateTimePicker2->Date.DateString()+"'" );
    Query1->SQL->Add("ORDER by FECHA,HORA asc");
    Query1->Open();

}
//---------------------------------------------------------------------------


void __fastcall TQuerySc::Button1Click(TObject *Sender)
{
    PrintReportPP->QuickRep1->Preview();
}
//---------------------------------------------------------------------------







void __fastcall TQuerySc::RadioGroup1Click(TObject *Sender)
{
    for(int i = 0; i<10; i++)
    {
      DBChart1->SeriesList->Series[i]->Active = false;
    }

    if(RadioGroup1->ItemIndex==0)
    {
        DBChart1->SeriesList->Series[0]->Active = true;
    }
    else  if(RadioGroup1->ItemIndex==1)
    {
        DBChart1->SeriesList->Series[1]->Active = true;
    }
    else  if(RadioGroup1->ItemIndex==2)
    {
        DBChart1->SeriesList->Series[2]->Active = true;
    }
    else  if(RadioGroup1->ItemIndex==3)
    {
        DBChart1->SeriesList->Series[3]->Active = true;
    }
    else  if(RadioGroup1->ItemIndex==4)
    {
        DBChart1->SeriesList->Series[4]->Active = true;
    }
    else  if(RadioGroup1->ItemIndex==5)
    {
        DBChart1->SeriesList->Series[5]->Active = true;
    }
    else  if(RadioGroup1->ItemIndex==6)
    {
        DBChart1->SeriesList->Series[6]->Active = true;
    }
    else  if(RadioGroup1->ItemIndex==7)
    {
        DBChart1->SeriesList->Series[7]->Active = true;
    }
    else  if(RadioGroup1->ItemIndex==8)
    {
        DBChart1->SeriesList->Series[8]->Active = true;
    }
    else  if(RadioGroup1->ItemIndex==9)
    {
        DBChart1->SeriesList->Series[9]->Active = true;
    }

}
//---------------------------------------------------------------------------



