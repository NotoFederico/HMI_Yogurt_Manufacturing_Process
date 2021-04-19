//---------------------------------------------------------------------------

#ifndef historical_chartH
#define historical_chartH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Chart.hpp>
#include <DbChart.hpp>
#include <ExtCtrls.hpp>
#include <TeEngine.hpp>
#include <TeeProcs.hpp>
#include <DB.hpp>
#include <DBTables.hpp>
#include <Series.hpp>
//---------------------------------------------------------------------------
class THistoricalGraphs : public TForm
{
__published:	// IDE-managed Components
    TRadioGroup *RadioGroup1;
    TPanel *Panel1;
    TPanel *Panel2;
    TPanel *Panel3;
    TTable *Table1;
    TDataSource *DataSource1;
    TSplitter *Splitter1;
    TDBChart *DBChart1;
    TLineSeries *Series1;
    TDBChart *DBChart2;
    TDBChart *DBChart3;
    TDBChart *DBChart4;
    TDBChart *DBChart5;
    TDBChart *DBChart6;
    TDBChart *DBChart7;
    TDBChart *DBChart8;
    TLineSeries *Series2;
    TLineSeries *Series3;
    TLineSeries *Series4;
    TLineSeries *Series5;
    TLineSeries *Series6;
    TLineSeries *Series7;
    TLineSeries *Series8;
    TLineSeries *Series9;
    TLineSeries *Series10;
    void __fastcall RadioGroup1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall THistoricalGraphs(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE THistoricalGraphs *HistoricalGraphs;
//---------------------------------------------------------------------------
#endif
