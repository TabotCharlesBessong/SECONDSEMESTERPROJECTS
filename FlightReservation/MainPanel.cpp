//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "MainPanel.h"
#include "LoginPanel.h"
#include "adminLoginPanel.h"
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
void __fastcall TMainForm::admin_login_btnClick(TObject *Sender)
{
	loginAdmin->Show();
	MainForm->Hide();
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::passenger_login_btnClick(TObject *Sender)
{
	LoginForm->Show();
	MainForm->Hide();
}
//---------------------------------------------------------------------------


