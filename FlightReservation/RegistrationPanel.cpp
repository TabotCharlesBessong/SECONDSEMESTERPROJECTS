//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "RegistrationPanel.h"
#include "LoginPanel.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TRegistrationForm *RegistrationForm;
//---------------------------------------------------------------------------
__fastcall TRegistrationForm::TRegistrationForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TRegistrationForm::Return_btnClick(TObject *Sender)
{
	LoginForm->Show();
    RegistrationForm->Hide();
}
//---------------------------------------------------------------------------
