/* ****************************************************************
* @author: Bryan Jesus Dizon
 * @app name: switch
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
    cout << "Please enter an integer: ";
    cin >> (intOption);
    switch (intOption)
    {
        case 0:
        cout << "Hello World" << endl;
        break;
        case 1:
        cout << "I am Groot" << endl;
        break;
        case 2:
        cout << "To the Top" << endl;
        break;
        case 3:
        cout << "Where is the Horizion" << endl;
        break;
        case 4:
        cout << "I do not know" << endl;
        break;
        default:
        cout << "Yeah, I will" << endl;
        break;
    }

 return EXIT_SUCCESS;

}
