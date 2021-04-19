//---------------------------------------------------------------------------

#ifndef user_deleteH
#define user_deleteH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <DB.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TUserDelete : public TForm
{
__published:	// IDE-managed Components
    TPanel *Panel1;
    TGroupBox *GroupBox1;
    TComboBox *ComboBox1;
    TButton *Button2;
    TButton *Button1;
    TQuery *Query1;
    void __fastcall Button2Click(TObject *Sender);
    void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TUserDelete(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TUserDelete *UserDelete;
//---------------------------------------------------------------------------
#endif
