//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "LoginAdminPanel.h"
#include "mainPage.h"
#include "AdminRegistrationPanel.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TLoginAdminForm *LoginAdminForm;
//---------------------------------------------------------------------------
__fastcall TLoginAdminForm::TLoginAdminForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TLoginAdminForm::returnMainClick(TObject *Sender)
{
	this->Close();
	MainForm->Show();
}
//---------------------------------------------------------------------------


void __fastcall TLoginAdminForm::CaccountClick(TObject *Sender)
{
	AdminRegForm->Show();
	this->Close();
}
//---------------------------------------------------------------------------

