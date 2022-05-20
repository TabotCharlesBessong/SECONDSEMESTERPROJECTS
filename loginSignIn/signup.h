//---------------------------------------------------------------------------

#ifndef signupH
#define signupH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TSignUpForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *nameEdit;
	TLabel *UserName;
	TEdit *ageEdit;
	TLabel *Age;
	TEdit *passwordEdit;
	TLabel *password1;
	TEdit *password2Edit;
	TLabel *password2;
	TButton *SignUp;
private:	// User declarations
public:		// User declarations
	__fastcall TSignUpForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TSignUpForm *SignUpForm;
//---------------------------------------------------------------------------
#endif
