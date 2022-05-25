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
class TRegistrationForm : public TForm
{
__published:	// IDE-managed Components
	TButton *Return_btn;
	TEdit *Fname;
	TComboBox *sex;
	TButton *CAccount;
	TEdit *phone_no;
	TLabel *Label7;
	TEdit *Cpwd;
	TEdit *pwd;
	TEdit *email;
	TLabel *Label6;
	TLabel *Label5;
	TLabel *Label4;
	TLabel *Label3;
	TLabel *Label2;
	TLabel *Label1;
	void __fastcall Return_btnClick(TObject *Sender);
	void __fastcall CAccountClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TRegistrationForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRegistrationForm *RegistrationForm;
//---------------------------------------------------------------------------
#endif
