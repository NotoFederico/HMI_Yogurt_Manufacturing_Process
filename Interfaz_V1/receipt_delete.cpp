//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "receipt_delete.h"
#include "receipt_add.h"
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TReceiptDelete *ReceiptDelete;
//---------------------------------------------------------------------------
__fastcall TReceiptDelete::TReceiptDelete(TComponent* Owner)
    : TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TReceiptDelete::Button2Click(TObject *Sender)
{
    ReceiptDelete->Close();
    //ModalResult = mrOk;
}
//---------------------------------------------------------------------------




void __fastcall TReceiptDelete::Button1Click(TObject *Sender)
{
//pregunto si de verdad quiero borrar

    if(Application->MessageBoxA("Est? seguro que quiere borrar la receta seleccionada?","Confirmaci?n de borrado",MB_YESNO)== IDYES)
    {
        //borro
        ReceiptAdd->Query1->Close();
        ReceiptAdd->Query1->SQL->Clear();
        ReceiptAdd->Query1->SQL->Add("delete from Recetas.db");
        ReceiptAdd->Query1->SQL->Add("where Nombre_Receta = '"+ComboBox1->Text+"'");
        ReceiptAdd->Query1->ExecSQL();

        ReceiptAdd->Query1->Close();
        ReceiptAdd->Query1->SQL->Clear();
        ReceiptAdd->Query1->SQL->Add("select * from Recetas.db order by Nombre_Receta asc");
        ReceiptAdd->Query1->Open();

        //actualizo
        ReceiptAdd->Query1->Prior(); // ir al primer registro
        ComboBox1->Clear();
        for(int i=0; i<ReceiptAdd->Query1->RecordCount; i++)
        {
            ComboBox1->Items->Add(ReceiptAdd->Query1->FieldByName("Nombre_Receta")->AsString);
            ReceiptAdd->Query1->Next();
        }
    }

    ComboBox1->Text = "Seleccione Receta";
}
//---------------------------------------------------------------------------


