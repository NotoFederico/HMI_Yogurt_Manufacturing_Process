//---------------------------------------------------------------------------

#ifndef user_editionH
#define user_editionH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <DB.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TUserEdition : public TForm
{
__published:	// IDE-managed Components
    TPanel *Panel1;
    TGroupBox *GroupBox1;
    TLabel *Label2;
    TButton *Button2;
    TButton *Button1;
    TComboBox *ComboBox1;
    TGroupBox *GroupBox2;
    TComboBox *ComboBox2;
    TLabel *Label1;
    TEdit *Edit1;
    TLabel *Label4;
    TEdit *Edit3;
    TLabel *Label5;
    TEdit *Edit4;
    TQuery *Query1;
    TLabel *Label3;
    void __fastcall Button2Click(TObject *Sender);
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall ComboBox1Change(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TUserEdition(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TUserEdition *UserEdition;
//---------------------------------------------------------------------------
#endif
