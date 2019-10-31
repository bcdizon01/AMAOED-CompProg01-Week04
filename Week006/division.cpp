/* ****************************************************************
* @author: Bryan Jesus Dizon
 * @app name: division
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
#include <limits>

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

float floatDividend, floatDivisor, max, min;
max = std::numeric_limits<float>::max();
min = std::numeric_limits<float>::lowest();

cout << "Please ener your dividend: ";
cin >> floatDividend;

cout << "Please enter your divisor: ";
cin >> floatDivisor;

if (floatDivisor == 0) {
    cout << "Divisor should not be a zero." << endl;
    }else if (floatDividend > max || floatDivisor > max){
        cout << "Input value should not be greater than max allowed value" << endl;
    }else if  (floatDividend < min || floatDivisor < min) {
        cout << "Input value should not be lower that min allowed value" << endl;
    }else {
        cout << floatDividend/ floatDivisor << endl;
    }
 return EXIT_SUCCESS;

}
