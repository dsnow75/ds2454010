/* 
* File:   main.cpp
* Author: David Snow
*
* Created on June 26, 2014, 1:31 PM
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
  int rMax; //maximum room capacity
  int pAtt; //people who attended the meeting
  int pEx;  //people who need to be excluded for meeting
  int pIn;  //people who can be included to hold meeting
  //calculations
  cout << "Enter the Maximum Room Capacity: ";
  cin >> rMax;
  cout << "Input the number of people who arrived at the meeting:";
  cin >> pAtt;
  if (pAtt > rMax){
      pEx = pAtt - rMax;
      cout << "too many people you need to exclude " << pEx;
  }
  else{
   pIn = rMax - pAtt;
   cout << "You are within the limits, " << pIn << " more people can enter.";
  }

  return 0;
}