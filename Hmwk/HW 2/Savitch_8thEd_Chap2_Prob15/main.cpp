/* 
* File:   main.cpp
* Author: David Snow
* Created on June 30, 2014, 11:55 AM
*/

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    // variables
    float vel; //velocity
    short sTemp, eTemp, cTemp;//starting temp, Ending temp, Changing temp
    //input starting and ending temp
    cout << "Enter your starting and ending Temperature in Celsius: ";
    cin >> sTemp;
    cin >> eTemp;
    //calculations
    cTemp = sTemp;

    while (cTemp < eTemp){
        vel = 331.3 + .61 * cTemp;
        cout << "At " << cTemp << " degrees Celsius, the velocity is " << vel << endl;
        cTemp += 1;
    } 
        vel = 331.3 + .61 * cTemp;
        cout << "At " << eTemp << " degrees Celsius, the velocity is " << vel;
    return 0;
}

