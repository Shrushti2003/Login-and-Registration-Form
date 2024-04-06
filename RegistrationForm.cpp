//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream>
#pragma hdrstop

#include "RegistrationForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyRegistrationForm *MyRegistrationForm;
//---------------------------------------------------------------------------
__fastcall TMyRegistrationForm::TMyRegistrationForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TMyRegistrationForm::SaveButtonClick(TObject *Sender)
{
	fstream myFile;   //declares an object of type fstream named myFile
	myFile.open("RegisteredUsers.txt",ios::app); // file is opened in append mode (ios::app), which means that new data will be added to the end of the file without overwriting existing content.
	if(myFile.is_open()){        // checks if the file was successfully opened. The is_open() function returns true if the file is open and false otherwise.
		 AnsiString name = NameEdit->Text;
		 AnsiString age = AgeEdit->Text;               //property of each edit control contains the user-entered text,
		 AnsiString username = UsernameEdit->Text;
		 AnsiString password = PasswordEdit->Text;

	myFile<<name<<","<<age<<","<<username<<","<<password<<"\n"; // writes the user data
		  myFile.close();  //closes the file stream myFile,
		  this->Close();  //ensuring that any buffered data is flushed to the file and that system resources associated with the file are released.
	}
}
//---------------------------------------------------------------------------


