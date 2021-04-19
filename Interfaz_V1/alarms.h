//---------------------------------------------------------------------------

#ifndef alarmsH
#define alarmsH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <DBTables.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TAlarms1 : public TForm
{
__published:	// IDE-managed Components
    TPanel *Panel1;
    TDBGrid *DBGrid1;
    TDataSource *DataSource1;
    TQuery *Query1;
    TEdit *Edit1;
    TButton *Button2;
    TLabel *Label1;
    TButton *Button1;
    void __fastcall Button2Click(TObject *Sender);
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall DBGrid1CellClick(TColumn *Column);
private:	// User declarations
public:		// User declarations
    __fastcall TAlarms1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAlarms1 *Alarms1;
//---------------------------------------------------------------------------
#endif
