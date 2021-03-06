//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <string.h>
#include "main.h"
#include "credentials.h"
//#include "variables.h"
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
#include "attended.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "PERFGRAP"
#pragma link "VrBlinkLed"
#pragma link "VrControls"
#pragma link "VrThermoMeter"
#pragma link "VrBlinkLed"
#pragma link "VrControls"
#pragma link "VrThermoMeter"
#pragma link "VrLcd"
#pragma link "LPControl"
#pragma link "LPControlDrawLayers"
#pragma link "SLControlCollection"
#pragma link "SLScope"
#pragma link "ILGlassPanel"
#pragma link "LPTransparentControl"
#pragma link "ULBasicControl"
#pragma link "ILSegmentGauge"
#pragma link "ILSegmentIndicator"
#pragma link "ILSegmentText"
#pragma link "VrProgressBar"
#pragma link "ILAnalogInstrument"
#pragma link "ILProgressBar"
#pragma resource "*.dfm"

#define TEMPREF 0
#define TEMPEST 1
#define TEMPPAS 2
#define TIMEPAS 3
#define TEMPHOM 4
#define TEMPPRE 5
#define TIMEPRE 6
#define TEMPINC 7
#define TIMEINC 8
#define TEMPENF 9
#define TIMEENF 10
#define PPYOG   11
#define PPCOL   12
#define PPCUB   13

TPrincipal *Principal;

DiscVar disc;
ContVar cont;
ItemIndexCb graph;
Credentials Hierarchy1;
TDateTime timestamp;

double counter = 0; //para actualizar los gr?ficos en tiempo real
int eventCounter = 0; //numero de evento en la tabla de eventos
void realTimeGraph(int index, int value); //index es el valor de elemento del combobox; array es...
//---------------------------------------------------------------------------
__fastcall TPrincipal::TPrincipal(TComponent* Owner) : TForm(Owner)
{
    Timer1->Enabled = false;
    Timer2->Enabled = false;
    Timer3->Enabled = false;
    Timer4->Enabled = false;
    Timer5->Enabled = false;
    Timer6->Enabled = false;
    Timer7->Enabled = false;

    disc.resetAll();    // inicializo las variables discretas
    cont.resetAll();    // inicializo las variables continuas
    graph.Init();       // inicializo variable antigua y actual

    ComboBox1->AddItem("Temperatura de refrigeraci?n",NULL);  // index = 0
    ComboBox1->AddItem("Temperatura de estandarizaci?n",NULL); // index = 1
    ComboBox1->AddItem("Temperatura de pasteurizaci?n",NULL); // index = 2
    ComboBox1->AddItem("Tiempo de pasteurizaci?n",NULL); // index = 3
    ComboBox1->AddItem("Temperatura de homogeneizaci?n",NULL); // index = 4
    ComboBox1->AddItem("Temperatura de pre-enfriado",NULL);// index = 5
    ComboBox1->AddItem("Tiempo de pre-enfriado",NULL); // index = 6
    ComboBox1->AddItem("Temperatura de incubaci?n",NULL); // index = 7
    ComboBox1->AddItem("Tiempo de incubaci?n",NULL);// index = 8
    ComboBox1->AddItem("Temperatura de enfriado",NULL); // index = 9
    ComboBox1->AddItem("Tiempo de enfriado",NULL);// index = 10
    ComboBox1->AddItem("Porcentaje de yogurt en el envase",NULL);// index = 11
    ComboBox1->AddItem("Porcentaje de colch?n de frutas/cereal en el envase",NULL); // index = 12
    ComboBox1->AddItem("Porcentaje de cubierta en el envase",NULL);// index = 13

    DdeClientItem1->DdeConv = DdeClientConv1;
    DdeClientItem2->DdeConv = DdeClientConv1;
    DdeClientItem3->DdeConv = DdeClientConv1;
    DdeClientItem4->DdeConv = DdeClientConv1;
    DdeClientItem5->DdeConv = DdeClientConv1;
    DdeClientItem6->DdeConv = DdeClientConv1;
    DdeClientItem7->DdeConv = DdeClientConv1;
    DdeClientItem8->DdeConv = DdeClientConv1;
    DdeClientItem9->DdeConv = DdeClientConv1;
    DdeClientItem10->DdeConv = DdeClientConv1;
    DdeClientItem11->DdeConv = DdeClientConv1;
    DdeClientItem12->DdeConv = DdeClientConv1;
    DdeClientItem13->DdeConv = DdeClientConv1;
    DdeClientItem14->DdeConv = DdeClientConv1;

    DdeClientItem1->DdeItem = "DdeServerItem1";
    DdeClientItem2->DdeItem = "DdeServerItem2";
    DdeClientItem3->DdeItem = "DdeServerItem3";
    DdeClientItem4->DdeItem = "DdeServerItem4";
    DdeClientItem5->DdeItem = "DdeServerItem5";
    DdeClientItem6->DdeItem = "DdeServerItem6";
    DdeClientItem7->DdeItem = "DdeServerItem7";
    DdeClientItem8->DdeItem = "DdeServerItem8";
    DdeClientItem9->DdeItem = "DdeServerItem9";
    DdeClientItem10->DdeItem = "DdeServerItem10";
    DdeClientItem11->DdeItem = "DdeServerItem11";
    DdeClientItem12->DdeItem = "DdeServerItem12";
    DdeClientItem13->DdeItem = "DdeServerItem13";
    DdeClientItem14->DdeItem = "DdeServerItem14";

    for(int i = 0; i<15; i++)
    {
        SLScope1->Channels->Channels[i]->Visible = false;   // hace invisible a los 14 canales del grafico en tiempo real
    }

    Table2->Append(); // tabla de eventos
    eventCounter = Table2->RecordCount; //obtengo el ultimo numero de evento
    Table2->FieldByName("Nro_Evento")->AsString = eventCounter++;
    Table2->FieldByName("Fecha")->AsString = DateToStr(Date());
    Table2->FieldByName("Hora")->AsString = TimeToStr(Time());
    Table2->FieldByName("Descripcion")->AsString = "Inicio de la interfaz";
    Table2->Post();

    Hierarchy1.Default(); //ningun usuario loggeado


    if(DdeClientConv1->OpenLink())
    {
        Beep();
    }

    Shape1->Brush->Style = bsClear;
    Shape2->Brush->Style = bsClear;
    Shape3->Brush->Style = bsClear;
    Shape4->Brush->Style = bsClear;
    Shape5->Brush->Style = bsClear;
    Shape6->Brush->Style = bsClear;
    Shape7->Brush->Style = bsClear;
}
//---------------------------------------------------------------------------




void __fastcall TPrincipal::Login1Click(TObject *Sender)
{
    Auth->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TPrincipal::Salir1Click(TObject *Sender)
{
    Application->Terminate();
}
//---------------------------------------------------------------------------








void __fastcall TPrincipal::Nohayayuda1Click(TObject *Sender)
{
 ShellExecute(NULL, "Open", "Manual-de-usuario.pdf", NULL, NULL, SW_SHOWDEFAULT);
}
//---------------------------------------------------------------------------






void __fastcall TPrincipal::Historicos1Click(TObject *Sender)
{
    HistoricalGraphs->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TPrincipal::DdeClientItem14Change(TObject *Sender)
{

    if(DdeClientItem14->Text != "")
    {
        bool redFlagppYog = false, redFlagppCol = false, redFlagppCub = false;
        bool redFlagtempInc = false, redFlagtempEnf = false, redFlagtimeInc = false;
        bool redFlagtempPas = false;
        bool redFlagtempPre = false;

//asigno los valores generados en el servidor a variables en el cliente

        cont.tempRef = atoi(DdeClientItem1->Text.c_str());
        cont.tempEst = atoi(DdeClientItem2->Text.c_str());
        cont.tempPas = atoi(DdeClientItem3->Text.c_str());
        cont.timePas = atoi(DdeClientItem4->Text.c_str());
        cont.tempHom = atoi(DdeClientItem5->Text.c_str());
        cont.tempPre = atoi(DdeClientItem7->Text.c_str());
        cont.timePre = atoi(DdeClientItem6->Text.c_str());
        cont.tempInc = atoi(DdeClientItem9->Text.c_str());
        cont.timeInc = atoi(DdeClientItem8->Text.c_str());
        cont.tempEnf = atoi(DdeClientItem10->Text.c_str());
        cont.timeEnf = atoi(DdeClientItem11->Text.c_str());
        cont.ppYog   = atoi(DdeClientItem12->Text.c_str());
        cont.ppCol   = atoi(DdeClientItem13->Text.c_str());
        cont.ppCub   = atoi(DdeClientItem14->Text.c_str());

// Grafico todas las variables y muestro solo la seleccionada

        realTimeGraph( TEMPREF, cont.tempRef);
        realTimeGraph( TEMPEST, cont.tempEst);
        realTimeGraph( TEMPPAS, cont.tempPas);
        realTimeGraph( TIMEPAS, cont.timePas);
        realTimeGraph( TEMPHOM, cont.tempHom);
        realTimeGraph( TEMPPRE, cont.tempPre);
        realTimeGraph( TIMEPRE, cont.timePre);
        realTimeGraph( TEMPINC, cont.tempInc);
        realTimeGraph( TIMEINC, cont.timeInc);
        realTimeGraph( TEMPENF, cont.tempEnf);
        realTimeGraph( TIMEENF, cont.timeEnf);
        realTimeGraph( PPYOG, cont.ppYog);
        realTimeGraph( PPCUB, cont.ppCub);
        realTimeGraph( PPCOL, cont.ppCol);

// Muestro los valores de temperatura en los visores

        ILSegmentGauge1->Value =  cont.tempRef;
        ILSegmentGauge2->Value =  cont.tempEst;
        ILSegmentGauge3->Value =  cont.tempPas;
        ILSegmentGauge4->Value =  cont.tempHom;
        ILSegmentGauge5->Value =  cont.tempPre;
        ILSegmentGauge6->Value =  cont.tempInc;
        ILSegmentGauge7->Value =  cont.tempEnf;

//Muestro los porcentajes de llenado en los visores

        ILSegmentGauge9->Value =  cont.ppYog;
        ILSegmentGauge8->Value =  cont.ppCol;
        ILSegmentGauge10->Value =  cont.ppCub;


// Muestro los valores de tiempo en los cronometros

        VrClock4->Hours = cont.timePas/60;
        VrClock4->Minutes =  (VrClock4->Hours>=1)?(cont.timePas-60*(VrClock4->Hours)):cont.timePas;

        VrClock6->Hours = cont.timePre/60;
        VrClock6->Minutes =  (VrClock6->Hours>=1)?(cont.timePre-60*(VrClock6->Hours)):cont.timePre;

        VrClock7->Hours = cont.timeInc/60;
        VrClock7->Minutes =  (VrClock7->Hours>=1)?(cont.timeInc-60*(VrClock7->Hours)):cont.timeInc;

        VrClock2->Hours = cont.timeEnf/60;
        VrClock2->Minutes =  (VrClock2->Hours>=1)?(cont.timeEnf-60*(VrClock2->Hours)):cont.timeEnf;

// Rutinas de alarmas

// Alarma de temperatura de refrigeraci?n

        if(cont.tempRef>=tempRef.ideal && cont.tempRef<tempRef.h || cont.tempRef<=tempRef.ideal && cont.tempRef>tempRef.l)
        {
            Shape1->Brush->Style = bsClear;
            disc.valRef = true;
            Image2->Visible = disc.valRef;
            disc.motEst = true;
            Image4->Visible = disc.motEst;

            Table2->Append(); // tabla de eventos
            eventCounter = Table2->RecordCount; //obtengo el ultimo numero de evento
            Table2->FieldByName("Nro_Evento")->AsString = eventCounter++;
            Table2->FieldByName("Fecha")->AsString = DateToStr(Date());
            Table2->FieldByName("Hora")->AsString = TimeToStr(Time());
            Table2->FieldByName("Usuario")->AsString = Label5->Caption;
            Table2->FieldByName("Descripcion")->AsString = "Se accion? la val. de Ref. y el mot. de Est.";
            Table2->Post();
        }
        else
        {
            Table2->Append(); // tabla de eventos
            eventCounter = Table2->RecordCount; //obtengo el ultimo numero de evento
            Table2->FieldByName("Nro_Evento")->AsString = eventCounter++;
            Table2->FieldByName("Fecha")->AsString = DateToStr(Date());
            Table2->FieldByName("Hora")->AsString = TimeToStr(Time());
            Table2->FieldByName("Usuario")->AsString = Label5->Caption;
            Table2->FieldByName("Atendido")->AsString = "No";

            if(cont.tempRef>tempRef.ll && cont.tempRef<=tempRef.l)
            {
                Shape1->Brush->Color = clYellow;
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] Temperatura de refrigeracion por debajo del umbral (L)" ;
                Table2->Post();
            }
            else if(cont.tempRef<tempRef.hh && cont.tempRef>=tempRef.h)
            {
                Shape1->Brush->Color = clYellow;
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] Temperatura de refrigeracion por arriba del umbral (H)" ;
                Table2->Post();
            }
            else if(cont.tempRef>=tempRef.hh)
            {
                Shape1->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Temperatura de refrigeracion EXCESIVA (HH)" ;
                Table2->Post();
            }
            else if(cont.tempRef<=tempRef.ll)
            {
                Shape1->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Temperatura de refrigeracion INSIGNIFICANTE (LL)" ;
                Table2->Post();
            }
        }


// Alarma de temperatura de estandarizaci?n

        if(cont.tempEst>=tempEst.ideal && cont.tempEst<tempEst.h || cont.tempEst<=tempEst.ideal && cont.tempEst>tempEst.l)
        {
            Shape2->Brush->Style = bsClear;

            disc.valRef = false;
            Image2->Visible = disc.valRef;

            disc.valEst = true;
            Image15->Visible = disc.valEst;

            disc.motEst = false;
            Image4->Visible = disc.motEst;

            disc.motPas = true;
            Image20->Visible = disc.motPas;

            Table2->Append(); // tabla de eventos
            eventCounter = Table2->RecordCount; //obtengo el ultimo numero de evento
            Table2->FieldByName("Nro_Evento")->AsString = eventCounter++;
            Table2->FieldByName("Fecha")->AsString = DateToStr(Date());
            Table2->FieldByName("Hora")->AsString = TimeToStr(Time());
            Table2->FieldByName("Usuario")->AsString = Label5->Caption;
            Table2->FieldByName("Descripcion")->AsString = "Se accion? la val. de Est. y el mot. de Pas. y se desactivo la val. de ref. y el mot. de est.";
            Table2->Post();
        }
        else
        {
            Table2->Append(); // tabla de eventos
            eventCounter = Table2->RecordCount; //obtengo el ultimo numero de evento
            Table2->FieldByName("Nro_Evento")->AsString = eventCounter++;
            Table2->FieldByName("Fecha")->AsString = DateToStr(Date());
            Table2->FieldByName("Hora")->AsString = TimeToStr(Time());
            Table2->FieldByName("Usuario")->AsString = Label5->Caption;
            Table2->FieldByName("Atendido")->AsString = "No";

            if(cont.tempEst>tempEst.ll && cont.tempEst<=tempEst.l)
            {
                Shape2->Brush->Color = clYellow;
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] Temperatura de estandarizacion por debajo del umbral (L)" ;
                Table2->Post();
            }
            else if(cont.tempEst<tempEst.hh && cont.tempEst>=tempEst.h)
            {
                Shape2->Brush->Color = clYellow;
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] Temperatura de estandarizacion por arriba del umbral (H)" ;
                Table2->Post();
            }
            else if(cont.tempEst>=tempEst.hh)
            {
                Shape2->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Temperatura de estandarizacion EXCESIVA (HH)" ;
                Table2->Post();
            }
            else if(cont.tempEst<=tempEst.ll)
            {
                Shape2->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Temperatura de estandarizacion INSIGNIFICANTE (LL)" ;
                Table2->Post();
            }
        }

// Alarma de temperatura de pausterizaci?n

        if((cont.tempPas>=tempPas.ideal && cont.tempPas<tempPas.h) || (cont.tempPas<=tempPas.ideal && cont.tempPas>tempPas.l))
        {
            Shape3->Brush->Style = bsClear;
            redFlagtempPas = false;

            disc.valEst = false;
            Image15->Visible = disc.valEst;

            disc.motPas = false;
            Image20->Visible = disc.motEst;

            disc.motHom = true;
            Image21->Visible = disc.motHom;

            disc.valPas = true;
            Image16->Visible = disc.valPas;

            Table2->Append(); // tabla de eventos
            eventCounter = Table2->RecordCount; //obtengo el ultimo numero de evento
            Table2->FieldByName("Nro_Evento")->AsString = eventCounter++;
            Table2->FieldByName("Fecha")->AsString = DateToStr(Date());
            Table2->FieldByName("Hora")->AsString = TimeToStr(Time());
            Table2->FieldByName("Usuario")->AsString = Label5->Caption;
            Table2->FieldByName("Descripcion")->AsString = "Se accion? la val. de Pas. y el mot. de Hom. y se desactivo la val. de Est. y el mot. de Pas.";
            Table2->Post();

        }
        else
        {
            Table2->Append(); // tabla de eventos
            eventCounter = Table2->RecordCount; //obtengo el ultimo numero de evento
            Table2->FieldByName("Nro_Evento")->AsString = eventCounter++;
            Table2->FieldByName("Fecha")->AsString = DateToStr(Date());
            Table2->FieldByName("Hora")->AsString = TimeToStr(Time());
            Table2->FieldByName("Usuario")->AsString = Label5->Caption;
            Table2->FieldByName("Atendido")->AsString = "No";
            redFlagtempPas = false;

            if(cont.tempPas>tempPas.ll && cont.tempPas<=tempPas.l)
            {
                Shape3->Brush->Color = clYellow;
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] Temperatura de pausterizacion por debajo del umbral" ;
                Table2->Post();
            }
            else if(cont.tempPas<tempPas.hh && cont.tempPas>=tempPas.h)
            {
                Shape3->Brush->Color = clYellow;
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] Temperatura de pausterizacion por arriba del umbral" ;
                Table2->Post();
            }
            else if(cont.tempPas>=tempPas.hh)
            {
                redFlagtempPas = true;
                Shape3->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Temperatura de pausterizacion EXCESIVA (HH)" ;
                Table2->Post();
            }
            else if(cont.tempPas<=tempPas.ll)
            {
                redFlagtempPas = true;
                Shape3->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Temperatura de pausterizacion INSIGNIFICANTE (LL)" ;
                Table2->Post();
            }
        }

// Alarma de tiempo de pausterizaci?n

        if((cont.timePas>=timePas.ideal && cont.timePas<tempPas.h) || (cont.timePas<=timePas.ideal && cont.timePas>timePas.l))
        {
            //Shape3->Brush->Style = bsClear;
        }
        else
        {
            Table2->Append(); // tabla de eventos
            eventCounter = Table2->RecordCount; //obtengo el ultimo numero de evento
            Table2->FieldByName("Nro_Evento")->AsString = eventCounter++;
            Table2->FieldByName("Fecha")->AsString = DateToStr(Date());
            Table2->FieldByName("Hora")->AsString = TimeToStr(Time());
            Table2->FieldByName("Usuario")->AsString = Label5->Caption;
            Table2->FieldByName("Atendido")->AsString = "No";

            if(cont.timePas>timePas.ll && cont.timePas<=timePas.l)
            {
                if(redFlagtempPas == false)
                {
                    Shape3->Brush->Color = clYellow;
                }
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] El proceso de pausterizaci?n ha ocurrido prematuramente" ;
                Table2->Post();
            }
            else if(cont.timePas<timePas.hh && cont.timePas>=timePas.h)
            {
                if(redFlagtempPas == false)
                {
                    Shape3->Brush->Color = clYellow;
                }
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] El proceso de pausterizaci?n presenta demoras" ;
                Table2->Post();
            }
            else if(cont.timePas>=timePas.hh)
            {
                Shape3->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Tiempo de pausterizac??n EXCESIVO" ;
                Table2->Post();
            }
            else if(cont.timePas<=timePas.ll)
            {
                Shape3->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Tiempo de pausterizaci?n INSIGNIFICANTE" ;
                Table2->Post();
            }
        }

// Alarma de temperatura de homogeneizaci?n

        if(cont.tempHom>=tempHom.ideal && cont.tempHom<tempHom.h || cont.tempHom<=tempHom.ideal && cont.tempHom>tempHom.l)
        {
            Shape4->Brush->Style = bsClear;

            disc.motHom = false;
            Image21->Visible = disc.motHom;

            disc.valPas = false;
            Image16->Visible = disc.valPas;

            disc.motPre = true;
            Image28->Visible = disc.motHom;

            disc.valHom = true;
            Image17->Visible = disc.valPas;

            Table2->Append(); // tabla de eventos
            eventCounter = Table2->RecordCount; //obtengo el ultimo numero de evento
            Table2->FieldByName("Nro_Evento")->AsString = eventCounter++;
            Table2->FieldByName("Fecha")->AsString = DateToStr(Date());
            Table2->FieldByName("Hora")->AsString = TimeToStr(Time());
            Table2->FieldByName("Usuario")->AsString = Label5->Caption;
            Table2->FieldByName("Descripcion")->AsString = "Se accion? la val. de Hom. y el mot. de Pre. y se desactivo la val. de Pas. y el mot. de Hom.";
            Table2->Post();
        }
        else
        {
            Table2->Append(); // tabla de eventos
            eventCounter = Table2->RecordCount; //obtengo el ultimo numero de evento
            Table2->FieldByName("Nro_Evento")->AsString = eventCounter++;
            Table2->FieldByName("Fecha")->AsString = DateToStr(Date());
            Table2->FieldByName("Hora")->AsString = TimeToStr(Time());
            Table2->FieldByName("Usuario")->AsString = Label5->Caption;
            Table2->FieldByName("Atendido")->AsString = "No";

            if(cont.tempHom>tempHom.ll && cont.tempHom<=tempHom.l)
            {
                Shape4->Brush->Color = clYellow;
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] Temperatura de homogeneizacion por debajo del umbral (L)" ;
                Table2->Post();
            }
            else if(cont.tempHom<tempHom.hh && cont.tempHom>=tempHom.h)
            {
                Shape4->Brush->Color = clYellow;
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] Temperatura de homogeneizacion por arriba del umbral (H)" ;
                Table2->Post();
            }
            else if(cont.tempHom>=tempHom.hh)
            {
                Shape4->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Temperatura de homogeneizacion EXCESIVA (HH)" ;
                Table2->Post();
            }
            else if(cont.tempHom<=tempHom.ll)
            {
                Shape4->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Temperatura de homogeneizacion INSIGNIFICANTE (LL)" ;
                Table2->Post();
            }
        }

// Alarma de temperatura de pre-enfriado

        if(cont.tempPre>=tempPre.ideal && cont.tempPre<tempPre.h || cont.tempPre<=tempPre.ideal && cont.tempPre>tempPre.l)
        {
            Shape5->Brush->Style = bsClear;
            redFlagtempPre = false;

            disc.motPre = false;
            Image28->Visible = disc.motHom;

            disc.valHom = false;
            Image17->Visible = disc.valPas;

            disc.motIncEnf = true;
            Image29->Visible = disc.motIncEnf;

            disc.valPre = true;
            Image18->Visible = disc.valIncEnf;

            Table2->Append(); // tabla de eventos
            eventCounter = Table2->RecordCount; //obtengo el ultimo numero de evento
            Table2->FieldByName("Nro_Evento")->AsString = eventCounter++;
            Table2->FieldByName("Fecha")->AsString = DateToStr(Date());
            Table2->FieldByName("Hora")->AsString = TimeToStr(Time());
            Table2->FieldByName("Usuario")->AsString = Label5->Caption;
            Table2->FieldByName("Descripcion")->AsString = "Se accion? la val. de Pre. y el mot. de Inc./Enf. y se desactivo la val. de Hom. y el mot. de Pre.";
            Table2->Post();
        }
        else
        {
            Table2->Append(); // tabla de eventos
            eventCounter = Table2->RecordCount; //obtengo el ultimo numero de evento
            Table2->FieldByName("Nro_Evento")->AsString = eventCounter++;
            Table2->FieldByName("Fecha")->AsString = DateToStr(Date());
            Table2->FieldByName("Hora")->AsString = TimeToStr(Time());
            Table2->FieldByName("Usuario")->AsString = Label5->Caption;
            Table2->FieldByName("Atendido")->AsString = "No";
            redFlagtempPre = false;

            if(cont.tempPre>tempPre.ll && cont.tempPre<=tempPre.l)
            {
                Shape5->Brush->Color = clYellow;
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] Temperatura de pre-enfriado por debajo del umbral (L)" ;
                Table2->Post();
            }
            else if(cont.tempPre<tempPre.hh && cont.tempPre>=tempPre.h)
            {
                Shape5->Brush->Color = clYellow;
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] Temperatura de pre-enfriado por arriba del umbral (H)" ;
                Table2->Post();
            }
            else if(cont.tempPre>=tempPre.hh)
            {
                redFlagtempPre = true;
                Shape5->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Temperatura de pre-enfriado EXCESIVA (HH)" ;
                Table2->Post();
            }
            else if(cont.tempPre<=tempPre.ll)
            {
                redFlagtempPre = true;
                Shape5->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Temperatura de pre-enfriado INSIGNIFICANTE (LL)" ;
                Table2->Post();
            }
        }
// Alarma de tiempo de pre-enfriado

        if((cont.timePre>=timePre.ideal && cont.timePre<timePre.h) || (cont.timePre<=timePre.ideal && cont.timePre>timePre.l))
        {
            //Shape5->Brush->Style = bsClear;
        }
        else
        {
            Table2->Append(); // tabla de eventos
            eventCounter = Table2->RecordCount; //obtengo el ultimo numero de evento
            Table2->FieldByName("Nro_Evento")->AsString = eventCounter++;
            Table2->FieldByName("Fecha")->AsString = DateToStr(Date());
            Table2->FieldByName("Hora")->AsString = TimeToStr(Time());
            Table2->FieldByName("Atendido")->AsString = "No";
            Table2->FieldByName("Usuario")->AsString = Label5->Caption;

            if(cont.timePre>timePre.ll && cont.timePre<=timePre.l)
            {
                if(redFlagtempPre == false)
                {
                    Shape5->Brush->Color = clYellow;
                }
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] El proceso de pre-enfriado ha ocurrido prematuramente" ;
                Table2->Post();
            }
            else if(cont.timePre<timePre.hh && cont.timePre>=timePre.h)
            {
                if(redFlagtempPre == false)
                {
                    Shape5->Brush->Color = clYellow;
                }
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] El proceso de pre-enfriado presenta demoras" ;
                Table2->Post();
            }
            else if(cont.timePre>=timePre.hh)
            {
                Shape5->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Tiempo de pre-enfriado EXCESIVO" ;
                Table2->Post();
            }
            else if(cont.timePre<=timePre.ll)
            {
                Shape5->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Tiempo de pre-enfriado INSIGNIFICANTE" ;
                Table2->Post();
            }
        }


// Alarma de temperatura de incubacion

        if((cont.tempInc>=tempInc.ideal && cont.tempInc<tempInc.h || cont.tempInc<=tempInc.ideal && cont.tempInc>tempInc.l) )
        {
            Shape6->Brush->Style = bsClear;
            redFlagtempInc = false;
            disc.valPre = false;
            Image18->Visible = disc.valIncEnf;

        }
        else
        {
            Table2->Append(); // tabla de eventos
            eventCounter = Table2->RecordCount; //obtengo el ultimo numero de evento
            Table2->FieldByName("Nro_Evento")->AsString = eventCounter++;
            Table2->FieldByName("Fecha")->AsString = DateToStr(Date());
            Table2->FieldByName("Hora")->AsString = TimeToStr(Time());
            Table2->FieldByName("Atendido")->AsString = "No";
            Table2->FieldByName("Usuario")->AsString = Label5->Caption;
            redFlagtempInc = false;

            if(cont.tempInc>tempInc.ll && cont.tempInc<=tempInc.l)
            {
                Shape6->Brush->Color = clYellow;
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] Temperatura de incubacion por debajo del umbral (L)" ;
                Table2->Post();
            }
            else if(cont.tempInc<tempInc.hh && cont.tempInc>=tempInc.h)
            {
                Shape6->Brush->Color = clYellow;
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] Temperatura de incubacion por arriba del umbral (H)" ;
                Table2->Post();
            }
            else if(cont.tempInc>=tempInc.hh)
            {
                redFlagtempInc = true;
                Shape6->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Temperatura de incubacion EXCESIVA (HH)" ;
                Table2->Post();
            }
            else if(cont.tempInc<=tempInc.ll)
            {
                redFlagtempInc = true;
                Shape6->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Temperatura de incubacion INSIGNIFICANTE (LL)" ;
                Table2->Post();
            }
        }

// Alarma de tiempo de incubacion

        if((cont.timeInc>=timeInc.ideal && cont.timeInc<timeInc.h) || (cont.timeInc<=timeInc.ideal && cont.timeInc>timeInc.l))
        {
            redFlagtimeInc = false;
        }
        else
        {
            Table2->Append(); // tabla de eventos
            eventCounter = Table2->RecordCount; //obtengo el ultimo numero de evento
            Table2->FieldByName("Nro_Evento")->AsString = eventCounter++;
            Table2->FieldByName("Fecha")->AsString = DateToStr(Date());
            Table2->FieldByName("Hora")->AsString = TimeToStr(Time());
            Table2->FieldByName("Atendido")->AsString = "No";
            Table2->FieldByName("Usuario")->AsString = Label5->Caption;
            redFlagtimeInc = false;

            if(cont.timeInc>timeInc.ll && cont.timeInc<=timeInc.l)
            {
                if(redFlagtempInc == false)
                {
                    Shape6->Brush->Color = clYellow;
                }
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] El proceso de incubacion ha ocurrido prematuramente (L)" ;
                Table2->Post();
            }
            else if(cont.timeInc<timeInc.hh && cont.timeInc>=timeInc.h)
            {
                if(redFlagtempInc == false)
                {
                    Shape6->Brush->Color = clYellow;
                }
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] El proceso de incubacion presenta demoras (H)" ;
                Table2->Post();
            }
            else if(cont.timeInc>=timeInc.hh)
            {
                redFlagtimeInc = true;
                Shape6->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Tiempo de incubacion EXCESIVO (HH)" ;
                Table2->Post();
            }
            else if(cont.timeInc<=timeInc.ll)
            {
                redFlagtimeInc = true;
                Shape6->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Tiempo de incubacion INSIGNIFICANTE (LL)" ;
                Table2->Post();
            }
        }

// Alarma de temperatura de enfriado
        if((cont.tempEnf>=tempEnf.ideal && cont.tempEnf<tempEnf.h || cont.tempEnf<=tempEnf.ideal && cont.tempEnf>tempEnf.l))
        {
            //Shape6->Brush->Style = bsClear;
            redFlagtempEnf = false;

            disc.motIncEnf = false;
            Image29->Visible = disc.motIncEnf;

            disc.valPre = false;
            Image18->Visible = disc.valIncEnf;

            disc.valIncEnf = true;
            Image19->Visible = disc.valIncEnf;

            Table2->Append(); // tabla de eventos
            eventCounter = Table2->RecordCount; //obtengo el ultimo numero de evento
            Table2->FieldByName("Nro_Evento")->AsString = eventCounter++;
            Table2->FieldByName("Fecha")->AsString = DateToStr(Date());
            Table2->FieldByName("Hora")->AsString = TimeToStr(Time());
            Table2->FieldByName("Usuario")->AsString = Label5->Caption;
            Table2->FieldByName("Descripcion")->AsString = "Se accion? la val. de Inc/Enf. y se desactivo la val. de Pre. y el mot. de Inc./Enf.";
            Table2->Post();

        }
        else
        {
            Table2->Append(); // tabla de eventos
            eventCounter = Table2->RecordCount; //obtengo el ultimo numero de evento
            Table2->FieldByName("Nro_Evento")->AsString = eventCounter++;
            Table2->FieldByName("Fecha")->AsString = DateToStr(Date());
            Table2->FieldByName("Hora")->AsString = TimeToStr(Time());
            Table2->FieldByName("Atendido")->AsString = "No";
            Table2->FieldByName("Usuario")->AsString = Label5->Caption;
            redFlagtempEnf = false;

            if(cont.tempEnf>tempEnf.ll && cont.tempEnf<=tempEnf.l)
            {
                if(redFlagtempInc == false && redFlagtimeInc == false)
                {
                    Shape6->Brush->Color = clYellow;
                }
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] Temperatura de enfriamiento por debajo del umbral (L)" ;
                Table2->Post();
            }
            else if(cont.tempEnf<tempEnf.hh && cont.tempEnf>=tempEnf.h)
            {
                if(redFlagtempInc == false && redFlagtimeInc == false)
                {
                    Shape6->Brush->Color = clYellow;
                }
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] Temperatura de enfriamiento por arriba del umbral (H)" ;
                Table2->Post();
            }
            else if(cont.tempEnf>=tempEnf.hh)
            {
                redFlagtempEnf = true;
                Shape6->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Temperatura de enfriamiento EXCESIVA (HH)" ;
                Table2->Post();
            }
            else if(cont.tempEnf<=tempEnf.ll)
            {
                redFlagtempEnf = true;
                Shape6->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Temperatura de enfriamiento INSIGNIFICANTE (LL)" ;
                Table2->Post();
            }
        }

// Alarma de tiempo de enfriado

        if((cont.timeEnf>=timeEnf.ideal && cont.timeEnf<timeEnf.h) || (cont.timeEnf<=timeEnf.ideal && cont.timeEnf>timeEnf.l))
        {
            //redFlagtimeEnf = false;
        }
        else
        {
            Table2->Append(); // tabla de eventos
            eventCounter = Table2->RecordCount; //obtengo el ultimo numero de evento
            Table2->FieldByName("Nro_Evento")->AsString = eventCounter++;
            Table2->FieldByName("Fecha")->AsString = DateToStr(Date());
            Table2->FieldByName("Hora")->AsString = TimeToStr(Time());
            Table2->FieldByName("Atendido")->AsString = "No";
            Table2->FieldByName("Usuario")->AsString = Label5->Caption;
            //redFlagtimeEnf = false;

            if(cont.timeEnf>timeEnf.ll && cont.timeEnf<=timeEnf.l)
            {
                if(redFlagtempInc == false && redFlagtempEnf == false && redFlagtempInc == false)
                {
                    Shape6->Brush->Color = clYellow;
                }
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] El proceso de enfriado ha ocurrido prematuramente" ;
                Table2->Post();
            }
            else if(cont.timeEnf<timeEnf.hh && cont.timeEnf>=timeEnf.h)
            {
                if(redFlagtempInc == false && redFlagtempEnf == false && redFlagtempInc == false)
                {
                    Shape6->Brush->Color = clYellow;
                }
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] El proceso de enfriado presenta demoras" ;
                Table2->Post();
            }
            else if(cont.timeEnf>=timeEnf.hh)
            {
                //redFlagtimeEnf = true;
                Shape6->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Tiempo de enfriado EXCESIVO" ;
                Table2->Post();
            }
            else if(cont.timeEnf<=timeEnf.ll)
            {
                //redFlagtimeEnf = true;
                Shape6->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Tiempo de enfriado INSIGNIFICANTE" ;
                Table2->Post();
            }
        }


// Alarma de porcentaje de yogurt

        if((cont.ppYog>=ppYog.ideal && cont.ppYog<ppYog.h || cont.ppYog<=ppYog.ideal && cont.ppYog>ppYog.l)  && redFlagppCol == false && redFlagppCub == false)
        {
            Shape7->Brush->Style = bsClear;
            redFlagppYog = false;
        }
        else
        {
            Table2->Append(); // tabla de eventos
            eventCounter = Table2->RecordCount; //obtengo el ultimo numero de evento
            Table2->FieldByName("Nro_Evento")->AsString = eventCounter++;
            Table2->FieldByName("Fecha")->AsString = DateToStr(Date());
            Table2->FieldByName("Hora")->AsString = TimeToStr(Time());
            Table2->FieldByName("Atendido")->AsString = "No";
            Table2->FieldByName("Usuario")->AsString = Label5->Caption;
            redFlagppYog = false;

            if(cont.ppYog>ppYog.ll && cont.ppYog<=ppYog.l)
            {
                if(redFlagppCol == false && redFlagppCub == false)
                {
                    Shape7->Brush->Color = clYellow;
                }
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] Porcentaje de yogurt por debajo del umbral (L)" ;
                Table2->Post();
            }
            else if(cont.ppYog<ppYog.hh && cont.ppYog>=ppYog.h)
            {
                if(redFlagppCol == false && redFlagppCub == false)
                {
                    Shape7->Brush->Color = clYellow;
                }
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] Porcentaje de yogurt por arriba del umbral (H)" ;
                Table2->Post();
            }
            else if(cont.ppYog>=ppYog.hh)
            {
                redFlagppYog = true;
                Shape7->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Porcentaje de yogurt EXCESIVO (HH)" ;
                Table2->Post();
            }
            else if(cont.ppYog<=ppYog.ll)
            {
                redFlagppYog = true;
                Shape7->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Porcentaje de yogurt INSIGNIFICANTE (LL)" ;
                Table2->Post();
            }
        }

// Alarma de porcentaje de cubierta

        if((cont.ppCub>=ppCub.ideal && cont.ppCub<ppCub.h || cont.ppCub<=ppCub.ideal && cont.ppCub>ppCub.l) && redFlagppCol == false && redFlagppYog == false)
        {
            //Shape7->Brush->Style = bsClear;
            redFlagppCub = false;
        }
        else
        {
            Table2->Append(); // tabla de eventos
            eventCounter = Table2->RecordCount; //obtengo el ultimo numero de evento
            Table2->FieldByName("Nro_Evento")->AsString = eventCounter++;
            Table2->FieldByName("Fecha")->AsString = DateToStr(Date());
            Table2->FieldByName("Hora")->AsString = TimeToStr(Time());
            Table2->FieldByName("Atendido")->AsString = "No";
            Table2->FieldByName("Usuario")->AsString = Label5->Caption;
            redFlagppCub = false;

            if(cont.ppCub>ppCub.ll && cont.ppCub<=ppCub.l)
            {
                if(redFlagppCol == false && redFlagppYog == false)
                {
                    Shape7->Brush->Color = clYellow;
                }
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] Porcentaje de cubierta por debajo del umbral (L)" ;
                Table2->Post();
            }
            else if(cont.ppCub<ppCub.hh && cont.ppCub>=ppCub.h)
            {
                if(redFlagppCol == false && redFlagppYog == false)
                {
                    Shape7->Brush->Color = clYellow;
                }
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] Porcentaje de cubierta por arriba del umbral (H)" ;
                Table2->Post();
            }
            else if(cont.ppCub>=ppCub.hh)
            {
                redFlagppCub = true;
                Shape7->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Porcentaje de cubierta EXCESIVO (HH)" ;
                Table2->Post();
            }
            else if(cont.ppCub<=ppCub.ll)
            {
                redFlagppCub = true;
                Shape7->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Porcentaje de cubierta INSIGNIFICANTE (LL)" ;
                Table2->Post();
            }
        }


// Alarma de porcentaje de colchon


        if((cont.ppCol>=ppCol.ideal && cont.ppCol<ppCol.h || cont.ppCol<=ppCol.ideal && cont.ppCol>ppCol.l) && redFlagppYog == false && redFlagppCub == false)
        {
            //Shape7->Brush->Style = bsClear;
            redFlagppCol = false;
        }
        else
        {
            Table2->Append(); // tabla de eventos
            eventCounter = Table2->RecordCount; //obtengo el ultimo numero de evento
            Table2->FieldByName("Nro_Evento")->AsString = eventCounter++;
            Table2->FieldByName("Fecha")->AsString = DateToStr(Date());
            Table2->FieldByName("Hora")->AsString = TimeToStr(Time());
            Table2->FieldByName("Atendido")->AsString = "No";
            Table2->FieldByName("Usuario")->AsString = Label5->Caption;
            redFlagppCol = false;

            if(cont.ppCol>ppCol.ll && cont.ppCol<=ppCol.l)
            {
                if(redFlagppCub == false && redFlagppYog == false)
                {
                    Shape7->Brush->Color = clYellow;
                }
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] Porcentaje de colchon por debajo del umbral (L)" ;
                Table2->Post();
            }
            else if(cont.ppCol<ppCol.hh && cont.ppCol>=ppCol.h)
            {
                if(redFlagppCub == false && redFlagppYog == false)
                {
                    Shape7->Brush->Color = clYellow;
                }
                Table2->FieldByName("Descripcion")->AsString = "[ATENCION] Porcentaje de colchon por arriba del umbral (H)" ;
                Table2->Post();
            }
            else if(cont.ppCol>=ppCol.hh)
            {
                redFlagppCol = true;
                Shape7->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Porcentaje de colchon EXCESIVO (HH)" ;
                Table2->Post();
            }
            else if(cont.ppCol<=ppCol.ll)
            {
                redFlagppCol = true;
                Shape7->Brush->Color = clRed;
                Table2->FieldByName("Descripcion")->AsString = "[PELIGRO] Porcentaje de colchon INSIGNIFICANTE (LL)" ;
                Table2->Post();
            }
        }


// Tabla de variables continuas

        Table1->Append();
        Table1->FieldByName("FECHA")->AsString = DateToStr(Date());
        Table1->FieldByName("HORA")->AsString = TimeToStr(Time());
        Table1->FieldByName("TEMPREF")->AsInteger = cont.tempRef;
        Table1->FieldByName("TEMPEST")->AsInteger = cont.tempEst;
        Table1->FieldByName("TEMPPAS")->AsInteger = cont.tempPas;
        Table1->FieldByName("TEMPHOM")->AsInteger = cont.tempHom;
        Table1->FieldByName("TEMPPRE")->AsInteger = cont.tempPre;
        Table1->FieldByName("TEMPINC")->AsInteger = cont.tempInc;
        Table1->FieldByName("TEMPENF")->AsInteger = cont.tempEnf;
        Table1->FieldByName("PPYOG")->AsInteger = cont.ppYog;
        Table1->FieldByName("PPCOL")->AsInteger = cont.ppCol;
        Table1->FieldByName("PPCUB")->AsInteger = cont.ppCub;
        Table1->Post();
    }
}
//---------------------------------------------------------------------------

void realTimeGraph(int index, int value) //index determina que variable recibi? un nuevo dato y array la informaci?n
{

    Principal->SLScope1->Channels->Channels[ index ]->Data->AddXYPoint( counter, value );
    graph.actualValue = index;   //guardo el valor nuevo del item de la lista (index) seleccionado en una variable actual
    if(Principal->ComboBox1->ItemIndex==index) //si se selecciona un numero de item (de la lista desplegable) igual al que pase por funci?n resulta "verdadero"
    {
        if(graph.Comparison()==true) //la funcion es verdadera si la comparacion entre el valor de la variable vieja y actual son diferentes
        {
            Principal->SLScope1->Channels->Channels[graph.oldValue]->Visible = false;
            Principal->SLScope1->Channels->Channels[graph.actualValue]->Visible = true;
            graph.Update(); //remplazo el valor antiguo con el actual
            switch(index)
            {
            case TEMPREF:
                Principal->SLScope1->Title->Text = "Temperatura de refrigeraci?n";
                break;
            case TEMPEST:
                Principal->SLScope1->Title->Text = "Temperatura de estandarizaci?n";
                break;
            case TEMPPAS:
                Principal->SLScope1->Title->Text = "Temperatura de pasteurizaci?n";
                break;
            case TEMPHOM:
                Principal->SLScope1->Title->Text = "Temperatura de homogeneizaci?n";
                break;
            case TEMPPRE:
                Principal->SLScope1->Title->Text = "Temperatura de pre-enfriado";
                break;
            case TEMPINC:
                Principal->SLScope1->Title->Text = "Temperatura de incubaci?n";
                break;
            case TEMPENF:
                Principal->SLScope1->Title->Text = "Temperatura de enfriado";
                break;
            }
        }
        else
        {
        }
    }
}

void __fastcall TPrincipal::Discretas1Click(TObject *Sender)
{
    DBGrid2->Visible =  !DBGrid2->Visible; //toggle de tabla desde el men?
}
//---------------------------------------------------------------------------


void __fastcall TPrincipal::Elegir1Click(TObject *Sender)
{
    ReceiptAdd->Query1->Close();
    ReceiptAdd->Query1->SQL->Clear();
    ReceiptAdd->Query1->SQL->Add("select * from Recetas.db order by Nombre_Receta asc");
    ReceiptAdd->Query1->Open();

    ReceiptAdd->Query1->Prior(); // ir al primer registro
    ReceiptSelection->ComboBox1->Clear();
    for(int i=0; i<ReceiptAdd->Query1->RecordCount; i++)
    {
        ReceiptSelection->ComboBox1->Items->Add(ReceiptAdd->Query1->FieldByName("Nombre_Receta")->AsString);
        ReceiptAdd->Query1->Next();
    }

    ReceiptSelection->ComboBox1->Text = "Seleccione Receta";
    ReceiptSelection->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TPrincipal::Modificar1Click(TObject *Sender)
{
    ReceiptEdition->Query1->Close();
    ReceiptEdition->Query1->SQL->Clear();
    ReceiptEdition->Query1->SQL->Add("select * from Recetas.db order by Nombre_Receta asc");
    ReceiptEdition->Query1->Open();

    ReceiptEdition->Query1->Prior(); // ir al primer registro
    ReceiptEdition->ComboBox1->Clear();
    for(int i=0; i<ReceiptEdition->Query1->RecordCount; i++)
    {
        ReceiptEdition->ComboBox1->Items->Add(ReceiptEdition->Query1->FieldByName("Nombre_Receta")->AsString);
        ReceiptEdition->Query1->Next();
    }

    ReceiptEdition->ComboBox1->Text = "Seleccione Receta";
    ReceiptEdition->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TPrincipal::Agregar1Click(TObject *Sender)
{
    ReceiptAdd->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TPrincipal::Eliminar1Click(TObject *Sender)
{
    ReceiptAdd->Query1->Close();
    ReceiptAdd->Query1->SQL->Clear();
    ReceiptAdd->Query1->SQL->Add("select * from Recetas.db order by Nombre_Receta asc");
    ReceiptAdd->Query1->Open();

    ReceiptAdd->Query1->Prior(); // ir al primer registro
    ReceiptDelete->ComboBox1->Clear();
    for(int i=0; i<ReceiptAdd->Query1->RecordCount; i++)
    {
        ReceiptDelete->ComboBox1->Items->Add(ReceiptAdd->Query1->FieldByName("Nombre_Receta")->AsString);
        ReceiptAdd->Query1->Next();
    }

    ReceiptDelete->ComboBox1->Text = "Seleccione Receta";
    ReceiptDelete->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TPrincipal::Salirsesin1Click(TObject *Sender)
{
    Hierarchy1.Default();
    Table2->Append(); // tabla de eventos
    Table2->FieldByName("Nro_Evento")->AsString = eventCounter++;
    Table2->FieldByName("Fecha")->AsString = DateToStr(Date());
    Table2->FieldByName("Hora")->AsString = TimeToStr(Time());
    Table2->FieldByName("Descripcion")->AsString = Auth->Table1->FieldByName("NAME")->AsString + " " + Auth->Table1->FieldByName("SURENAME")->AsString + " " + "ha cerrado sesi?n" ;
    Table2->Post();
}
//---------------------------------------------------------------------------

void __fastcall TPrincipal::Acercade1Click(TObject *Sender)
{
    ShowMessage("Hecho por Federico Garc?a y Federico Noto");
}
//---------------------------------------------------------------------------




void __fastcall TPrincipal::Image1Click(TObject *Sender)
{
    Beep();
}
//---------------------------------------------------------------------------

void __fastcall TPrincipal::Modificar2Click(TObject *Sender)
{
    UserEdition->Query1->Close();
    UserEdition->Query1->SQL->Clear();
    UserEdition->Query1->SQL->Add("select * from USERS.db order by USERS asc");
    UserEdition->Query1->Open();

    UserEdition->Query1->Prior();
    UserEdition->ComboBox1->Clear();
    for(int i=0; i<UserEdition->Query1->RecordCount; i++)
    {
        UserEdition->ComboBox1->Items->Add(UserEdition->Query1->FieldByName("USERS")->AsString);
        UserEdition->Query1->Next();
    }

    UserEdition->ComboBox1->Text = "Seleccione Usuario";
    UserEdition->ComboBox1->ItemIndex = -1;
    UserEdition->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TPrincipal::Agregar2Click(TObject *Sender)
{
    UserAdd->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TPrincipal::Eliminar2Click(TObject *Sender)
{
    UserDelete->Query1->Close();
    UserDelete->Query1->SQL->Clear();
    UserDelete->Query1->SQL->Add("select * from Users.db order by USERS asc");
    UserDelete->Query1->Open();

    UserDelete->Query1->Prior(); // ir al primer registro
    UserDelete->ComboBox1->Clear();
    for(int i=0; i<UserDelete->Query1->RecordCount; i++)
    {
        UserDelete->ComboBox1->Items->Add(UserDelete->Query1->FieldByName("USERS")->AsString);
        UserDelete->Query1->Next();
    }

    UserDelete->ComboBox1->Text = "Seleccione Usuario";
    UserDelete->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TPrincipal::C1Click(TObject *Sender)
{
    Comms->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TPrincipal::Timer1Timer(TObject *Sender)
{
    counter++;
}
//---------------------------------------------------------------------------



void __fastcall TPrincipal::Consultas1Click(TObject *Sender)
{
    QuerySc->DBGrid1->Visible = false;
    QuerySc->DBGrid2->Visible = false;
    QuerySc->DBChart1->Visible = false;
    QuerySc->ShowModal();
}
//---------------------------------------------------------------------------



void __fastcall TPrincipal::Veratendidas1Click(TObject *Sender)
{

    Attended1->Query1->Close();
    Attended1->Query1->SQL->Clear();
    Attended1->Query1->SQL->Add("select * from USERS.db order by USERS asc");
    Attended1->Query1->Open();
    Attended1->Query1->Prior();
    Attended1->ComboBox1->Clear();

    for(int i=0; i<Attended1->Query1->RecordCount; i++)
    {
        Attended1->ComboBox1->Items->Add(Attended1->Query1->FieldByName("USERS")->AsString);
        Attended1->Query1->Next();
    }

  Attended1->Button2Click(NULL);  
  Attended1->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TPrincipal::Atender1Click(TObject *Sender)
{
 Alarms1->ShowModal();
}
//---------------------------------------------------------------------------

