//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "reports3.h"
#include "query.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPrintReportAlarms *PrintReportAlarms;
//---------------------------------------------------------------------------
__fastcall TPrintReportAlarms::TPrintReportAlarms(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
