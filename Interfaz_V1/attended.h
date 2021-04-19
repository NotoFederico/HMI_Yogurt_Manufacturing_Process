//---------------------------------------------------------------------------

#ifndef attendedH
#define attendedH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <DBTables.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TAttended1 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TDBGrid *DBGrid1;
        TDataSource *DataSource1;
        TQuery *Query1;
        TComboBox *ComboBox1;
        TButton *Button1;
        TLabel *Label1;
        TButton *Button2;
        TLabel *Label2;
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TAttended1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAttended1 *Attended1;
//---------------------------------------------------------------------------
#endif
