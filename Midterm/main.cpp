/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 14, 2014, 1:06 PM
 */
//system libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void menu();
int gtN();
void def(int);
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();

//Execution Starts Here!
int main(int argc, char** argv) {
    int inN;
      do{
         menu();
         inN = gtN();
         switch(inN){
          case 1:  prob1();break;
          case 2:  prob2();break;
          case 3:  prob3();break;
          case 4:  prob4();break;
          case 5:  prob5();break;
          case 6:  prob6();break;
          default:;
         };
        }while(inN<7);
        return 0;
}
    void menu()
    {
           cout << "Type 1 for problem 1" << endl;
           cout << "Type 2 for problem 2" << endl;
           cout << "Type 3 for problem 3" << endl;
           cout << "Type 4 for problem 4" << endl;
           cout << "Type 5 for problem 5" << endl;
           cout << "Type 6 for problem 6" << endl;
           cout << "Type 7 to exit \n";
    }
    int gtN()
    {
           int inN;
	   cin>>inN;
           return inN;
    }
    void prob1()
    {
        cout << "Problem 1" << endl;
         //variables
        short n; //number of lines
        cout << "Choose the number of lines to write: ";
        cin >> n;
        while (n > 0){
            for (int i = 1; i < n; i++){
                cout << " ";
            }
        cout << n << endl;
        n--;
        }
            
    }
    void prob2()
    {
        cout << "Problem 2" << endl;
        //variables
        char one, two, three, four; //inputs
        cout << "Input the four digits you want to see: ";
        cin >> one >> two >> three >> four;
        if (one == '1'){
            cout << one;
            cout << "*" << endl;
        }
        else if (one == '2'){
            cout << one;
            cout << "**" << endl;
        }
        else if (one == '3'){
            cout << one;
            cout << "***" << endl;
        }
        else if (one == '4'){
            cout << one;
            cout << "****" << endl;
        }
        else if (one == '5'){
            cout << one;
            cout << "*****" << endl;
        }
        else if (one == '6'){
            cout << one;
            cout << "******" << endl;
        }
        else if (one == '7'){
            cout << one;
            cout << "*******" << endl;
        }
        else if (one == '8'){
            cout << one;
            cout << "********" << endl;
        }
        else if (one == '9'){
            cout << one;
            cout << "*********" << endl;
        }
        else{
            cout << one;
            cout << "?" << endl;
        }
        if (two == '1'){
            cout << two;
            cout << "*" << endl;
        }
        else if (two == '2'){
            cout << two;
            cout << "**" << endl;
        }
        else if (two == '3'){
            cout << two;
            cout << "***" << endl;
        }
        else if (two == '4'){
            cout << two;
            cout << "****" << endl;
        }
        else if (two == '5'){
            cout << two;
            cout << "*****" << endl;
        }
        else if (two == '6'){
            cout << two;
            cout << "******" << endl;
        }
        else if (two == '7'){
            cout << two;
            cout << "*******" << endl;
        }
        else if (two == '8'){
            cout << two;
            cout << "********" << endl;
        }
        else if (two == '9'){
            cout << two;
            cout << "*********" << endl;
        }
        else{
            cout << two;
            cout << "?" << endl;
        }
        if (three == '1'){
            cout << three;
            cout << "*" << endl;
        }
        else if (three == '2'){
            cout << three;
            cout << "**" << endl;
        }
        else if (three == '3'){
            cout << three;
            cout << "***" << endl;
        }
        else if (three == '4'){
            cout << three;
            cout << "****" << endl;
        }
        else if (three == '5'){
            cout << three;
            cout << "*****" << endl;
        }
        else if (three == '6'){
            cout << three;
            cout << "******" << endl;
        }
        else if (three == '7'){
            cout << three;
            cout << "*******" << endl;
        }
        else if (three == '8'){
            cout << three;
            cout << "********" << endl;
        }
        else if (three == '9'){
            cout << three;
            cout << "*********" << endl;
        }
        else{
            cout << three;
            cout << "?" << endl;
        }
        if (four == '1'){
            cout << four;
            cout << "*" << endl;
        }
        else if (four == '2'){
            cout << four;
            cout << "**" << endl;
        }
        else if (four == '3'){
            cout << four;
            cout << "***" << endl;
        }
        else if (four == '4'){
            cout << four;
            cout << "****" << endl;
        }
        else if (four== '5'){
            cout << four;
            cout << "*****" << endl;
        }
        else if (four== '6'){
            cout << four;
            cout << "******" << endl;
        }
        else if (four == '7'){
            cout << four;
            cout << "*******" << endl;
        }
        else if (four == '8'){
            cout << four;
            cout << "********" << endl;
        }
        else if (four == '9'){
            cout << four;
            cout << "*********" << endl;
        }
        else{
            cout << four;
            cout << "?" << endl;
        }
    }
    void prob3()
    {
           cout << "Problem 3" << endl;
    }
    void prob4()
    {
           cout << "Problem 4" << endl;
    }
    void prob5()
    {
           cout << "Problem 5" << endl;
    }
    void prob6()
    {
           cout << "Problem 6" << endl;
    }
    void def(int inN)
    {
           cout << "You left the program. Good-Bye.";
    }