//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop


#include "historical_chart.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
THistoricalGraphs *HistoricalGraphs;
void InvisibleCharts(void);
//---------------------------------------------------------------------------
__fastcall THistoricalGraphs::THistoricalGraphs(TComponent* Owner)
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

    /*
    RadioGroup1->Items->Add("Tiempo de pasteurización");
    RadioGroup1->Items->Add("Tiempo de pre-enfriado");
    RadioGroup1->Items->Add("Tiempo de incubación");
    RadioGroup1->Items->Add("Tiempo de enfriado");
    */
    InvisibleCharts();
}
//---------------------------------------------------------------------------




void __fastcall THistoricalGraphs::RadioGroup1Click(TObject *Sender)
{
    InvisibleCharts();
// aca vamos a elegir lo que queremos mostrar en el grafico
    switch(RadioGroup1->ItemIndex)
    {
    case 0:
        DBChart1->Visible = true;
        break;
    case 1:
        DBChart2->Visible = true;
        break;
    case 2:
        DBChart3->Visible = true;
        break;
    case 3:
        DBChart4->Visible = true;
        break;
    case 4:
        DBChart5->Visible = true;
        break;
    case 5:
        DBChart6->Visible = true;
        break;
    case 6:
        DBChart7->Visible = true;
        break;
    case 7:
    case 8:
    case 9:
        DBChart8->Visible = true;
        break;
    default:
        InvisibleCharts();
        break;
    }
}

void InvisibleCharts(void)
{
    HistoricalGraphs->DBChart1->Visible = false;
    HistoricalGraphs->DBChart2->Visible = false;
    HistoricalGraphs->DBChart3->Visible = false;
    HistoricalGraphs->DBChart4->Visible = false;
    HistoricalGraphs->DBChart5->Visible = false;
    HistoricalGraphs->DBChart6->Visible = false;
    HistoricalGraphs->DBChart7->Visible = false;
    HistoricalGraphs->DBChart8->Visible = false;
}


//---------------------------------------------------------------------------




