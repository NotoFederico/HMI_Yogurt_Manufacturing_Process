//---------------------------------------------------------------------------

#ifndef ServerH
#define ServerH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DdeMan.hpp>
#include <ExtCtrls.hpp>
#include <ScktComp.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TDdeServerConv *DdeServerConv2;
    TDdeServerItem *DdeServerItem1;
    TDdeServerItem *DdeServerItem2;
    TDdeServerItem *DdeServerItem3;
    TPanel *Panel2;
    TLabel *Label1;
    TLabel *Label9;
    TLabel *Label8;
    TLabel *Label7;
    TLabel *Label6;
    TLabel *Label5;
    TLabel *Label4;
    TLabel *Label3;
    TLabel *Label2;
    TLabel *Label14;
    TLabel *Label13;
    TLabel *Label12;
    TLabel *Label11;
    TLabel *Label10;
    TDdeServerItem *DdeServerItem4;
    TDdeServerItem *DdeServerItem5;
    TDdeServerItem *DdeServerItem6;
    TDdeServerItem *DdeServerItem7;
    TDdeServerItem *DdeServerItem8;
    TDdeServerItem *DdeServerItem9;
    TDdeServerItem *DdeServerItem10;
    TDdeServerItem *DdeServerItem11;
    TDdeServerItem *DdeServerItem12;
    TDdeServerItem *DdeServerItem13;
    TDdeServerItem *DdeServerItem14;
    TTimer *Timer1;
    TTimer *Timer2;
    TPanel *Panel3;
    TTimer *Timer3;
    TTimer *Timer4;
    TTimer *Timer5;
    TTimer *Timer6;
    TTimer *Timer7;
    TTimer *Timer8;
    TTimer *Timer9;
    TTimer *Timer10;
    TTimer *Timer11;
    TTimer *Timer12;
    TTimer *Timer13;
    TTimer *Timer14;
    TGroupBox *GroupBox1;
    TLabel *Label34;
    TLabel *Label35;
    TLabel *Label36;
    TLabel *Label37;
    TLabel *Label38;
    TLabel *Label39;
    TLabel *Label40;
    TLabel *Label41;
    TLabel *Label42;
    TLabel *Label43;
    TLabel *Label44;
    TLabel *Label45;
    TLabel *Label46;
    TLabel *Label47;
    TLabel *Label48;
    TLabel *Label49;
    TLabel *Label50;
    TLabel *Label51;
    TLabel *Label52;
    TLabel *Label53;
    TLabel *Label54;
    TLabel *Label55;
    TLabel *Label56;
    TLabel *Label57;
    TLabel *Label58;
    TLabel *Label59;
    TLabel *Label60;
    TLabel *Label61;
    TLabel *Label62;
    TLabel *Label63;
    TLabel *Label64;
    TLabel *Label65;
    TLabel *Label66;
    TLabel *Label67;
    TLabel *Label68;
    TLabel *Label69;
    TLabel *Label70;
    TLabel *Label71;
    TLabel *Label72;
    TLabel *Label73;
    TLabel *Label74;
    TLabel *Label75;
    TLabel *Label76;
    TLabel *Label77;
    TLabel *Label78;
    TLabel *Label79;
    TLabel *Label80;
    TLabel *Label81;
    TLabel *Label82;
    TLabel *Label83;
    TLabel *Label84;
    TLabel *Label85;
    TLabel *Label86;
    TLabel *Label87;
    TLabel *Label88;
    TLabel *Label89;
    TLabel *Label90;
    TLabel *Label91;
    TLabel *Label92;
    TLabel *Label93;
    TLabel *Label94;
    TLabel *Label95;
    TLabel *Label96;
    TLabel *Label97;
    TLabel *Label98;
    TLabel *Label99;
    TLabel *Label100;
    TLabel *Label101;
    TLabel *Label102;
    TLabel *Label103;
    TLabel *Label104;
    TLabel *Label105;
    TLabel *Label106;
    TLabel *Label107;
    TLabel *Label108;
    TLabel *Label109;
    TLabel *Label110;
    TLabel *Label111;
    TLabel *Label112;
    TLabel *Label113;
    TLabel *Label114;
    TLabel *Label115;
    TLabel *Label116;
    TLabel *Label117;
    TLabel *Label118;
    TLabel *Label119;
    TLabel *Label120;
    TLabel *Label121;
    TLabel *Label122;
    TLabel *Label123;
    TLabel *Label124;
    TLabel *Label125;
    TLabel *Label126;
    TLabel *Label127;
    TLabel *Label128;
    TLabel *Label129;
    TLabel *Label130;
    TLabel *Label131;
    TLabel *Label132;
    TLabel *Label133;
    TLabel *Label134;
    TLabel *Label135;
    TLabel *Label136;
    TLabel *Label137;
    TLabel *Label138;
    TLabel *Label139;
    TLabel *Label140;
    TLabel *Label141;
    TLabel *Label142;
    TLabel *Label143;
    TLabel *Label144;
    TLabel *Label145;
    TLabel *Label146;
    TLabel *Label147;
    TLabel *Label148;
    TLabel *Label149;
    TLabel *Label150;
    TLabel *Label151;
    TLabel *Label152;
    TLabel *Label153;
    TLabel *Label154;
    TLabel *Label155;
    TLabel *Label156;
    TLabel *Label157;
    TLabel *Label158;
    TLabel *Label159;
    TLabel *Label160;
    TLabel *Label161;
    TLabel *Label162;
    TLabel *Label163;
    TLabel *Label164;
    TLabel *Label165;
    TLabel *Label166;
    TLabel *Label167;
    TLabel *Label168;
    TLabel *Label169;
    TLabel *Label170;
    TLabel *Label171;
    TLabel *Label172;
    TLabel *Label173;
    TLabel *Label174;
    TLabel *Label185;
    TLabel *Label186;
    TLabel *Label187;
    TLabel *Label188;
    TRadioGroup *RadioGroup1;
    TRadioGroup *RadioGroup2;
    TRadioGroup *RadioGroup3;
    TRadioGroup *RadioGroup4;
    TRadioGroup *RadioGroup5;
    TRadioGroup *RadioGroup6;
    TRadioGroup *RadioGroup7;
    TRadioGroup *RadioGroup8;
    TRadioGroup *RadioGroup9;
    TRadioGroup *RadioGroup10;
    TRadioGroup *RadioGroup11;
    TRadioGroup *RadioGroup12;
    TRadioGroup *RadioGroup13;
    TRadioGroup *RadioGroup14;
    TEdit *Edit1;
    TEdit *Edit3;
    TEdit *Edit4;
    TEdit *Edit5;
    TEdit *Edit6;
    TEdit *Edit9;
    TEdit *Edit10;
    TEdit *Edit11;
    TEdit *Edit12;
    TEdit *Edit15;
    TEdit *Edit16;
    TEdit *Edit19;
    TEdit *Edit20;
    TLabel *Label15;
    TLabel *Label16;
    TEdit *Edit2;
    TPanel *Panel1;
    TLabel *Label17;
    TLabel *Label18;
    TLabel *Label19;
    TEdit *Edit21;
    TServerSocket *ServerSocket1;
    TButton *Button1;
    TButton *Button2;
    TGroupBox *GroupBox2;
    TGroupBox *GroupBox3;
    TPanel *Panel4;
    TLabel *Label22;
    TLabel *Label23;
    TLabel *Label20;
    TEdit *Edit24;
    TEdit *Edit25;
    TEdit *Edit26;
    TEdit *Edit27;
    TEdit *Edit28;
    TEdit *Edit29;
    TLabel *Label21;
    TLabel *Label24;
    TLabel *Label25;
    TLabel *Label26;
    TLabel *Label27;
    TLabel *Label28;
    TLabel *Label29;
    TLabel *Label30;
    TLabel *Label31;
    TLabel *Label32;
    TLabel *Label33;
    TLabel *Label175;
    TLabel *Label176;
    TLabel *Label177;
    TLabel *Label178;
    TLabel *Label179;
    TLabel *Label180;
    TLabel *Label181;
    TLabel *Label182;
    TLabel *Label183;
    TLabel *Label184;
    TLabel *Label189;
    TLabel *Label190;
    TLabel *Label191;
    TLabel *Label192;
    TLabel *Label193;
    TLabel *Label194;
    TLabel *Label195;
    TLabel *Label196;
    TPanel *Panel5;
    TPanel *Panel6;
    TGroupBox *GroupBox4;
    TEdit *Edit7;
    TEdit *Edit8;
    TEdit *Edit13;
    TEdit *Edit14;
    TEdit *Edit17;
    TEdit *Edit18;
    TEdit *Edit22;
    TEdit *Edit23;
    void __fastcall Timer1Timer(TObject *Sender);
    void __fastcall Timer2Timer(TObject *Sender);
    void __fastcall Timer3Time(TObject *Sender);
    void __fastcall Timer4Time(TObject *Sender);
    void __fastcall Timer5Time(TObject *Sender);
    void __fastcall Timer6Time(TObject *Sender);
    void __fastcall Timer7Time(TObject *Sender);
    void __fastcall Timer8Time(TObject *Sender);
    void __fastcall Timer9Time(TObject *Sender);
    void __fastcall Timer10Time(TObject *Sender);
    void __fastcall Timer11Time(TObject *Sender);
    void __fastcall Timer12Time(TObject *Sender);
    void __fastcall Timer13Time(TObject *Sender);
    void __fastcall Timer14Time(TObject *Sender);
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall Button2Click(TObject *Sender);
    void __fastcall ServerSocket1Accept(TObject *Sender,
                                        TCustomWinSocket *Socket);
    void __fastcall ServerSocket1ClientRead(TObject *Sender,
                                            TCustomWinSocket *Socket);
    void __fastcall ServerSocket1ClientDisconnect(TObject *Sender,
            TCustomWinSocket *Socket);

private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif