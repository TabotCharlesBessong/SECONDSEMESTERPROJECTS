//---------------------------------------------------------------------------

#ifndef RegistrationPanelH
#define RegistrationPanelH
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
class TUserRegForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *Cpwd;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TEdit *email;
	TEdit *pwd;
	TLabel *Label7;
	TEdit *phone_no;
	TButton *CAccount;
	TComboBox *sex;
	TEdit *Fname;
	TButton *Return_btn;
	void __fastcall CAccountClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TUserRegForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TUserRegForm *UserRegForm;
//---------------------------------------------------------------------------
#endif
