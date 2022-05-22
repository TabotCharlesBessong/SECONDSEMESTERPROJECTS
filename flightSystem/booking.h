//---------------------------------------------------------------------------

#ifndef bookingH
#define bookingH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *flightInfo;
	TLabel *firstName;
	TEdit *fNameEdit;
	TEdit *surNameEdit;
	TEdit *emailEdit;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TLabel *surName;
	TLabel *Email;
	TLabel *passport;
	TLabel *visa;
	TLabel *classes;
	TLabel *Label6;
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
