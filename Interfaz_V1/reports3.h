//---------------------------------------------------------------------------

#ifndef reports3H
#define reports3H
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
class TPrintReportAlarms : public TForm
{
__published:	// IDE-managed Components
    TQuickRep *QuickRep1;
    TQRBand *ColumnHeaderBand1;
    TQRLabel *QRLabel3;
    TQRLabel *QRLabel4;
    TQRLabel *QRLabel5;
    TQRLabel *QRLabel7;
    TQRBand *DetailBand1;
    TQRDBText *QRDBText1;
    TQRDBText *QRDBText2;
    TQRDBText *QRDBText3;
    TQRDBText *TEMPEST;
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
    TQRLabel *QRLabel10;
    TQRDBText *QRDBText4;
private:	// User declarations
public:		// User declarations
    __fastcall TPrintReportAlarms(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPrintReportAlarms *PrintReportAlarms;
//---------------------------------------------------------------------------
#endif
