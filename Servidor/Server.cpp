//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Server.h"
#include "variables.h"

void DisableTimers2to14(void);
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm1 *Form1;
TStringList  *ReceiptValues = new TStringList;
bool ServerConnected = false;
bool runFlag = false;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
    Timer1->Enabled = false;
    DisableTimers2to14();

    DdeServerItem1->ServerConv = DdeServerConv2;
    DdeServerItem2->ServerConv = DdeServerConv2;
    DdeServerItem3->ServerConv = DdeServerConv2;
    DdeServerItem4->ServerConv = DdeServerConv2;
    DdeServerItem5->ServerConv = DdeServerConv2;
    DdeServerItem6->ServerConv = DdeServerConv2;
    DdeServerItem7->ServerConv = DdeServerConv2;
    DdeServerItem8->ServerConv = DdeServerConv2;
    DdeServerItem9->ServerConv = DdeServerConv2;
    DdeServerItem10->ServerConv = DdeServerConv2;
    DdeServerItem11->ServerConv = DdeServerConv2;
    DdeServerItem12->ServerConv = DdeServerConv2;
    DdeServerItem13->ServerConv = DdeServerConv2;
    DdeServerItem14->ServerConv = DdeServerConv2;

    ContVar cont;
    cont.resetTemp();
    cont.resetTime();
    cont.resetPp();

    Label1->Caption = cont.tempEnf;
    Label2->Caption = cont.tempEst;
    Label3->Caption = cont.tempHom;
    Label4->Caption = cont.tempInc;
    Label5->Caption = cont.tempPas;
    Label6->Caption = cont.tempPre;
    Label7->Caption = cont.tempRef;
    Label8->Caption = cont.timeEnf;
    Label9->Caption = cont.timeInc;
    Label10->Caption = cont.timePas;
    Label11->Caption = cont.timePre;
    Label12->Caption = cont.ppCol;
    Label13->Caption = cont.ppCub;
    Label14->Caption = cont.ppYog;

//comentar la linea que habilita el timer 1
//Form1->Timer1->Enabled = true;

    ServerSocket1->Port = atoi(Edit21->Text.c_str());
    ServerSocket1->Active = true;
    Label18->Caption = "Escuchando...";
    Edit21->Enabled = false;
}





void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
    //Temperatura de refrigeraci?n
    if(RadioGroup1->ItemIndex == 0)
    {
        Label1->Caption = Label36->Caption;
    }
    else
    {
        Label1->Caption = rand()%(atoi(Edit2->Text.c_str()) + 1 - atoi(Edit1->Text.c_str())) + atoi(Edit1->Text.c_str());
    }
    DdeServerItem1->Text = Label1->Caption;
    Form1->Timer2->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
    //Temperatura de estandarizaci?n
    DisableTimers2to14();
    if(RadioGroup2->ItemIndex == 0)
    {
        Label2->Caption = Label41->Caption;
    }
    else
    {
        Label2->Caption = rand()%(atoi(Edit4->Text.c_str()) + 1 - atoi(Edit3->Text.c_str())) + atoi(Edit3->Text.c_str());
    }
    DdeServerItem2->Text = Label2->Caption;
    Timer3->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer3Time(TObject *Sender)
{
    //Temperatura de pasteurizaci?n
    DisableTimers2to14();
    if(RadioGroup3->ItemIndex == 0)
    {
        Label3->Caption = Label46->Caption;
    }
    else
    {
        Label3->Caption = rand()%(atoi(Edit6->Text.c_str()) + 1 - atoi(Edit5->Text.c_str())) + atoi(Edit5->Text.c_str());
    }
    DdeServerItem3->Text = Label3->Caption;
    Timer4->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer4Time(TObject *Sender)
{
    //Tiempo de pasteurizaci?n
    DisableTimers2to14();
    if(RadioGroup7->ItemIndex == 0)
    {
        Label4->Caption = Label51->Caption;
    }
    else
    {
        Label4->Caption = rand()%(atoi(Edit8->Text.c_str()) + 1 - atoi(Edit7->Text.c_str())) + atoi(Edit7->Text.c_str());
    }
    DdeServerItem4->Text = Label4->Caption;
    Timer5->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer5Time(TObject *Sender)
{
    //Temperatura de homogeneizaci?n
    DisableTimers2to14();
    if(RadioGroup11->ItemIndex == 0)
    {
        Label5->Caption = Label56->Caption;
    }
    else
    {
        Label5->Caption = rand()%(atoi(Edit10->Text.c_str()) + 1 - atoi(Edit9->Text.c_str())) + atoi(Edit9->Text.c_str());
    }
    DdeServerItem5->Text = Label5->Caption;
    Timer6->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer6Time(TObject *Sender)
{
    //Temperatura de pre-enfriado
    DisableTimers2to14();
    if(RadioGroup4->ItemIndex == 0)
    {
        Label6->Caption = Label61->Caption;
    }
    else
    {
        Label6->Caption = rand()%(atoi(Edit12->Text.c_str()) + 1 - atoi(Edit11->Text.c_str())) + atoi(Edit11->Text.c_str());
    }
    DdeServerItem6->Text = Label6->Caption;
    Timer7->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer7Time(TObject *Sender)
{
    //Tiempo de pre-enfriado
    DisableTimers2to14();
    if(RadioGroup8->ItemIndex == 0)
    {
        Label7->Caption = Label66->Caption;
    }
    else
    {
        Label7->Caption = rand()%(atoi(Edit14->Text.c_str()) + 1 - atoi(Edit13->Text.c_str())) + atoi(Edit13->Text.c_str());
    }
    DdeServerItem7->Text = Label7->Caption;
    Timer8->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer8Time(TObject *Sender)
{
    //Temperatura de incubaci?n
    DisableTimers2to14();
    if(RadioGroup5->ItemIndex == 0)
    {
        Label8->Caption = Label107->Caption;
    }
    else
    {
        Label8->Caption = rand()%(atoi(Edit16->Text.c_str()) + 1 - atoi(Edit15->Text.c_str())) + atoi(Edit15->Text.c_str());
    }
    DdeServerItem8->Text = Label8->Caption;
    Timer9->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer9Time(TObject *Sender)
{
    //Tiempo de incubaci?n
    DisableTimers2to14();
    if(RadioGroup9->ItemIndex == 0)
    {
        Label9->Caption = Label112->Caption;
    }
    else
    {
        Label9->Caption = rand()%(atoi(Edit16->Text.c_str()) + 1 - atoi(Edit15->Text.c_str())) + atoi(Edit15->Text.c_str());
    }
    DdeServerItem9->Text = Label9->Caption;
    Timer10->Enabled = true;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer10Time(TObject *Sender)
{
    //Temperatura de enfriado
    DisableTimers2to14();
    if(RadioGroup6->ItemIndex == 0)
    {
        Label10->Caption = Label117->Caption;
    }
    else
    {
        Label10->Caption = rand()%(atoi(Edit20->Text.c_str()) + 1 - atoi(Edit19->Text.c_str())) + atoi(Edit19->Text.c_str());
    }
    DdeServerItem10->Text = Label10->Caption;
    Timer11->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer11Time(TObject *Sender)
{
    //Tiempo de enfriado
    DisableTimers2to14();
    if(RadioGroup10->ItemIndex == 0)
    {
        Label11->Caption = Label122->Caption;
    }
    else
    {
        Label11->Caption = rand()%(atoi(Edit23->Text.c_str()) + 1 - atoi(Edit22->Text.c_str())) + atoi(Edit22->Text.c_str());
    }
    DdeServerItem11->Text = Label11->Caption;
    Timer12->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer12Time(TObject *Sender)
{
    //Porc de yogurt
    DisableTimers2to14();
    if(RadioGroup12->ItemIndex == 0)
    {
        Label12->Caption = Label127->Caption;
    }
    else
    {
        Label12->Caption = rand()%(atoi(Edit25->Text.c_str()) + 1 - atoi(Edit24->Text.c_str())) + atoi(Edit24->Text.c_str());
    }
    DdeServerItem12->Text = Label12->Caption;
    Timer13->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer13Time(TObject *Sender)
{
    //Porc de colch?n
    DisableTimers2to14();
    if(RadioGroup13->ItemIndex == 0)
    {
        Label13->Caption = Label132->Caption;
    }
    else
    {
        Label13->Caption = rand()%(atoi(Edit27->Text.c_str()) + 1 - atoi(Edit26->Text.c_str())) + atoi(Edit26->Text.c_str());
    }
    DdeServerItem13->Text = Label13->Caption;
    Timer14->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer14Time(TObject *Sender)
{
    //Porc de cubierta
    DisableTimers2to14();
    if(RadioGroup14->ItemIndex == 0)
    {
        Label14->Caption = Label137->Caption;
    }
    else
    {
        Label14->Caption = rand()%(atoi(Edit29->Text.c_str()) + 1 - atoi(Edit28->Text.c_str())) + atoi(Edit28->Text.c_str());
    }
    DdeServerItem14->Text = Label14->Caption;
}
//---------------------------------------------------------------------------

void DisableTimers2to14(void)
{
    Form1->Timer2->Enabled = false;
    Form1->Timer3->Enabled = false;
    Form1->Timer4->Enabled = false;
    Form1->Timer5->Enabled = false;
    Form1->Timer6->Enabled = false;
    Form1->Timer7->Enabled = false;
    Form1->Timer8->Enabled = false;
    Form1->Timer9->Enabled = false;
    Form1->Timer10->Enabled = false;
    Form1->Timer11->Enabled = false;
    Form1->Timer12->Enabled = false;
    Form1->Timer13->Enabled = false;
    Form1->Timer14->Enabled = false;
}






void __fastcall TForm1::Button1Click(TObject *Sender)
{
    ServerSocket1->Port = atoi(Edit21->Text.c_str());
    ServerSocket1->Active = true;
    Label18->Caption = "Escuchando...";
    Edit21->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
    ServerSocket1->Active = false;
    Label18->Caption = "Inactivo...";
    Edit21->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ServerSocket1Accept(TObject *Sender,
        TCustomWinSocket *Socket)
{
    ServerConnected = true;
    Label18->Caption = "Conectado a: " + Socket->RemoteAddress;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ServerSocket1ClientRead(TObject *Sender,
        TCustomWinSocket *Socket)
{
    if(ServerConnected)
    {
        Label23->Caption = Socket->ReceiveText();

        ReceiptValues->CommaText = Label23->Caption;
        Label23->Caption = "Si";
        Label34->Caption = ReceiptValues->Strings[0];
        Label35->Caption = ReceiptValues->Strings[1];
        Label36->Caption = ReceiptValues->Strings[2];
        Label37->Caption = ReceiptValues->Strings[3];
        Label38->Caption = ReceiptValues->Strings[4];
        Label39->Caption = ReceiptValues->Strings[5];
        Label40->Caption = ReceiptValues->Strings[6];
        Label41->Caption = ReceiptValues->Strings[7];
        Label42->Caption = ReceiptValues->Strings[8];
        Label43->Caption = ReceiptValues->Strings[9];
        Label44->Caption = ReceiptValues->Strings[10];
        Label45->Caption = ReceiptValues->Strings[11];
        Label46->Caption = ReceiptValues->Strings[12];
        Label47->Caption = ReceiptValues->Strings[13];
        Label48->Caption = ReceiptValues->Strings[14];
        Label49->Caption = ReceiptValues->Strings[15];
        Label50->Caption = ReceiptValues->Strings[16];
        Label51->Caption = ReceiptValues->Strings[17];
        Label52->Caption = ReceiptValues->Strings[18];
        Label53->Caption = ReceiptValues->Strings[19];
        Label54->Caption = ReceiptValues->Strings[20];
        Label55->Caption = ReceiptValues->Strings[21];
        Label56->Caption = ReceiptValues->Strings[22];
        Label57->Caption = ReceiptValues->Strings[23];
        Label58->Caption = ReceiptValues->Strings[24];
        Label59->Caption = ReceiptValues->Strings[25];
        Label60->Caption = ReceiptValues->Strings[26];
        Label61->Caption = ReceiptValues->Strings[27];
        Label62->Caption = ReceiptValues->Strings[28];
        Label63->Caption = ReceiptValues->Strings[29];
        Label64->Caption = ReceiptValues->Strings[30];
        Label65->Caption = ReceiptValues->Strings[31];
        Label66->Caption = ReceiptValues->Strings[32];
        Label67->Caption = ReceiptValues->Strings[33];
        Label68->Caption = ReceiptValues->Strings[34];
        Label105->Caption = ReceiptValues->Strings[35];
        Label106->Caption = ReceiptValues->Strings[36];
        Label107->Caption = ReceiptValues->Strings[37];
        Label108->Caption = ReceiptValues->Strings[38];
        Label109->Caption = ReceiptValues->Strings[39];
        Label110->Caption = ReceiptValues->Strings[40];
        Label111->Caption = ReceiptValues->Strings[41];
        Label112->Caption = ReceiptValues->Strings[42];
        Label113->Caption = ReceiptValues->Strings[43];
        Label114->Caption = ReceiptValues->Strings[44];
        Label115->Caption = ReceiptValues->Strings[45];
        Label116->Caption = ReceiptValues->Strings[46];
        Label117->Caption = ReceiptValues->Strings[47];
        Label118->Caption = ReceiptValues->Strings[48];
        Label119->Caption = ReceiptValues->Strings[49];
        Label120->Caption = ReceiptValues->Strings[50];
        Label121->Caption = ReceiptValues->Strings[51];
        Label122->Caption = ReceiptValues->Strings[52];
        Label123->Caption = ReceiptValues->Strings[53];
        Label124->Caption = ReceiptValues->Strings[54];
        Label125->Caption = ReceiptValues->Strings[55];
        Label126->Caption = ReceiptValues->Strings[56];
        Label127->Caption = ReceiptValues->Strings[57];
        Label128->Caption = ReceiptValues->Strings[58];
        Label129->Caption = ReceiptValues->Strings[59];
        Label130->Caption = ReceiptValues->Strings[60];
        Label131->Caption = ReceiptValues->Strings[61];
        Label132->Caption = ReceiptValues->Strings[62];
        Label133->Caption = ReceiptValues->Strings[63];
        Label134->Caption = ReceiptValues->Strings[64];
        Label135->Caption = ReceiptValues->Strings[65];
        Label136->Caption = ReceiptValues->Strings[66];
        Label137->Caption = ReceiptValues->Strings[67];
        Label138->Caption = ReceiptValues->Strings[68];
        Label139->Caption = ReceiptValues->Strings[69];

        Form1->Timer1->Enabled = true;

    }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ServerSocket1ClientDisconnect(TObject *Sender,
        TCustomWinSocket *Socket)
{
    Label18->Caption = "Escuchando...";
    Edit21->Enabled = true;
}
//---------------------------------------------------------------------------






