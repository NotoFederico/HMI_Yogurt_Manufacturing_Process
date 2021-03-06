//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
#include <Buttons.hpp>
#include <jpeg.hpp>
#include "PERFGRAP.h"
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <DdeMan.hpp>
#include <DB.hpp>
#include <DBTables.hpp>
#include "VrBlinkLed.hpp"
#include "VrControls.hpp"
#include "VrThermoMeter.hpp"
#include "VrLcd.hpp"
#include <Graphics.hpp>
#include "LPControl.h"
#include "LPControlDrawLayers.h"
#include "SLControlCollection.h"
#include "SLScope.h"
#include "ILGlassPanel.h"
#include "LPTransparentControl.h"
#include "ULBasicControl.h"
#include "ILSegmentGauge.h"
#include "ILSegmentIndicator.h"
#include "ILSegmentText.h"
#include "VrProgressBar.hpp"
#include "ILAnalogInstrument.h"
#include "ILProgressBar.h"
#include "variables.h"
extern Alarm tempRef, tempEst, tempPas, tempHom, tempPre, tempInc, tempEnf, timePas, timePre, timeInc, timeEnf, ppYog, ppCol, ppCub;

//---------------------------------------------------------------------------
class TPrincipal : public TForm
{
__published:	// IDE-managed Components
    TPanel *Principal;
    TMainMenu *MainMenu1;
    TMenuItem *Users1;
    TMenuItem *Recetas1;
    TMenuItem *Gestin1;
    TMenuItem *Ayuda1;
    TComboBox *ComboBox1;
    TMenuItem *Login1;
    TMenuItem *Salir1;
    TMenuItem *Nohayayuda1;
    TMenuItem *Elegir1;
    TPanel *Top;
    TMenuItem *Alarmas1;
    TMenuItem *N1;
    TMenuItem *Acercade1;
    TMenuItem *Logoff1;
    TMenuItem *Salirsesin1;
    TMenuItem *Historicos1;
    TMenuItem *Desarrollador1;
    TLabel *Label2;
    TLabel *Label3;
    TLabel *Label4;
    TLabel *Label6;
    TLabel *Label5;
    TLabel *Label1;
    TDdeClientConv *DdeClientConv1;
    TDdeClientItem *DdeClientItem1;
    TDdeClientItem *DdeClientItem2;
    TDdeClientItem *DdeClientItem3;
    TDdeClientItem *DdeClientItem4;
    TDdeClientItem *DdeClientItem5;
    TDdeClientItem *DdeClientItem6;
    TDdeClientItem *DdeClientItem7;
    TDdeClientItem *DdeClientItem8;
    TDdeClientItem *DdeClientItem9;
    TDdeClientItem *DdeClientItem10;
    TDdeClientItem *DdeClientItem11;
    TDdeClientItem *DdeClientItem12;
    TDdeClientItem *DdeClientItem13;
    TDdeClientItem *DdeClientItem14;
    TPanel *Bottom;
    TPanel *Left;
    TPanel *Middle;
    TPanel *User;
    TPanel *Logs;
    TPanel *List;
    TPanel *Graph;
    TTable *Table2;
    TDataSource *DataSource2;
    TDBGrid *DBGrid2;
    TVrClock *VrClock1;
    TPanel *Panel1;
    TLabel *Label8;
    TLabel *Label9;
    TMenuItem *Variables1;
    TMenuItem *Discretas1;
    TDBGrid *DBGrid1;
    TTable *Table1;
    TDataSource *DataSource1;
    TMenuItem *Modificar1;
    TMenuItem *Agregar1;
    TMenuItem *Eliminar1;
    TMenuItem *N2;
    TMenuItem *Users2;
    TMenuItem *Modificar2;
    TMenuItem *Agregar2;
    TMenuItem *Eliminar2;
    TImage *Image1;
    TVrClock *VrClock2;
    TVrClock *VrClock4;
    TVrClock *VrClock6;
    TVrClock *VrClock7;
    TSLScope *SLScope1;
    TILGlassPanel *ILGlassPanel1;
    TILGlassPanel *ILGlassPanel3;
    TILGlassPanel *ILGlassPanel5;
    TILGlassPanel *ILGlassPanel6;
    TILGlassPanel *ILGlassPanel7;
    TILSegmentGauge *ILSegmentGauge1;
    TILSegmentText *ILSegmentText1;
    TILGlassPanel *ILGlassPanel8;
    TILSegmentGauge *ILSegmentGauge2;
    TILSegmentText *ILSegmentText2;
    TILGlassPanel *ILGlassPanel9;
    TILSegmentGauge *ILSegmentGauge3;
    TILSegmentText *ILSegmentText3;
    TILGlassPanel *ILGlassPanel10;
    TILSegmentGauge *ILSegmentGauge4;
    TILSegmentText *ILSegmentText4;
    TILGlassPanel *ILGlassPanel11;
    TILSegmentGauge *ILSegmentGauge5;
    TILSegmentText *ILSegmentText5;
    TILGlassPanel *ILGlassPanel12;
    TILSegmentGauge *ILSegmentGauge6;
    TILSegmentText *ILSegmentText6;
    TILGlassPanel *ILGlassPanel13;
    TLabel *Label7;
    TILGlassPanel *ILGlassPanel14;
    TILSegmentGauge *ILSegmentGauge7;
    TILSegmentText *ILSegmentText7;
    TILGlassPanel *ILGlassPanel16;
    TImage *Image3;
    TILGlassPanel *ILGlassPanel18;
    TImage *Image5;
    TILGlassPanel *ILGlassPanel19;
    TImage *Image8;
    TILGlassPanel *ILGlassPanel20;
    TImage *Image6;
    TILGlassPanel *ILGlassPanel21;
    TImage *Image7;
    TTimer *Timer1;
    TILGlassPanel *ILGlassPanel22;
    TImage *Image9;
    TILGlassPanel *ILGlassPanel23;
    TImage *Image10;
    TILGlassPanel *ILGlassPanel24;
    TImage *Image11;
    TILGlassPanel *ILGlassPanel25;
    TImage *Image12;
    TILGlassPanel *ILGlassPanel26;
    TImage *Image13;
    TILGlassPanel *ILGlassPanel27;
    TImage *Image14;
    TILGlassPanel *ILGlassPanel28;
    TLabel *Label10;
    TILGlassPanel *ILGlassPanel29;
    TLabel *Label11;
    TILGlassPanel *ILGlassPanel30;
    TLabel *Label12;
    TILGlassPanel *ILGlassPanel31;
    TLabel *Label13;
    TILGlassPanel *ILGlassPanel32;
    TLabel *Label14;
    TILGlassPanel *ILGlassPanel34;
    TLabel *Label16;
    TImage *Image22;
    TImage *Image23;
    TImage *Image24;
    TImage *Image25;
    TImage *Image26;
    TImage *Image27;
    TShape *Shape1;
    TShape *Shape2;
    TShape *Shape3;
    TShape *Shape4;
    TShape *Shape5;
    TShape *Shape6;
    TShape *Shape7;
    TLabel *Label15;
    TMenuItem *C1;
    TMenuItem *Consultas1;
    TTimer *Timer2;
    TTimer *Timer3;
    TTimer *Timer4;
    TTimer *Timer5;
    TTimer *Timer6;
    TTimer *Timer7;
    TILGlassPanel *ILGlassPanel4;
    TILSegmentGauge *ILSegmentGauge9;
    TILSegmentText *ILSegmentText9;
    TILGlassPanel *ILGlassPanel2;
    TILSegmentGauge *ILSegmentGauge8;
    TILSegmentText *ILSegmentText8;
    TILGlassPanel *ILGlassPanel15;
    TILSegmentGauge *ILSegmentGauge10;
    TILSegmentText *ILSegmentText10;
    TImage *Image2;
    TImage *Image4;
    TImage *Image15;
    TImage *Image16;
    TImage *Image17;
    TImage *Image18;
    TImage *Image19;
    TImage *Image29;
    TImage *Image21;
    TImage *Image28;
    TImage *Image20;
    TILGlassPanel *ILGlassPanel17;
    TLabel *Label17;
    TILGlassPanel *ILGlassPanel33;
    TLabel *Label18;
    TILGlassPanel *ILGlassPanel35;
    TLabel *Label19;
        TMenuItem *Atender1;
        TMenuItem *Veratendidas1;
    void __fastcall Login1Click(TObject *Sender);
    void __fastcall Salir1Click(TObject *Sender);
    void __fastcall Nohayayuda1Click(TObject *Sender);
    void __fastcall Historicos1Click(TObject *Sender);
    void __fastcall DdeClientItem14Change(TObject *Sender);
    void __fastcall Discretas1Click(TObject *Sender);
    void __fastcall Elegir1Click(TObject *Sender);
    void __fastcall Modificar1Click(TObject *Sender);
    void __fastcall Agregar1Click(TObject *Sender);
    void __fastcall Eliminar1Click(TObject *Sender);
    void __fastcall Salirsesin1Click(TObject *Sender);
    void __fastcall Acercade1Click(TObject *Sender);
    void __fastcall Image1Click(TObject *Sender);
    void __fastcall Modificar2Click(TObject *Sender);
    void __fastcall Agregar2Click(TObject *Sender);
    void __fastcall Eliminar2Click(TObject *Sender);
    void __fastcall C1Click(TObject *Sender);
    void __fastcall Timer1Timer(TObject *Sender);
    void __fastcall Consultas1Click(TObject *Sender);
        void __fastcall Veratendidas1Click(TObject *Sender);
        void __fastcall Atender1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TPrincipal(TComponent* Owner);
};

//---------------------------------------------------------------------------
extern PACKAGE TPrincipal *Principal;
//---------------------------------------------------------------------------
#endif
