/* ****************************************************************
* @author: Bryan Jesus Dizon
 * @app name: username
 * @app desc: CS201 - Week005
 * @history:
 *  - <2019/10/28> |
 *      -- created app
 *      -- <description>
 *      -- <description>
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include <iostream>
#include <string>

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************

string strName, strPassword, strAddress;
cout << "Enter your name: ";
getline(cin, strName);
cout << "Enter your password: ";
getline(cin, strPassword);
cout << "Enter your address: ";
getline(cin, strAddress);
cout << "Hi, I am " << strName << ". I live at " << strAddress << ".\n";

 return EXIT_SUCCESS;

}
