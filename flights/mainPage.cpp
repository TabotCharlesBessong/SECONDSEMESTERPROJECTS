//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "mainPage.h"
#include "LoginAdminPanel.h"
#include "LoginUserPanel.h"
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

void __fastcall TMainForm::Button2Click(TObject *Sender)
{
	LoginAdminForm->Show();
	MainForm->Hide();
}
//---------------------------------------------------------------------------


void __fastcall TMainForm::homeUBtnClick(TObject *Sender)
{
	LoginUserForm->Show();
	MainForm->Hide();
}
//---------------------------------------------------------------------------

