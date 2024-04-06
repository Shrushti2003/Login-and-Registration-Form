//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "MainForm.h"
#include "LoginForm.h"
#include "RegistrationForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyMainForm *MyMainForm;
//---------------------------------------------------------------------------
__fastcall TMyMainForm::TMyMainForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMyMainForm::LoginNavigationButtonClick(TObject *Sender)
{
	 MyLoginForm -> Show();   //When the button is clicked, it calls the Show() method of the MyLoginForm object, which displays the login form to the user.
}
//---------------------------------------------------------------------------
//This function RegistrationNavigationButtonClick is an event handler for a button click event,
//likely associated with a button on the main form that navigates to the registration form.

void __fastcall TMyMainForm::RegistrationNavigationButtonClick(TObject *Sender)
{
	 MyRegistrationForm -> Show(); //displays the registration form to the user.
}
//---------------------------------------------------------------------------

