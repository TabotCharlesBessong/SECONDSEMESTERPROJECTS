//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "CongratulationPanel.h"
#include "MainPanel.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TCongratulationRegister *CongratulationRegister;
//---------------------------------------------------------------------------
__fastcall TCongratulationRegister::TCongratulationRegister(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TCongratulationRegister::returnRegisterClick(TObject *Sender)
{
         MainForm->Show();
}
//---------------------------------------------------------------------------
