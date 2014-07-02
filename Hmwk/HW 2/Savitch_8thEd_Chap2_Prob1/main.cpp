/* 
* File:   main.cpp
* Author: David Snow
*
* Created on June 30, 2014, 9:02 PM
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
   float metton; // metton is metric tons
   float wCer; //wCer is Weight of cereal in ounces
   float Conv; //Conv is the weight being converted to metric tons
   float nBox; //number of boxes to get to 1 metric ton
   metton = 35273.92; //metric ton is ounces
   cout << "Input the weight of the cereal in ounces: \n";
   cin >> wCer;
   Conv = wCer/metton;
   nBox = metton/wCer;
   cout << "You have " << Conv << " Metric Tons.\n";
   cout << "You need " << nBox << " boxes to have one metric ton.";
   return 0;
}
