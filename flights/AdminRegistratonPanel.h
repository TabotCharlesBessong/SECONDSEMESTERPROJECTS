//---------------------------------------------------------------------------

#ifndef AdminRegistratonPanelH
#define AdminRegistratonPanelH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TAdminRegForm : public TForm
{
__published:	// IDE-managed Components
	TButton *Return_btn;
	TEdit *FnameA;
	TComboBox *sex;
	TButton *CAccount;
	TEdit *CpwdA;
	TEdit *pwdA;
	TEdit *emailA;
	TLabel *Label6;
	TLabel *Label5;
	TLabel *Label4;
	TLabel *Label3;
	TLabel *Label2;
	TLabel *Label1;
	void __fastcall CAccountClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAdminRegForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAdminRegForm *AdminRegForm;
//---------------------------------------------------------------------------
#endif
