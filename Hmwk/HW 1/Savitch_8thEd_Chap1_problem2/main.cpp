/* 
* File:   main.cpp
* Author: David Snow
*
* Created on June 24, 2014, 1:09 PM
*/
//system libraries
#include <iostream>
using namespace std;

//user libraries

//global constants

//function properties

//execution begins here
int main(int argc, char** argv) {
   //variables
   int numbpod, peapod, total;//numbpod number of pods, peapod peas per pod
   //total number of peas * pod
   //before input
   cout << "Hello\n";
   cout << "Press return after entering a number. \n";
   cout << "Enter the number of pods: \n";
   //input
   cin >> numbpod;
   //strings for input of peas in pod
   cout << "Enter the number of peas in the pod: \n";
   //number of peas in the pod
   cin >> peapod;
   //calculate total
   total = numbpod * peapod;
   //strings
   cout << "If you have "; 
   cout << numbpod;
   cout << " pea pods\n";
   cout << "and ";
   cout << peapod;
   cout << " peas in each pod, then \n";
   cout << "you have ";
   cout << total;
   cout << " peas in all the pods.\n";\
   cout << "Good-bye";
   return 0;
}