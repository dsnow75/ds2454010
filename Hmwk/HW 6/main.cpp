/* 
* File:   main.cpp
* Author: David Snow
* Created on July 23, 2014, 11:38 AM
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

//execution begins here
int main(int argc, char** argv) {
 short num;
  //Display a Main Menu
    do{
        do{
            cout << "Choose your problem you want to look at" << endl;
            cout << "1 for Problem 1" << endl;
            cout << "2 for Problem 2" << endl;
            cout << "3 for Problem 3" << endl;
            cout << "4 for Problem 5" << endl;
            cout << "5 for Problem 6" << endl;
            cout << "6 for Problem 7" << endl;
            cout << "7 for Problem 8" << endl;
            cout << "8 for Problem 9" << endl;
            cout << "9 for Problem 10" << endl;
            cout << "10 for Problem 11" << endl;
            cin >> num;
            cin.ignore();
        }while( num < 0 || num > 10);
      //Problems for homework
        switch(num){
            case 1:
            {
                cout << "Problem 1" << endl;
                //variables
                int a[10]; //character array
                //variables for highest and lowest value
                int x;
                int y;
                a[0] = 2147483647;
                x = 0;
                y = a[0];
                cout << "Enter ten numbers into the array: ";
                for (int i = 0; i < 10; i++){
                    cin >> a[i];
                    if (a[i]> x){
                        x = a[i];
                    }
                    if (a[i]< y){
                        y = a[i];
                    }                      
                }
                cout <<"The highest values is " << x << endl;  
                cout <<"The lowest values is " << y << endl;  
                break;
            }
            case 2:{
                cout << "Problem 2" << endl;
                //variables
                float rain[12]; // rainfall array
                float high, low, tot, avg; //highest, lowest, total
                rain[0] = 10000000;
                low = rain[0];
                tot = 0;
                cout << "Enter the amount of rainfall each month: ";
                for (int i = 1; i <= 12; i++){
                    cin >> rain[i];
                    high = 0;
                    tot = tot + rain[i];
                    if (rain[i]> high){
                        high = rain[i];
                    }
                    if (rain[i]< low){
                        low = rain[i];
                    }
                }
                avg = tot /12;
                cout << "The average amount of rainfall is " << avg << endl;
                cout << "The highest amount of rainfall is " << high << endl;
                cout << "The lowest amount of rainfall is " << low << endl;
                cout << "The total rain amount is " << tot << "." <<  endl;
                break;
                }
            case 3:{
                cout << "Problem 3" << endl;
                int jar[5]; //holds number of jars sold
                int total; //total sales
                string name[5] = {"mild", "medium", "sweet", "hot", "zesty"};
                cout << "Input the number of jars sold for mild: ";
                cin >> jar[0];
                cout << "Input the number of jars sold for medium: ";
                cin >> jar[1];
                cout << "Input the number of jars sold for sweet: ";
                cin >> jar[2];
                cout << "Input the number of jars sold for hot: ";
                cin >> jar[3];
                cout << "Input the number of jars sold for zesty: ";
                cin >> jar[4];
                cout << "Type " << "Number sold" << endl; 
                cout << "mild " << jar[0] << endl; 
                cout << "medium " << jar[1] << endl; 
                cout << "sweet " << jar[2] << endl; 
                cout << "hot " << jar[3] << endl; 
                cout << "zesty " << jar[4] << endl; 
                if (jar[0] > jar[1] && jar[0] > jar[2] && jar[0] > jar[3]
                        && jar[0] > jar[4]){
                    cout << "Mild is the type that sold the most." << endl;
                }
                else if (jar[1] > jar[0] && jar[1] > jar[2] && jar[1] > jar[3]
                        && jar[1] > jar[4]){
                    cout << "Medium is the type that sold the most." << endl;
                }
                else if (jar[2] > jar[0] && jar[2] > jar[1] && jar[2] > jar[3]
                        && jar[2] > jar[4]){
                    cout << "Sweet is the type that sold the most." << endl;
                }
                else if (jar[3] > jar[0] && jar[3] > jar[2] && jar[3] > jar[1]
                        && jar[3] > jar[4]){
                    cout << "Hot is the type that sold the most." << endl;
                }
                else if (jar[4] > jar[0] && jar[4] > jar[2] && jar[4] > jar[3]
                        && jar[4] > jar[1]){
                    cout << "Zesty is the type that sold the most." << endl;
                }
                else{
                    cout << "None of the types sold higher then the others." << endl;
                }
                if (jar[0] < jar[1] && jar[0] < jar[2] && jar[0] < jar[3]
                        && jar[0] < jar[4]){
                    cout << "Mild is the type that sold the least." << endl;
                }
                else if (jar[1] < jar[0] && jar[1] < jar[2] && jar[1] < jar[3]
                        && jar[1] < jar[4]){
                    cout << "Medium is the type that sold the least." << endl;
                }
                else if (jar[2] < jar[0] && jar[2] < jar[1] && jar[2] < jar[3]
                        && jar[2] < jar[4]){
                    cout << "Sweet is the type that sold the least." << endl;
                }
                else if (jar[3] < jar[0] && jar[3] < jar[2] && jar[3] < jar[1]
                        && jar[3] < jar[4]){
                    cout << "Hot is the type that sold the least." << endl;
                }
                else if (jar[4] < jar[0] && jar[4] < jar[2] && jar[4] < jar[3]
                        && jar[4] < jar[1]){
                    cout << "Zesty is the type that sold the least." << endl;
                }
                else{
                    cout << "None of the types sold lowest." << endl;
                }
                total = jar[0] + jar[1] + jar[2] + jar[3] + jar[4];
                cout << "The total number of sales is " << total << endl;
                break;
            }
            case 4:{
                cout << "Problem 5" << endl;
                //variables
                
                break;
            }
            case 5:{
                cout << "Problem 6" << endl;
                //variables
                
                break;
            }
            case 6:{
                cout << "Problem 7" << endl;
                //variables
                
                break;
            }
            case 7:{
                cout << "This is problem 8" << endl;
                //variables
                
                break;
            }
            case 8:{
                cout << "This is problem 9" << endl;
                //variables
                
                break;
            }
            case 9:{
                cout << "This is problem 10" << endl;
                //variables
                
                break;
            }
            case 10:{
                cout << "This is problem 11" << endl;
                //variables
                
                break;
            }
            }
    }while(num);
  //End of program
    return 0;
}