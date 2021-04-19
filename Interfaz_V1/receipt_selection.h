//---------------------------------------------------------------------------

#ifndef receipt_selectionH
#define receipt_selectionH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <DB.hpp>
#include <DBClient.hpp>
//---------------------------------------------------------------------------
class TReceiptSelection : public TForm
{
__published:	// IDE-managed Components
    TPanel *Panel1;
    TComboBox *ComboBox1;
    TButton *Button1;
    TButton *Button2;
    TGroupBox *GroupBox1;
    TDataSource *DataSource1;
    TClientDataSet *ClientDataSet1;
    TLabel *Label1;
    void __fastcall Button2Click(TObject *Sender);
    void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TReceiptSelection(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TReceiptSelection *ReceiptSelection;
//---------------------------------------------------------------------------
#endif
