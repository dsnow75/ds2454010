/* 
 * File:   main.cpp
 * Author: David-Snow
 *
 * Created on July 13, 2014, 6:27 PM
 */
//system libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    //variables
    int score; //score counter
    int guess; //number of guesses allowed
    //numbers for game
    int one = 1; 
    int two = 2;
    int three = 3;
    int four = 4; 
    //code to guess
    int code1;
    int code2;
    int code3;
    int code4; 
    //guess variables
    int guess1;
    int guess2;
    int guess3;
    int guess4;
    //retry variable
    char redo; 
    do{
        srand(time(NULL));
        code1 = rand() % 4 + 1;
        code2 = rand() % 4 + 1;
        code3 = rand() % 4 + 1;
        code4 = rand() % 4 + 1;
        cout << code1 << " ";
        cout << code2 << " ";
        cout << code3 << " ";
        cout << code4 << endl;
        while (guess <= 10 && guess1 != code1 && guess2 != code2 && guess3 
                != code3 && guess4 != code4){
            //input guesses for code
            cout << "Input the first number of the code you think it is: ";
            cin >> guess1;
            cout << "Input the second number of the code you think it is: ";
            cin >> guess2;
            cout << "Input the third number of the code you think it is: ";
            cin >> guess3;
            cout << "Input the fourth number of the code you think it is: ";
            cin >> guess4;
        }
        cout << "Retry? Y/N ";
        cin >> redo;
        
    }while (redo == 'y' || redo == 'Y');
    return 0;
}