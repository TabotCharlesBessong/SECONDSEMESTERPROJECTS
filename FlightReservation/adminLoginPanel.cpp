//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "adminLoginPanel.h"
#include "mainPanel.h"
#include "adminRegistrationPanel.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TloginAdmin *loginAdmin;
//---------------------------------------------------------------------------
__fastcall TloginAdmin::TloginAdmin(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TloginAdmin::returnMainClick(TObject *Sender)
{
  MainForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TloginAdmin::CaccountClick(TObject *Sender)
{
   registerAdmin->Show();
}
//---------------------------------------------------------------------------
