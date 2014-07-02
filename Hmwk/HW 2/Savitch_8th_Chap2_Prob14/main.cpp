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
   //variables
   string inName, yName, Food, Adj, Color, Animal; //inName is instructor name
   //yName is your name, adj is adjective
   short temp;//temp is temperature
   cout << "Enter your instructor first or last name: " <<endl;
   cin >> inName;
   cout << "Enter your first name: " << endl;
   cin >> yName;
   cout << "Enter any food item: " << endl;
   cin >> Food;
   cout << "Enter an adjective: " <<endl;
   cin >> Adj;
   cout << "Enter a color: " << endl;
   cin >> Color;
   cout << "Enter an animal: " << endl;
   cin >> Animal;
   cout << "Dear Instructor " << inName << endl;
   cout << " " << endl;
   cout << "I am sorry that I am unable to turn in my homework at this time.";
   cout << " First, \nI ate a rotten " << Food << ", which made me turn ";
   cout << Color << "and extremely ill. I \ncame down with a fever of " <<temp;
   cout << ". Next, my " << Adj << " pet \n" << Animal << " must have smelled";
   cout << " the remains of the " << Food << " on my homework, \nbecause he";
   cout << " ate it. I am currently rewriting my homework and hope you \nwill";
   cout << " accept it late." << endl;
   cout << " " <<endl;
   cout << "Sincerely," <<endl;
   cout << yName;
   return 0;
}
