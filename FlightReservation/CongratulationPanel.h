//---------------------------------------------------------------------------

#ifndef CongratulationPanelH
#define CongratulationPanelH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TCongratulationRegister : public TForm
{
__published:	// IDE-managed Components
	TButton *returnRegister;
	TButton *ContinueRegis;
	TText *Text1;
	void __fastcall returnRegisterClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TCongratulationRegister(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCongratulationRegister *CongratulationRegister;
//---------------------------------------------------------------------------
#endif
