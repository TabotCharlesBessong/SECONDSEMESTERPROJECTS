//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "AdminRegistrationPanel.h"
#include "LoginAdminPanel.h"
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
void __fastcall TAdminRegForm::Return_btnClick(TObject *Sender)
{
	LoginAdminForm->Show();
	this->Close();
}
//---------------------------------------------------------------------------
