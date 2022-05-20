//---------------------------------------------------------------------------

#ifndef loginH
#define loginH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TloginForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *nameLogin;
	TLabel *nameLabel;
	TEdit *paswordLogin;
	TLabel *passwordLabel;
	TButton *loginButton;
private:	// User declarations
public:		// User declarations
	__fastcall TloginForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TloginForm *loginForm;
//---------------------------------------------------------------------------
#endif
