/* ****************************************************************
 * @author: Bryan Jesus C. Dizon
 * @app name: dowhile
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
    do {
        intLine = intWidth;
        do
        {
            if (intLine > 0) {
                cout << " ";
            }
            intLine--;
        } while (intLine > 0);

        intLine = (intHeight *2) - 1;
        do 
        {
            if (intLine % 2 == 0) {
                cout << " ";
            } else {
                cout << "*";
            }
            intLine--;
        } while (intLine > 0);
        cout << endl;
        intWidth++;
        intHeight--;
     } while (intHeight > 0);

return 0;

    return EXIT_SUCCESS;
}
