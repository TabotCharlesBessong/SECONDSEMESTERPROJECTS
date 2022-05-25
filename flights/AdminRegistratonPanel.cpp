//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "AdminRegistratonPanel.h"
#include "CongratulationPanel.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TAdminRegForm *AdminRegForm;
//---------------------------------------------------------------------------
__fastcall TAdminRegForm::TAdminRegForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAdminRegForm::CAccountClick(TObject *Sender)
{
	CongratsForm->Show();
	AdminRegForm->Hide();
}
//---------------------------------------------------------------------------
