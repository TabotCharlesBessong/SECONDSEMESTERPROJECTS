//---------------------------------------------------------------------------

#ifndef MessageRegistrationUserH
#define MessageRegistrationUserH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TMsgForm : public TForm
{
__published:	// IDE-managed Components
	TText *Text1;
	TButton *returnHome;
	TButton *Continue;
private:	// User declarations
public:		// User declarations
	__fastcall TMsgForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMsgForm *MsgForm;
//---------------------------------------------------------------------------
#endif
