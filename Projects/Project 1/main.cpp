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
    int one, two, three, four; //numbers for game
    int code1, code2, code3, code4; //code to guess
    char redo; //retry variable
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
        cout << "Retry? Y/N ";
        cin >> redo;
        
    }while (redo == 'y' || redo == 'Y');
    return 0;
}

