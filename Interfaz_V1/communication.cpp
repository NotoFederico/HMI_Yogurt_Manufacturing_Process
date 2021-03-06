//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "communication.h"
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TComms *Comms;
//---------------------------------------------------------------------------
__fastcall TComms::TComms(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TComms::Button1Click(TObject *Sender)
{
// si la direcci?n IP esta cargada
    if (Edit2->GetTextLen()>0)
    {
        //cargo direcci?n IP
        ClientSocket1->Address = Edit1->Text.c_str();
        //cargo el puerto TCP
        ClientSocket1->Port = atoi(Edit2->Text.c_str());
    }
    ClientSocket1->Active=true;   //inicio la conexi?n

// actualizo informaci?n de estado:
    Label4->Caption="Conectando con: " + Edit1->Text;
}
//---------------------------------------------------------------------------
void __fastcall TComms::Button3Click(TObject *Sender)
{
    ClientSocket1->Active=false;
    Label4->Caption="Desconectado";
    Principal->Label15->Caption = "Desconectado";
    Principal->Label15->Font->Color = clRed;
}
//---------------------------------------------------------------------------
void __fastcall TComms::ClientSocket1Connect(TObject *Sender,
        TCustomWinSocket *Socket)
{
    // actualizo informaci?n de estado:
    Label4->Caption = "Conectado a: " + Socket->RemoteHost;
    Principal->Label15->Caption = "Conectado a: " + Socket->RemoteHost;
    Principal->Label15->Font->Color = clGreen;
}
//---------------------------------------------------------------------------
void __fastcall TComms::ClientSocket1Error(TObject *Sender,
        TCustomWinSocket *Socket, TErrorEvent ErrorEvent, int &ErrorCode)
{

    Application->MessageBoxA("Asegurese que la aplicaci?n servidor est? conectada", "Error de comunicaci?n", MB_OK);
}
//---------------------------------------------------------------------------
void __fastcall TComms::ClientSocket1Disconnect(TObject *Sender,
        TCustomWinSocket *Socket)
{
    Principal->Label15->Caption = "Desconectado";
    Principal->Label15->Font->Color = clRed;
    Label4->Caption="Desconectado";
    Application->MessageBoxA("La conexion ha caducado", "Desconexion", MB_OK);
}
//---------------------------------------------------------------------------

