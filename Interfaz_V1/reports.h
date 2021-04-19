//---------------------------------------------------------------------------

#ifndef reportsH
#define reportsH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <QuickRpt.hpp>
#include <jpeg.hpp>
#include <QRCtrls.hpp>
//---------------------------------------------------------------------------
class TPrintReportTemp : public TForm
{
__published:	// IDE-managed Components
    TQuickRep *QuickRep1;
    TQRBand *ColumnHeaderBand1;
    TQRBand *DetailBand1;
    TQRBand *PageFooterBand1;
    TQRBand *PageHeaderBand1;
    TQRBand *SummaryBand1;
    TQRBand *TitleBand1;
    TQRLabel *QRLabel1;
    TQRLabel *QRLabel2;
    TQRLabel *QRLabel3;
    TQRLabel *QRLabel4;
    TQRLabel *QRLabel5;
    TQRLabel *QRLabel6;
    TQRImage *QRImage1;
    TQRLabel *QRLabel8;
    TQRLabel *QRLabel9;
    TQRSysData *QRSysData1;
    TQRSysData *QRSysData2;
    TQRSysData *QRSysData3;
    TQRDBText *QRDBText1;
    TQRDBText *QRDBText2;
    TQRDBText *QRDBText3;
    TQRDBText *TEMPEST;
    TQRDBText *TEMPPAS;
    TQRDBText *TEMPHOM;
    TQRDBText *TEMPPRE;
    TQRDBText *TEMPINC;
    TQRLabel *QRLabel7;
    TQRLabel *QRLabel10;
    TQRLabel *QRLabel11;
    TQRLabel *QRLabel12;
    TQRLabel *QRLabel13;
    TQRLabel *QRLabel14;
    TQRDBText *TEMPENF;
    TQRSysData *QRSysData4;
private:	// User declarations
public:		// User declarations
    __fastcall TPrintReportTemp(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TPrintReportTemp *PrintReportTemp;
//---------------------------------------------------------------------------
#endif
