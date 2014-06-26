
/* 
* File:   main.cpp
* Author: David Snow
*
* Created on June 25, 2014, 1:18 PM
*/
//system libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
   //Variables
   int quar, dime, nick; //quar are the quarters,nick are the nickels
   int sum; // sum is the monetary value for the total amount in cents
   cout << "Enter a number of quarters:";
   cin >> quar;
   cout << "Enter the number of dimes:";
   cin >> dime;
   cout << "Enter the number of nickels";
   cin >> nick;
   sum = quar * 25 + dime * 10 + nick * 5;
   cout << "You have " << sum << " total monetary value in cents";
   return 0;
}