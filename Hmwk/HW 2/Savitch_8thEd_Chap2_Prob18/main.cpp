/* 
 * File:   main.cpp
 * Author: David Snow
 *
 * Created on July 2, 2014, 10:14 AM
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
    unsigned short lbs; //weight of person
    unsigned short height; // height of person
    unsigned short age; //person's age
    float BMR; //basic metabolism rate
    char sex; //person's sex
    float nChobar; //number of chocolate bars
    //inputs of the variables
    cout << "Enter your Height in inches: ";
    cin >> height;
    cout << "Enter your weight in lbs: ";
    cin >> lbs;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your sex : M/F ";
    cin >> sex;
    //formulas for each sex
    if (sex == 'M' || sex == 'm') {
        BMR = (66 + (6.3 * lbs) + (12.9 * height) - (6.8 * age));
        nChobar = BMR / 230;
    } else if (sex == 'F' || sex == 'f') {
        BMR = (655 + (4.3 * lbs) + (4.7 * height) - (4.7 * age));
        nChobar = BMR / 230;
    } else {
        cout << "You did not enter a valid character.";
    }
    //output
    cout << "Your BMR is " << BMR << endl;
    cout << "The number if candy bars you need to eat to maintain your height is ";
    cout << nChobar;
    return 0;
}