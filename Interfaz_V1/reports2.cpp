//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "reports2.h"
#include "query.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TPrintReportPP *PrintReportPP;
//---------------------------------------------------------------------------
__fastcall TPrintReportPP::TPrintReportPP(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
