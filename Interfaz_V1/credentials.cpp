//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "credentials.h"
#include "main.h"

#define ADMIN        1
#define SUPERVISOR   2
#define WORKER       3
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAuth *Auth;
Credentials Hierarchy;
extern int eventCounter;
//---------------------------------------------------------------------------
__fastcall TAuth::TAuth(TComponent* Owner)
    : TForm(Owner)
{
//Credentials Hierarchy;
}
//---------------------------------------------------------------------------

void __fastcall TAuth::Button2Click(TObject *Sender)
{
    Edit1->Text = "Ingrese su usuario";
    Edit2->Clear();
    Auth->Close();
}
//---------------------------------------------------------------------------
void __fastcall TAuth::Button1Click(TObject *Sender)
{
//char user[10], password[10];
    Table1->EditKey();
    Table1->FieldByName("USERS")->AsString = Edit1->Text;
    Table1->GotoKey();
    if(Edit2->Text == Table1->FieldByName("PASSWORDS")->AsString && Edit1->Text == Table1->FieldByName("USERS") ->AsString)
    {
        Hierarchy.hierarchy = Table1->FieldByName("HIERARCHY")->AsInteger;

        switch (Hierarchy.hierarchy)
        {
        case 1:
            Hierarchy.Default();
            Hierarchy.Administrator();
            //ShowMessage("Admin");
            break;
        case 2:
            Hierarchy.Supervisor();
            //ShowMessage("Supervisor");
            break;
        case 3:
            Hierarchy.Worker();
            //ShowMessage("Operario");
            break;
        default:
            Hierarchy.Default();
            //ShowMessage("Default");
            break;
        }
        Application->MessageBoxA("Bienvenido", "Ingreso correcto", MB_OK);
        Auth->Close();

    }
    else
    {
        Edit1->Text = "Ingrese su usuario";
        Edit2->Clear();
        //ShowMessage("Credenciales incorrectas");
        Application->MessageBoxA("Credenciales incorrectas\n vuelva a ingresar","Error de ingreso", MB_OK | MB_ICONERROR);

    }
}
//---------------------------------------------------------------------------

Credentials::Credentials()
{
}

void Credentials::Default(void)
{
    Principal->Recetas1->Enabled = false;
    Principal->Gestin1->Enabled = false;
    Principal->Users2->Enabled = false;
    Principal->Desarrollador1->Enabled = false;
    Principal->Salirsesin1->Enabled = false;
    Principal->Login1->Enabled = true;

}
void Credentials::Worker(void)
{
    Principal->Login1->Enabled = false;
    Principal->Salirsesin1->Enabled = true;

    Principal->Recetas1->Enabled = false;
    Principal->Elegir1->Enabled = false;
    Principal->Modificar1->Enabled = false;
    Principal->Eliminar1->Enabled = false;


    Principal->Gestin1->Enabled = true;
    Principal->Historicos1->Enabled = false;
    Principal->Alarmas1->Enabled = true;
    Principal->Atender1->Enabled = true;
    Principal->Veratendidas1->Enabled = false;
    Principal->C1->Enabled = true;
    Principal->Consultas1->Enabled= false;

    Principal->Users2->Enabled = false;
    Principal->Desarrollador1->Enabled = false;


    Principal->Label5->Caption = Auth->Table1->FieldByName("USERS")->AsString;
    Principal->Label2->Caption = Auth->Table1->FieldByName("NAME")->AsString + " " + Auth->Table1->FieldByName("SURENAME")->AsString;
    Principal->Label4->Caption = "Operario";

    Principal->Table2->Append(); // tabla de eventos
    Principal->Table2->FieldByName("Nro_Evento")->AsString = eventCounter++;
    Principal->Table2->FieldByName("Fecha")->AsString = DateToStr(Date());
    Principal->Table2->FieldByName("Hora")->AsString = TimeToStr(Time());
    Principal->Table2->FieldByName("Descripcion")->AsString = "El operario " + Auth->Table1->FieldByName("NAME")->AsString + " " + Auth->Table1->FieldByName("SURENAME")->AsString + " " + "se ha loggeado" ;
    Principal->Table2->Post();

}

void Credentials::Supervisor(void)
{
    Principal->Login1->Enabled = false;
    Principal->Salirsesin1->Enabled = true;

    Principal->Recetas1->Enabled = true;
    Principal->Elegir1->Enabled = true;
    Principal->Modificar1->Enabled = true;
    Principal->Eliminar1->Enabled = false;


    Principal->Gestin1->Enabled = true;
    Principal->Historicos1->Enabled = true;
    Principal->Alarmas1->Enabled = true;
    Principal->Atender1->Enabled = true;
    Principal->Veratendidas1->Enabled = true;
    Principal->C1->Enabled = true;
    Principal->Consultas1->Enabled= false;

    Principal->Users2->Enabled = false;
    Principal->Desarrollador1->Enabled = false;

    Principal->Label5->Caption = Auth->Table1->FieldByName("USERS")->AsString;
    Principal->Label2->Caption = Auth->Table1->FieldByName("NAME")->AsString + " " + Auth->Table1->FieldByName("SURENAME")->AsString;
    Principal->Label4->Caption = "Supervisor";

    Principal->Table2->Append(); // tabla de eventos
    Principal->Table2->FieldByName("Nro_Evento")->AsString = eventCounter++;
    Principal->Table2->FieldByName("Fecha")->AsString = DateToStr(Date());
    Principal->Table2->FieldByName("Hora")->AsString = TimeToStr(Time());
    Principal->Table2->FieldByName("Descripcion")->AsString = "El supervisor " + Auth->Table1->FieldByName("NAME")->AsString + " " + Auth->Table1->FieldByName("SURENAME")->AsString + " " + "se ha loggeado" ;
    Principal->Table2->Post();

}

void Credentials::Administrator(void)
{
    Principal->Login1->Enabled = false;
    Principal->Salirsesin1->Enabled = true;

    Principal->Recetas1->Enabled = true;
    Principal->Elegir1->Enabled = true;
    Principal->Modificar1->Enabled = true;
    Principal->Eliminar1->Enabled = true;


    Principal->Gestin1->Enabled = true;
    Principal->Historicos1->Enabled = true;
    Principal->Alarmas1->Enabled = true;
    Principal->Atender1->Enabled = true;
    Principal->Veratendidas1->Enabled = true;
    Principal->C1->Enabled = true;
    Principal->Consultas1->Enabled= true;

    Principal->Users2->Enabled = true;
    Principal->Desarrollador1->Enabled = true;

    Principal->Label5->Caption = Auth->Table1->FieldByName("USERS")->AsString;
    Principal->Label2->Caption = Auth->Table1->FieldByName("NAME")->AsString + " " + Auth->Table1->FieldByName("SURENAME")->AsString;
    Principal->Label4->Caption = "Administrador";

    Principal->Table2->Append(); // tabla de eventos
    Principal->Table2->FieldByName("Nro_Evento")->AsString = eventCounter++;
    Principal->Table2->FieldByName("Fecha")->AsString = DateToStr(Date());
    Principal->Table2->FieldByName("Hora")->AsString = TimeToStr(Time());
    Principal->Table2->FieldByName("Descripcion")->AsString = "El administrador " + Auth->Table1->FieldByName("NAME")->AsString + " " + Auth->Table1->FieldByName("SURENAME")->AsString + " " + "se ha loggeado" ;
    Principal->Table2->Post();
}



void __fastcall TAuth::Panel1Click(TObject *Sender)
{
    Beep();
}
//---------------------------------------------------------------------------

