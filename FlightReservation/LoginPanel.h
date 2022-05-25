//---------------------------------------------------------------------------

#ifndef LoginPanelH
#define LoginPanelH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TLoginForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *Setpwd;
	TLabel *Label3;
	TButton *Submit;
	TEdit *Uname;
	TLabel *Label2;
	TLabel *Label1;
	TButton *R_main;
	TButton *Caccount;
	void __fastcall CaccountClick(TObject *Sender);
	void __fastcall R_MainClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TLoginForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TLoginForm *LoginForm;
//---------------------------------------------------------------------------
#endif
