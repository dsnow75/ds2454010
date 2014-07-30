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
#include <vector>
#include <cctype>
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
int rev(unsigned short n);
void retrand(short int x[], int y[], int z,int p);
void filVec(vector<int> &, const vector<int> &b, int);
void prntVec(const vector<int> &, const vector<int> &b, int);
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
    unsigned short num; //number to be inputed
    cout << "Input the number you want to reverse: ";
    cin >> num;
    rev(num);
}

void prob2(){
    cout << "In problem 2" << endl << endl;
    //variables
    int guess = 0; // guess variable
    int n = 1; //number of guesses
    int num; //number trying to guess
    char redo;
    do{srand(time(NULL));
       num = rand() % 1000 + 1;
       while (n <= 10){
          cout << "Guess the number: ";
          cin >> guess;
          if (guess == num){
              cout << "Congratulations, You guessed the number!";
              cout << "Retry? Y/N";
              cin >> redo;
              break;
          }
          else if (guess < num){
              cout << "Too low" << endl;
          }
          else if (guess > num){
              cout << "Too high" << endl;
          }
       }
       if (n > 10){
           cout << "Too many guesses";
       }
    }while (redo == 'Y' || redo == 'y');
}

void prob3(){
    cout << "In problem 3" << endl << endl;
    int mxSize;
    vector <int> vec1(mxSize);
    vector <int> vec2(mxSize);
    int nCol; //number of columns
    cout << "Input the number of integers you want in the data: ";
    cin >> mxSize;
    filVec(vec1, vec2, mxSize);
    prntVec(vec1, vec2, mxSize);
}

void prob4(){
    cout << "In problem 4" << endl << endl;
    const int n=5,ntimes=10000;
    int freq[n]={0};
    short int rndseq[]={9,51,78,111,121};
    retrand(rndseq,freq,n,ntimes);
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
int rev(unsigned short n){
    int i = 10; //iteration variable
    int x, y, z , v, c; // check variables
    x = (n % i)/ (i/10);
    i *= 10;
    y = (n % i)/ (i/10);
    i *= 10;
    z = (n % i)/ (i/10);
    i *= 10;
    v = (n % i)/ (i/10);
    i *= 10;
    c = (n % i)/ (i/10);
    i *= 10;
    if (x > 3 && isdigit(c)){
        cout << "invalid input" << endl;
    } 
    else if(x ==3 && y > 2 && isdigit(c)){
        cout << "invalid input" << endl;
    }
    else if (x ==3 && y == 2 && z > 7 && isdigit(c)){
        cout << "invalid input" << endl;
    }
    else if(x ==3 && y == 2 && z == 7 && v > 6 && isdigit(c)){
        cout << "invalid input" << endl;
    }
    
    else if(x ==3 && y == 2 && z == 7 && v == 6 && c > 7){
        cout << "invalid input" << endl;
    }
    else{
        i = 10;
        do{ 
           cout << (n % i)/ (i/10);
           i *= 10;
        }while ((n * 10)/i != 0);
    }
     cout << endl;
}
void retrand(short int x[], int y[], int z,int p){
    int a;
    srand(time(NULL));
    while (p > 0){
        a = rand() % z;
        x[a];
        y[a] = y[a] + 1;
        p--;
    }
    for (int i = 0; i < z; i++){
        cout<<x[i]<<" occurred "<<
        y[i]<<" times"<<endl;
    }    
}
void filVec(vector<int> &a, const vector<int> &b,int n){
    for(int i=0;i<n;i++){
        a[i] = (rand()%90+10);
        b[i]
    }
}
void prntVec(const vector<int> &a, const vector<int> &b, int Num){
    cout<<endl;
    for(int i=0; i < Num ;i++){
        cout << a[i] << " ";
        cout << endl;
    }
    cout << endl;
}