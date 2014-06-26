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

//Function Prototypes

//Global Constants

//Execution Begins Here
int main(int argc, char** argv) {
   //variables
   int sec; //sec is the time in seconds
   int accel; //accel is acceleration at 32 feet per second
   int dis; // dis is distance
   accel = 32;
   cout << "Enter a time in seconds:";
   cin >> sec;
   dis = (accel * sec * sec) / 2;
   cout << "The object traveled " << dis << " feet.";
   return 0;
}