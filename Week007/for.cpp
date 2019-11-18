/* ****************************************************************
 * @author: Bryan Jesus C. Dizon
 * @app name: 
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
    
int intHeight;
  cout << "Please enter height: ";
  cin >> intHeight;

  for(int i = 0, j = 0; i < intHeight; i++,j+=2)
  {
    for(int k = 0; k < (intHeight * 2) - j - 2; k++)
    {
      cout << " ";
    }
    for(int k = 0; k <= j; k++)
    {
      cout << "*";
    }
    cout << endl;
  }

  return 0;

    return EXIT_SUCCESS;
}
