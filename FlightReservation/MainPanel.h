//---------------------------------------------------------------------------

#ifndef MainPanelH
#define MainPanelH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Objects.hpp>
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
	TButton *passenger_login_btn;
	TButton *admin_login_btn;
	TLabel *x;
<<<<<<< HEAD
	TImage *Image1;
	TImage *Image2;
=======
	TImageControl *passenger_img;
	TImageControl *ImageControl1;
>>>>>>> 05f84b8990b347aefb7e5d62283a1c486f59b836
	void __fastcall admin_login_btnClick(TObject *Sender);
	void __fastcall passenger_login_btnClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
