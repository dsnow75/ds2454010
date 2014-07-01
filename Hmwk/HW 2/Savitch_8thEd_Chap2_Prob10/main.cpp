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
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
    //num1 is the first number, num10 is the tenth number
    int sumP,sumN; //sumP is sum of positives, sumN is sum of negatives
    //input numbers
    cout << "Enter ten numbers of your choosing: ";
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    cin >> num5;
    cin >> num6;
    cin >> num7;
    cin >> num8;
    cin >> num9;
    cin >> num10;
    //calculate if positive or negative
    if (num1 > 0){
        sumP = num1;
        sumN = 0;
    }
    else{
        sumN = num1;
        sumP = 0;
    }
    if (num2 > 0){
        sumP = sumP + num2;
    }
    else{
        sumN = sumN + num2;
    }
    if (num3 > 0){
        sumP = sumP + num3;
    }
    else{
        sumN = sumN + num3;
    }
    if (num4 > 0){
        sumP = sumP + num4;
    }
    else{
        sumN = sumN + num4;
    }
    if (num5 > 0){
        sumP = sumP + num5;
    }
    else{
        sumN = sumN + num5;
    }
    if (num6 > 0){
        sumP = sumP + num6;
    }
    else{
        sumN = sumN + num6;
    }
    if (num7 > 0){
        sumP = sumP + num7;
    }
    else{
        sumN = sumN + num7;
    }
    if (num8 > 0){
        sumP = sumP + num8;
    }
    else{
        sumN = sumN + num8;
    }
    if (num9 > 0){
        sumP = sumP + num9;
    }
    else{
        sumN = sumN + num9;
    }
    if (num10 > 0){
        sumP = sumP + num10;
    }
    else{
        sumN = sumN + num10;
    }
    //results
    cout << "Sum of the negative  are " << sumN << endl;
    cout << "Sum of the positive numbers are " << sumP;
    return 0;
}