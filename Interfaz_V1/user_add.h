//---------------------------------------------------------------------------

#ifndef user_addH
#define user_addH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <DB.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TUserAdd : public TForm
{
__published:	// IDE-managed Components
    TPanel *Panel1;
    TGroupBox *GroupBox1;
    TButton *Button2;
    TButton *Button1;
    TLabel *Label3;
    TLabel *Label2;
    TEdit *Edit2;
    TEdit *Edit1;
    TComboBox *ComboBox1;
    TLabel *Label1;
    TLabel *Label4;
    TLabel *Label5;
    TEdit *Edit3;
    TEdit *Edit4;
    TQuery *Query1;
    void __fastcall Button2Click(TObject *Sender);
    void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TUserAdd(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TUserAdd *UserAdd;
//---------------------------------------------------------------------------
#endif
