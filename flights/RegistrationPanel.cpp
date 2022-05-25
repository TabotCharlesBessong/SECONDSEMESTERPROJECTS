//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "RegistrationPanel.h"
#include "CongratulationPanel.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TUserRegForm *UserRegForm;
//---------------------------------------------------------------------------
__fastcall TUserRegForm::TUserRegForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TUserRegForm::CAccountClick(TObject *Sender)
{
	CongratsForm->Show();
	this->Close();
}
//---------------------------------------------------------------------------

