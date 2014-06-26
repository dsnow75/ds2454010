/* 
 * File:   main.cpp
 * Author: David-Snow
 *
 * Created on June 24, 2014, 11:06 PM
 */
//system libraries
#include <iostream>
using namespace std;

//user libraries

//global constants

//function prototypes

//execution begin here
int main(int argc, char** argv) {
    //variables
   int x, y, sum, pro;
   //before input
   cout << "Hello\n";
   cout << "Press return after entering a number. \n";
   cout << "Enter a number: \n";
   //input
   cin >> x;
   //strings for input of peas in pod
   cout << "Enter another number \n";
   //number of peas in the pod
   cin >> y;
   //calculate sum and product
   sum = x + y;
   pro = x * y;
   //strings
   cout << "If you have "; 
   cout << x;
   cout << "and ";
   cout << y;
   cout << " then \n";
   cout << "you have ";
   cout << sum;
   cout << " for the sum and \n";
   cout << pro;
   cout << " for the product.\n";
   cout << "Good-bye";
   return 0;
}