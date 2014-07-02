/* 
* File:   main.cpp
* Author: David Snow
*
* Created on June 30, 2014, 9:52 PM
*/

//system libraries
#include <iostream>
using namespace std;

//user libraries

//global constants

//function prototypes

//execution begins here
int main(int argc, char** argv) {
   //variables
   float pSal; //previous annual salary
   float nPay,nAnu, nMon; //new pay, new annual pay, new monthly pay
   const float pInc = .076f; //pay increase constant
   //calculations
   cout << "Enter your previous annual salary in dollars: ";
   cin >> pSal;
   nMon = pSal/12 * (1 + pInc);
   nAnu = pSal + (nMon*6);
   nPay = nAnu - pSal;
   cout << "Your new pay per year is " << nAnu;
   cout << "\nYour pay increase was " << nPay;
   cout << "\nYOur new monthly salary is " <<nMon << "Dollars per month";
   return 0;
}
