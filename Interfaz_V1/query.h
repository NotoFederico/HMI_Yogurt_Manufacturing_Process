//---------------------------------------------------------------------------

#ifndef queryH
#define queryH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <ComCtrls.hpp>
#include <DB.hpp>
#include <DBTables.hpp>
#include <Chart.hpp>
#include <DbChart.hpp>
#include <Series.hpp>
#include <TeEngine.hpp>
#include <TeeProcs.hpp>
//---------------------------------------------------------------------------
class TQuerySc : public TForm
{
__published:	// IDE-managed Components
    TPanel *Panel1;
    TDBGrid *DBGrid1;
    TButton *Button3;
    TButton *Button1;
    TDateTimePicker *DateTimePicker1;
    TLabel *Label3;
    TButton *Button7;
    TQuery *Query1;
    TDataSource *DataSource1;
    TShape *Shape1;
    TDateTimePicker *DateTimePicker2;
    TLabel *Label1;
    TLabel *Label2;
    TDBChart *DBChart1;
    TRadioGroup *RadioGroup1;
    TLineSeries *Series1;
    TLineSeries *Series2;
    TLineSeries *Series3;
    TLineSeries *Series4;
    TLineSeries *Series5;
    TLineSeries *Series6;
    TLineSeries *Series7;
    TLineSeries *Series8;
    TLineSeries *Series9;
    TLineSeries *Series10;
    TButton *Button2;
    TLabel *Label4;
    TButton *Button4;
    TButton *Button5;
    TQuery *Query2;
    TDataSource *DataSource2;
    TDBGrid *DBGrid2;
    void __fastcall Button4Click(TObject *Sender);
    void __fastcall Button2Click(TObject *Sender);
    void __fastcall Button5Click(TObject *Sender);
    void __fastcall Button3Click(TObject *Sender);
    void __fastcall Button7Click(TObject *Sender);
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall RadioGroup1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TQuerySc(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TQuerySc *QuerySc;
//---------------------------------------------------------------------------
#endif
