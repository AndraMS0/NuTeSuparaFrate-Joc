//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Intrebare.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
 ModalResult=mrOk;
 Form1->Caption="Server";
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{
ModalResult=mrYes;
Form1->Caption="Client";
}
//---------------------------------------------------------------------------
