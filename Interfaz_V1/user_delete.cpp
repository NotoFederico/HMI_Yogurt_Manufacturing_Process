//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "user_delete.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TUserDelete *UserDelete;
//---------------------------------------------------------------------------
__fastcall TUserDelete::TUserDelete(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TUserDelete::Button2Click(TObject *Sender)
{
    UserDelete->Close();
}
//---------------------------------------------------------------------------

void __fastcall TUserDelete::Button1Click(TObject *Sender)
{
    UserDelete->Query1->Close();
    UserDelete->Query1->SQL->Clear();
    UserDelete->Query1->SQL->Add("delete from Users.db");
    UserDelete->Query1->SQL->Add("where USERS = '"+ComboBox1->Text+"'");
    UserDelete->Query1->ExecSQL();

    UserDelete->Query1->Close();
    UserDelete->Query1->SQL->Clear();
    UserDelete->Query1->SQL->Add("select * from Users.db order by USERS asc");
    UserDelete->Query1->Open();


    UserDelete->Query1->Prior();
    ComboBox1->Clear();
    for(int i=0; i<UserDelete->Query1->RecordCount; i++)
    {
        ComboBox1->Items->Add(UserDelete->Query1->FieldByName("USERS")->AsString);
        UserDelete->Query1->Next();
    }


    UserDelete->ComboBox1->Text = "Seleccione Usuario";
}
//---------------------------------------------------------------------------

