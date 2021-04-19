//---------------------------------------------------------------------------

#ifndef credentialsH
#define credentialsH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <DB.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TAuth : public TForm
{
__published:	// IDE-managed Components
    TPanel *Panel1;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TEdit *Edit1;
    TShape *Shape1;
    TButton *Button3;
    TButton *Button4;
    TLabel *Label4;
    TLabel *Label5;
    TTable *Table1;
    TEdit *Edit2;
    void __fastcall Button2Click(TObject *Sender);
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall Panel1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TAuth(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAuth *Auth;
//---------------------------------------------------------------------------
#endif

class Credentials
{
public:
    int hierarchy;
public:
    Credentials();
    void Default(void);
    void Worker(void);
    void Supervisor(void);
    void Administrator(void);

};
