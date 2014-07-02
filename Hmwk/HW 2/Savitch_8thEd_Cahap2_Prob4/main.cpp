/* 
* File:   main.cpp
* Author: David Snow
*
* Created on June 26, 2014, 1:23 PM
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
   unsigned short rMon; //any number of months
   //calculations
   cout << "Enter your previous annual salary in dollars: ";
   cin >> pSal;
   cout << "Input the number of months you will recieve retrospective salary:";
   cin >> rMon;
   nMon = pSal/12 * (1 + pInc);
   nAnu = pSal + (nMon*rMon);
   nPay = nAnu - pSal;
   cout << "Your new pay per year is " << nAnu;
   cout << "\nYour pay increase was " << nPay;
   cout << "\nYOur new monthly salary is " <<nMon << " Dollars per month";
   return 0;
}