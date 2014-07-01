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
    short years, sYear;//years to buy the item, Years for inflation
    float cost; // cost of the item
    float iRate; // inflation rate in percentage
    cout << "Input the cost of the item:";
    cin >> cost;
    cout << "\nInput how many years from now you will buy the item:";
    cin >> years;
    cout << "\nInput the inflation rate in percentage:";
    cin >> iRate;
    iRate = iRate/100;
    sYear = 0;
    while(sYear < years){
        sYear = sYear + 1;
        cost = cost + cost * iRate;
    }
    cout << "The cost of the product after the rate is " << cost;
    return 0;
}