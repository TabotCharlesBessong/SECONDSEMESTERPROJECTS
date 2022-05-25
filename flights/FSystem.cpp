//---------------------------------------------------------------------------

#include <fmx.h>
#ifdef _WIN32
#include <tchar.h>
#endif
#pragma hdrstop
#include <System.StartUpCopy.hpp>
//---------------------------------------------------------------------------
USEFORM("mainPage.cpp", MainForm);
USEFORM("RegistrationPanel.cpp", UserRegForm);
USEFORM("CongratulationPanel.cpp", CongratsForm);
USEFORM("MessageRegistrationUser.cpp", MsgForm);
USEFORM("LoginAdminPanel.cpp", LoginAdminForm);
USEFORM("AdminRegistrationPanel.cpp", AdminRegForm);
USEFORM("LoginUserPanel.cpp", LoginUserForm);
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TMainForm), &MainForm);
		Application->CreateForm(__classid(TUserRegForm), &UserRegForm);
		Application->CreateForm(__classid(TCongratsForm), &CongratsForm);
		Application->CreateForm(__classid(TMsgForm), &MsgForm);
		Application->CreateForm(__classid(TLoginAdminForm), &LoginAdminForm);
		Application->CreateForm(__classid(TAdminRegForm), &AdminRegForm);
		Application->CreateForm(__classid(TLoginUserForm), &LoginUserForm);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
