//---------------------------------------------------------------------------

#ifndef reports2H
#define reports2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <QRCtrls.hpp>
#include <QuickRpt.hpp>
//---------------------------------------------------------------------------
class TPrintReportPP : public TForm
{
__published:	// IDE-managed Components
    TQuickRep *QuickRep1;
    TQRBand *ColumnHeaderBand1;
    TQRLabel *QRLabel3;
    TQRLabel *QRLabel4;
    TQRLabel *QRLabel5;
    TQRLabel *QRLabel7;
    TQRLabel *QRLabel10;
    TQRBand *DetailBand1;
    TQRDBText *QRDBText1;
    TQRDBText *QRDBText2;
    TQRDBText *QRDBText3;
    TQRDBText *TEMPEST;
    TQRDBText *TEMPPAS;
    TQRBand *PageFooterBand1;
    TQRLabel *QRLabel9;
    TQRSysData *QRSysData2;
    TQRSysData *QRSysData4;
    TQRBand *PageHeaderBand1;
    TQRLabel *QRLabel1;
    TQRImage *QRImage1;
    TQRBand *SummaryBand1;
    TQRLabel *QRLabel6;
    TQRLabel *QRLabel8;
    TQRSysData *QRSysData1;
    TQRSysData *QRSysData3;
    TQRBand *TitleBand1;
    TQRLabel *QRLabel2;
private:	// User declarations
public:		// User declarations
    __fastcall TPrintReportPP(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPrintReportPP *PrintReportPP;
//---------------------------------------------------------------------------
#endif
