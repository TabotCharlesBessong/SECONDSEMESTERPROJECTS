//---------------------------------------------------------------------------

#ifndef adminLoginPanelH
#define adminLoginPanelH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TloginAdmin : public TForm
{
__published:	// IDE-managed Components
	TEdit *nameLoginA;
	TButton *Caccount;
	TButton *returnMain;
	TLabel *Label1;
	TLabel *Label2;
	TButton *adminLog;
	TLabel *Label3;
	TEdit *passwordLoginA;
	void __fastcall returnMainClick(TObject *Sender);
	void __fastcall CaccountClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TloginAdmin(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TloginAdmin *loginAdmin;
//---------------------------------------------------------------------------
#endif
