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
            cout << "6 for Problem 9" << endl;
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
                unsigned int miles; //miles traveled
                float litGas; //liters of gas
                float mpg; //miles per galleon
                char redo; //rerun the program
                do{
                    //inputs
                cout << "Input the number of miles the car has been driven: ";
                cin >> miles;
                cout << "Input the liters of gas that the car consumed: ";
                cin >> litGas;
                //conversions
                mpg = miles/(litGas * .264179);
                cout << "Your car runs " << mpg << " miles per galleon.";
                cout << "Redo? Y/N ";
                cin >> redo;
                }while (redo == 'y' || redo == 'Y');
                break;
            case 2:
                cout << "Problem 2" << endl;
                //new variables and variables from problem 1
                int mile2; //miles for second car
                float litGas2; //litGas for second car
                float mpg2; //miles per galleon second car
                char redos; //retry variable
                do{
                  cout << "Input the number of miles the car has been driven: ";
                  cin >> miles;
                  cout << "Input the liters of gas that the car consumed: ";
                  cin >> litGas;
                  cout << "Input the number of miles the car has been driven: ";
                  cin >> mile2;
                  cout << "Input the liters of gas that the car consumed: ";
                  cin >> litGas2;
                  mpg = miles/(litGas * .264179);
                  mpg2 = mile2/(litGas2 * .264179);
                  cout << "Your car runs " << mpg << " miles per galleon." 
                                << endl;
                  cout << "The second car runs " << mpg2 << 
                                " miles per galleon." << endl;
                if (mpg > mpg2){
                    cout << "Car 1 is the most efficient.";
                }
                else if (mpg < mpg2){
                    cout << "Car 2 is the most efficient.";
                }
                else{
                    cout << "The cars are the same in efficiency.";
                }
                        cout << "Redo? Y/N ";
                        cin >> redos;
                }while (redos == 'y' || redos == 'Y');
                break;
            case 3:
                cout << "Problem 3" << endl;
                //variables
                int dem; //denominator
                int num; //numerator
                float wDol; //whole dollar
                float share; // shares of stock
                float value; //value of the stocks
                char reDo; //retry variable
                do{
                    cout << "Input the number of shares you have in the stock: ";
                    cin >> share;
                    cout << "Input the whole-dollar portion: ";
                    cin >> wDol;
                    cout << "Input the numerator for the fraction: ";
                    cin >> num;
                    cout << "Input the denominator for the fraction: ";
                    cin >> dem;
                    value = share * (wDol + (num/dem));
                    cout << "The value of your stock is " << value << ".";
                    cout << "Redo? Y/N ";
                    cin >> redo;
                }while (redo == 'y' || redo == 'Y');
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
                cout << "Problem 9" << endl;
                //variables
                float hSize; //hat size
                float jSize; //jacket size
                float wSize; //waist size in inches
                float uHt; //user height
                float uWt; //user weight
                unsigned int age; //user age
                char redone; //rerun the program
                do{
                        cout << "Input your height in inches: ";
                        cin >> uHt;
                        cout << "Input your weight in lbs: ";
                        cin >> uWt;
                        cout << "Input your age: ";
                        cin >> age;
                        hSize = (uWt/uHt) * 2.9;
                        jSize = (uHt * uWt)/288;
                   if (age > 30){
                        jSize += (1.0f/8) * ((age - 30)/10);
                   }
                        wSize = uWt/5.7;
                   if (age > 28){
                        wSize += (1.0f/10) * ((age - 28)/2);
                   }
                        cout << "Your hat size is " << hSize << endl;
                        cout << "Your jacket size is " << jSize << endl;
                        cout << "Your waist size is " << wSize << endl;
                        cout << "Redo? Y/N ";
                        cin >> redone;
                }while (redone == 'y' || redone == 'Y');
                break;
            case 7:
                cout << "This is problem 10" << endl;
                //new variables from problem 9
                float nJsize; //new jacket size after 10 years
                float nWsize; //new waist size after 10 years
                int nAge; //age after 10 years
                char reDos; //retry variable
                do{
                        cout << "Input your height in inches: ";
                        cin >> uHt;
                        cout << "Input your weight in lbs: ";
                        cin >> uWt;
                        cout << "Input your age: ";
                        cin >> age;
                        hSize = (uWt/uHt) * 2.9;
                        jSize = (uHt * uWt)/288;
                   if (age > 30){
                        jSize += (1.0f/8) * ((age - 30)/10);
                   }
                        wSize = uWt/5.7;
                   if (age > 28){
                        wSize += (1.0f/10) * ((age - 28)/2);
                   }
                        nWsize = uWt/5.7;
                        nJsize = (uHt * uWt)/288;
                        nAge = age + 10;
                   if (nAge > 30){
                        nJsize += (1.0f/8) * ((nAge - 30)/10);
                   }
                   if (nAge > 28){
                        nWsize += (1.0f/10) * ((nAge - 28)/2);
                   }
                        cout << "Your hat size is " << hSize << endl;
                        cout << "Your jacket size is " << jSize << endl;
                        cout << "Your waist size is " << wSize << endl;
                        cout << "Your new jacket size after 10 years is " 
                                << nJsize << endl;
                        cout << "Your new waist size after 10 years is " 
                                << nWsize << endl;
                        cout << "Redo? Y/N ";
                        cin >> reDos;
                }while (reDos == 'y' || reDos == 'Y');
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