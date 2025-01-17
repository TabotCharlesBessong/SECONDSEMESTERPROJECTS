//---------------------------------------------------------------------------

#ifndef messageRegistrationUserH
#define messageRegistrationUserH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
//---------------------------------------------------------------------------
class TuserMessage : public TForm
{
__published:	// IDE-managed Components
	TText *Text1;
	TButton *returnHome;
	TButton *Continue;
	void __fastcall returnHomeClick(TObject *Sender);
	void __fastcall ContinueClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TuserMessage(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TuserMessage *userMessage;
//---------------------------------------------------------------------------
#endif
