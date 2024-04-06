//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#pragma hdrstop

#include "LoginForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TMyLoginForm *MyLoginForm;
//---------------------------------------------------------------------------
__fastcall TMyLoginForm::TMyLoginForm(TComponent* Owner)
	: TForm(Owner)
{
}
std::vector<std::string> parseCommaDelimitedString(std::string line){
	 std::vector<std::string> result;
	 std::stringstream s_stream(line);

   while(s_stream.good()){
		 std::string substr;
		 getline(s_stream, substr, ',');
		 result.push_back(substr);
   }
   return result;
}
  const char* converToCharPtr (AnsiString ansiStr){   // DRY(don't repeat yourself) don't repeat code that you have already written.
	   return ansiStr.c_str();      // It will convert AnsiString to const char
  }
//---------------------------------------------------------------------------
void __fastcall TMyLoginForm::LoginButtonClick(TObject *Sender)
{
	fstream myFile;
	myFile.open("RegisteredUsers.txt",ios::in);

	if(myFile.is_open()){
	   std::string line;

	while(getline(myFile, line)){
		std::vector<std::string> parsedLine = parseCommaDelimitedString(line);
		const char* username = parsedLine.at(2).c_str();

		//AnsiString editUsername = UsernameEdit->Text;
	   //	const char* usernameString = editUsername.c_str();

	if(std::strcmp(username,converToCharPtr(UsernameEdit->Text))==0){
	   const char* password = parsedLine.at(3).c_str();

	//AnsiString editPassword = PasswordEdit->Text;
	//const char* passwordString = editPassword.c_str();

	if(std::strcmp(password,converToCharPtr(PasswordEdit->Text)) == 0)
	  messageLabel -> Text = "Success!";
	else
	  messageLabel -> Text = "Wrong password!";
	}
	}
	}
}
//---------------------------------------------------------------------------


