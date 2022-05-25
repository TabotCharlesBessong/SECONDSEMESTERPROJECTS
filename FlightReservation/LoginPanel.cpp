//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "LoginPanel.h"
#include "MainPanel.h"
#include "RegistrationPanel.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TLoginForm *LoginForm;
//---------------------------------------------------------------------------
__fastcall TLoginForm::TLoginForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TLoginForm::returnMainClick(TObject *Sender)
{
	MainForm->Show();
	this->Close();
}
//---------------------------------------------------------------------------
void __fastcall TLoginForm::CaccountClick(TObject *Sender)
{
	RegistrationForm->Show();
	this->Close();
}
//---------------------------------------------------------------------------