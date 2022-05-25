//---------------------------------------------------------------------------

#ifndef LoginUserPanelH
#define LoginUserPanelH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TLoginUserForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *LoginForm;
	TButton *Caccount;
	TButton *returnMain;
	TLabel *Label1;
	TLabel *Label2;
	TButton *Submit;
	TLabel *Label3;
	TEdit *Setpwd;
private:	// User declarations
public:		// User declarations
	__fastcall TLoginUserForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TLoginUserForm *LoginUserForm;
//---------------------------------------------------------------------------
#endif