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
class TCongratsForm : public TForm
{
__published:	// IDE-managed Components
	TButton *returnRegister;
	TButton *ContinueRegis;
	TText *Text1;
private:	// User declarations
public:		// User declarations
	__fastcall TCongratsForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCongratsForm *CongratsForm;
//---------------------------------------------------------------------------
#endif
