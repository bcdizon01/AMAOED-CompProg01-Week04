/* ****************************************************************
 * @author: Bryan Jesus C. Dizon
 * @app name: while
 * @app desc: CS201 - Week007
 * @history:
 *  - <2019/11/18> |
 *      -- <description>
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
    
    int intHeight, intWidth, intLine;
        cout << "Please enter height: ";
        cin >> intHeight;
        intWidth = 0;
        while(intHeight > 0) {
            intLine = intWidth;
            while(intLine >= 0) {
                cout << "*";
                intLine--;
            }
            cout << endl;
            intHeight--;
            intWidth += 2;
        }

        return 0;
        
    return EXIT_SUCCESS;
}
