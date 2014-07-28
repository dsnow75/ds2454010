/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 28, 2014, 1:08 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();

//Execution begins here
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1: prob1();break;
        case 2: prob2();break;
        case 3: prob3();break;
        case 4: prob4();break;
        case 5: prob5();break;
        case 6: prob6();break;
            default:;
        };
    }while(inN<7);
    return 0;
}

//Menu Function
void Menu(){
    cout<<"Type 1 for problem 1" << endl;
    cout<<"Type 2 for problem 2" << endl;
    cout<<"Type 3 for problem 3" << endl;
    cout<<"Type 4 for problem 4" << endl;
    cout<<"Type 5 for problem 5" << endl;
    cout<<"Type 6 for problem 6" << endl;
    cout<<"Type 7 to exit \n" << endl;
}

//Choose problem number function
int getN(){
    int inN;
    cin>>inN;
    return inN;
}

void prob1(){
    cout << "In problem 1" << endl << endl;
    //variables
    
}

void prob2(){
    cout << "In problem 2" << endl << endl;
}

void prob3(){
    cout << "In problem 3" << endl << endl;
}

void prob4(){
    cout << "In problem 4" << endl << endl;
}


void prob5(){
    cout << "In problem 5" << endl << endl;
}


void prob6(){
    cout << "In problem 6" << endl << endl;
}

//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}