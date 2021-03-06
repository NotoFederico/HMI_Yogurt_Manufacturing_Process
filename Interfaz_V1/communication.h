//---------------------------------------------------------------------------

#ifndef communicationH
#define communicationH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ScktComp.hpp>
//---------------------------------------------------------------------------
class TComms : public TForm
{
__published:	// IDE-managed Components
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TLabel *Label4;
    TEdit *Edit1;
    TEdit *Edit2;
    TButton *Button1;
    TButton *Button3;
    TClientSocket *ClientSocket1;
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall Button3Click(TObject *Sender);
    void __fastcall ClientSocket1Connect(TObject *Sender,
                                         TCustomWinSocket *Socket);
    void __fastcall ClientSocket1Error(TObject *Sender,
                                       TCustomWinSocket *Socket, TErrorEvent ErrorEvent,
                                       int &ErrorCode);
    void __fastcall ClientSocket1Disconnect(TObject *Sender,
                                            TCustomWinSocket *Socket);
private:	// User declarations
public:		// User declarations
    __fastcall TComms(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TComms *Comms;
//---------------------------------------------------------------------------
#endif
