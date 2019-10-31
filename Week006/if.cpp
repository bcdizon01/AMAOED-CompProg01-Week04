/* ****************************************************************
* @author: Bryan Jesus Dizon
 * @app name: if
 * @app desc: CS201 - Week005
 * @history:
 *  - <2019/10/29> |
 *      -- created app
 *      -- <description>
 *      -- <description>
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include <iostream>

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

int intOption;
cout << "Please enter a number: ";
cin >> (intOption);
if (intOption == 1) {
    cout << "Hello World" << endl;
}
else if (intOption == 1) {
    cout << "I am Groot" << endl;
}
else if (intOption == 2) {
    cout << " To the Top" << endl;
}
else if (intOption == 3) {
    cout << "Where is the Horizon" << endl;
}
else if (intOption == 4) {
    cout << " I do not know" << endl;
}
else {
    cout << "Yeah, I will." << endl;
}

 return EXIT_SUCCESS;

}
