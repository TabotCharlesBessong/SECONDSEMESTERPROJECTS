//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "messageRegistrationUser.h"
#include "mainPanel.h"
#include "RegistrationPanel.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TuserMessage *userMessage;
//---------------------------------------------------------------------------
__fastcall TuserMessage::TuserMessage(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TuserMessage::returnHomeClick(TObject *Sender)
{
   MainForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TuserMessage::ContinueClick(TObject *Sender)
{
   RegistrationForm->Show();
}
//---------------------------------------------------------------------------
