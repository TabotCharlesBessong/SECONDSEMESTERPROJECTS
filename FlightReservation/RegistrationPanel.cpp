//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop
#include<fstream>

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
void __fastcall TRegistrationForm::CAccountClick(TObject *Sender)
{
	fstream myFile;
	myFile.open("registeredUser.txt", ios::app);
	if(myFile.is_open()){
		AnsiString Full_Name = Fname->Text;
		AnsiString Email = email->Text;
		AnsiString Password = pwd->Text;
		AnsiString Confirm_Password = Cpwd->Text;
//		ansiString Gender = sex->Text;
		AnsiString Phone_Number = phone_no->Text;
		myFile<<Full_Name<<","<<Email<<","<<Password<<","<<Confirm_Password<<","<<Phone_Number <<"\n";
		myFile.close();
		this->Close();
	}
}
//---------------------------------------------------------------------------
