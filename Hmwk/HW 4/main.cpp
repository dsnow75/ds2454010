/* 
* File:   main.cpp
* Author: David Snow
* Created on June 30, 2014, 11:55 AM
*/
//System Libraries
#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    short num;
  //Display a Main Menu
    do{
        do{
            cout << "Choose your problem you want to look at" << endl;
            cout << "1 for Problem 1" << endl;
            cout << "2 for Problem 2" << endl;
            cout << "3 for Problem 3" << endl;
            cout << "4 for Problem 4" << endl;
            cout << "5 for Problem 6" << endl;
            cout << "6 for Problem 17" << endl;
            cout << "7 for Problem 10" << endl;
            cout << "8 for Problem 12" << endl;
            cout << "9 for Problem 15" << endl;
            cout << "10 for Problem 16" << endl;
            cin >> num;
            cin.ignore();
        }while( num < 0 || num > 10);
      //Problems for homework
        switch(num){
            case 1:
                cout << "Problem 1" << endl;
                //problem variables
                
                break;
            case 2:
                cout << "Problem 2" << endl;
                //variables

                break;
            case 3:
                cout << "Problem 3" << endl;
                //variables

                break;
            case 4:
                cout << "Problem 4" << endl;
                //variables

                break;
            case 5:
                cout << "Problem 6" << endl;
                //variables

                break;
            case 6:
                cout << "Problem 17" << endl;
                //variables

                break;
            case 7:
                cout << "This is problem 10" << endl;
                //variables

                break;
            case 8:
                cout << "This is problem 12" << endl;
                //variables

                break;
            case 9:
                cout << "This is problem 15" << endl;
                //variables

                 
                break;
            case 10:
                cout << "This is problem 16" << endl;
                //variables

                break;
        }
    }while(num);
  //End of program
    return 0;
}