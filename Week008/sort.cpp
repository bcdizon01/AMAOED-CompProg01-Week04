/* ****************************************************************
 * @author: Bryan Jesus C. Dizon
 * @app name: 
 * @app desc: CS201 - Week008
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
    
int x[6], i, j, temp;
  cout << "Please enter 6 numbers to sort." << endl;

  for(i = 0; i < 6; i++)
  {
    cout << "Number[" << i + 1 << "]: ";
    cin >> x[i];
  }
  for(i = 0; i < 6; i++)
  {
    j = i + 1;
    while(j<6){
      while(x[i] > x[j]) {
        temp=x[i];
        x[i]=x[j];
        x[j]=temp;
        j++;
      }
      j++;
    }
  }
  cout << "Integers after sorted: " << x[0] << ", " << x[1] << ", " << x[2] << ", " << x[3] << ", " << x[4] << ", " << x[5] << endl;

    return EXIT_SUCCESS;
}
