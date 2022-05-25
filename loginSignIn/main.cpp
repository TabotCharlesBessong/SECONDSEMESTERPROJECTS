//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "main.h"
#include "login.h"
#include "signup.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::loginClick(TObject *Sender)
{
	  loginForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::signupClick(TObject *Sender)
{
	   SignUpForm->Show();
}
//---------------------------------------------------------------------------
