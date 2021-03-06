//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("main.cpp", Principal);
USEFORM("credentials.cpp", Auth);
USEFORM("historical_chart.cpp", HistoricalGraphs);
USEFORM("receipt_selection.cpp", ReceiptSelection);
USEFORM("receipt_edition.cpp", ReceiptEdition);
USEFORM("receipt_add.cpp", ReceiptAdd);
USEFORM("receipt_delete.cpp", ReceiptDelete);
USEFORM("user_edition.cpp", UserEdition);
USEFORM("user_delete.cpp", UserDelete);
USEFORM("user_add.cpp", UserAdd);
USEFORM("communication.cpp", Comms);
USEFORM("reports.cpp", PrintReportTemp);
USEFORM("alarms.cpp", Alarms1);
USEFORM("query.cpp", QuerySc);
USEFORM("reports2.cpp", PrintReportPP);
USEFORM("reports3.cpp", PrintReportAlarms);
USEFORM("attended.cpp", Attended1);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    try
    {
        Application->Initialize();
        Application->CreateForm(__classid(TPrincipal), &Principal);
                 Application->CreateForm(__classid(TAuth), &Auth);
                 Application->CreateForm(__classid(THistoricalGraphs), &HistoricalGraphs);
                 Application->CreateForm(__classid(TReceiptSelection), &ReceiptSelection);
                 Application->CreateForm(__classid(TReceiptEdition), &ReceiptEdition);
                 Application->CreateForm(__classid(TReceiptAdd), &ReceiptAdd);
                 Application->CreateForm(__classid(TReceiptDelete), &ReceiptDelete);
                 Application->CreateForm(__classid(TUserEdition), &UserEdition);
                 Application->CreateForm(__classid(TUserDelete), &UserDelete);
                 Application->CreateForm(__classid(TUserAdd), &UserAdd);
                 Application->CreateForm(__classid(TComms), &Comms);
                 Application->CreateForm(__classid(TPrintReportTemp), &PrintReportTemp);
                 Application->CreateForm(__classid(TAlarms1), &Alarms1);
                 Application->CreateForm(__classid(TQuerySc), &QuerySc);
                 Application->CreateForm(__classid(TPrintReportPP), &PrintReportPP);
                 Application->CreateForm(__classid(TPrintReportAlarms), &PrintReportAlarms);
                 Application->CreateForm(__classid(TAttended1), &Attended1);
                 Application->Run();
    }
    catch (Exception &exception)
    {
        Application->ShowException(&exception);
    }
    catch (...)
    {
        try
        {
            throw Exception("");
        }
        catch (Exception &exception)
        {
            Application->ShowException(&exception);
        }
    }
    return 0;
}
//---------------------------------------------------------------------------
