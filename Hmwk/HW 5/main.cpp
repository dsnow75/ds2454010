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
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void inLen();
void calConv(float input);
void outLen(float inp1, float inp2);
void comCoins(int cents);
void inLe();
void calCon(float inp);
void outLe(float in1, float in2);
void inWeight();
void calWeight(float inp);
void outWeight(float in1, float in2);
//Execution Starts Here!
int main(int argc, char** argv) {
    short num;
  //Display a Main Menu
    do{
        do{
            cout << "Choose your problem you want to look at" << endl;
            cout << "1 for Problem 2" << endl;
            cout << "2 for Problem 3" << endl;
            cout << "3 for Problem " << endl;
            cout << "4 for Problem 5" << endl;
            cout << "5 for Problem 6" << endl;
            cout << "6 for Problem 7" << endl;
            cout << "7 for Problem 8" << endl;
            cout << "8 for Problem 9" << endl;
            cout << "9 for Problem " << endl;
            cout << "10 for Problem " << endl;
            cin >> num;
            cin.ignore();
        }while( num < 0 || num > 10);
      //Problems for homework
        switch(num){
            case 1:
                cout << "Problem 2" << endl;
                //variables
                int cTime; //current time
                int wTime; //wait time
                int hTime; //time hours for new time
                int mTime; // new time in minutes
                char redo; //retry variable
                do{
                    string pTime; //decides if it is pm
                    cout << "Input the current hour of the time: ";
                    cin >> hTime;
                    cout << "Input the current time: ex. 12:24, 15:52 ";
                    cin.ignore(7,':') >> cTime;
                    cout << "Input the time you have to wait in minutes: ";
                    cin >> wTime;
                    mTime = cTime + wTime;
                    while (mTime >= 60){
                        hTime = hTime + 1;
                        mTime = mTime - 60;
                    }
                    while (hTime >= 24){
                        hTime = hTime - 24;
                    }
                    if (hTime >= 12){
                        pTime = "PM";
                    }
                    else{
                        pTime = "AM";
                    }
                    cout << "The new time is " << hTime << ":";
                    if (mTime < 10){
                        cout << '0' << mTime;
                    }
                    else{
                        cout << mTime;
                    }
                    cout << " " << pTime << ".";
                    cout << "Retry? Y/N ";
                    cin >> redo;
                }while (redo == 'Y'|| redo =='y');
                break;
            case 2:
                cout << "Problem 3" << endl;
                //variables
                int cutTime; //current time
                int watTime; //wait time
                int hrsTime; //time hours for new time
                int minTime; // new time in minutes
                int numTurn; //number of times it switched between AM and PM
                char redos; //retry variable
                do{
                    string aTime; //decides if it is pm or am
                    cout << "Input the current hour of the time: ";
                    cin >> hrsTime;
                    cout << "Input the current time: ex. 12:34,10:52 ";
                    cin.ignore(7,':') >> cutTime;
                    cout << "Input whether it is AM or PM: "
                            "(all caps or all lowercase) ";
                    cin >> aTime;
                    cout << "Input the time you have to wait in minutes: ";
                    cin >> watTime;
                    minTime = cutTime + watTime;
                    while (minTime >= 60){
                        hrsTime = hrsTime + 1;
                        minTime = minTime - 60;
                    }
                    while (hrsTime >= 12){
                        hrsTime = hrsTime - 12;
                        if (hrsTime == 0){
                            hrsTime = 12;
                        }
                        if (aTime == "PM" || aTime == "pm"){
                            aTime = "AM";
                        }
                        else if (aTime == "AM" || aTime == "am"){
                            aTime = "PM";
                        }
                        else{
                            cout << "You did not input a valid answer for AM or PM";
                        }
                    }
                    
                    cout << "The new time is " << hrsTime << ":";
                    if (minTime < 10){
                        cout << '0' << minTime;
                    }
                    else{
                        cout << minTime;
                    }
                    cout << " " << aTime << ".";
                    cout << "Retry? Y/N ";
                    cin >> redos;
                }while (redos == 'Y'|| redos =='y');
                break;
            case 3:
                cout << "Problem 4" << endl;
                //variables
                
                break;
            case 4:
                cout << "Problem 5" << endl;
                //variables
                int amount; //amount of coins
                cout << "Enter the amount of coins between 1 and 99 to calculate: ";
                cin >> amount;
                comCoins(amount);
                
                break;
            case 5:
                cout << "Problem 6" << endl;
                //variables
                char retry;// retry variable
                do{
                    inLen();
                    cout << "Retry? Y/N ";
                    cin >> retry;
                }while (retry == 'Y' || retry == 'y');
                break;
            case 6:
                cout << "Problem 7" << endl;
                //variables
                char Retry;// retry variable
                do{
                    inLe();
                    cout << "Retry? Y/N ";
                    cin >> Retry;
                }while (Retry == 'Y' || Retry == 'y');
                break;
            case 7:
                cout << "This is problem 8" << endl;
                //variables
                char Ret;// retry variable
                do{
                    int x; //variable to decide conversion
                    cout << "Enter 1 for feet to meters or 2 for meters to feet: ";
                    cin >> x;
                    if (x == 1){
                        inLen();
                    }
                    else if (x == 2){
                        inLe();
                    }
                    else {
                        cout << "You did not enter a valid response.";
                    }
                    cout << "Retry? Y/N ";
                    cin >> Ret;
                }while (Ret == 'Y' || Ret == 'y');
                break;
            case 8:
                cout << "This is problem 9" << endl;
                //variables
                char Redo; // retry variable
                do{
                    inWeight();
                }while(Redo == 'Y' || Redo == 'y');
                break;
            case 9:
                cout << "This is problem 14" << endl;
                //variables

                break;
            case 10:
                cout << "This is problem 8" << endl;
                //variables
                break;
            }
    }while(num);
  //End of program
    return 0;
}
void comCoins(int cents){
    int pen = 0; //number of pennies
    int quart = 0; //number of quarters
    int dimes = 0; // number of dimes       
    while (cents > 25){
            cents = cents - 25;
            quart = quart + 1;
    }
    while (cents > 10){
            cents = cents - 10;
            dimes = dimes + 1;
    }
    while (cents >= 1){
        cents = cents - 1;
        pen = pen + 1;
   }
    cout << quart << " Quarter(s) " << dimes << "Dime(s) and " << pen 
         << " Penny(Pennies)" << endl; 
}
void inLen(){
    float length; // length in feet and inches
    cout << "Input the length in feet and inches you want to convert: ";
    cin >> length;
    calConv(length);
}
void calConv(float input){
    float cLen = 0; //converted length from feet to meters
    float cLenIn = 0; //converted length from inches to centimeters
    float inch = 0; //inches
    cLen = input * .3048;
    inch = input / 12;
    cLenIn = inch * (.3048*100);
    outLen(cLen, cLenIn);
}
void outLen(float inp1, float inp2){
    cout << "The converted length is " << inp1 << " meters." << endl;
    cout << "The converted length is " << inp2 << " centimeters." << endl;
}
void inLe(){
    float length; // length in meters and centimeters
    cout << "Input the length in meters and centimeters you want to convert: ";
    cin >> length;
    calCon(length);
}
void calCon(float inp){
    float cLe = 0; //converted length from meters to feet
    float cLen2 = 0; //converted length from centimeters to inches
    cLe = inp / .3048;
    cLen2 = cLe * 12;
    outLe(cLe, cLen2);
}
void outLe(float in1, float in2){
    cout << "The converted length is " << in1 << " feet." << endl;
    cout << "The converted length is " << in2 << " inches." << endl;
}
void inWeight(){
    float weight; // length in meters and centimeters
    cout << "Input the weight in lbs you want to convert: ";
    cin >> weight;
    calCon(weight);
}
void calWeight(float inp){
    float cWeight = 0; //converted weight to kilograms
    float gWeight = 0; //converted weight from kilograms to grams
    cWeight = inp * 2.2046;
    gWeight = cWeight * 1000;
    outLe(cWeight, gWeight);
}
void outWeight(float in1, float in2){
    cout << "The converted weight is " << in1 << " feet." << endl;
    cout << "The converted length is " << in2 << " inches." << endl;
}