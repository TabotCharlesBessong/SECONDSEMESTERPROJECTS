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
	TEdit *LoginForm;
	TButton *Caccount;
	TButton *returnMain;
	TLabel *Label1;
	TLabel *Label2;
	TButton *Submit;
	TLabel *Label3;
	TEdit *Setpwd;
	void __fastcall returnMainClick(TObject *Sender);
	void __fastcall CaccountClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TLoginForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TLoginForm *LoginForm;
//---------------------------------------------------------------------------
#endif
