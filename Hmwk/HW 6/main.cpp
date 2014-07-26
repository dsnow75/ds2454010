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
#include <fstream>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants
const int Days = 7;
//Function Prototypes
void row(int a[][Days],int );
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
            cout << "4 for Problem 4" << endl;
            cout << "5 for Problem 8" << endl;
            cout << "6 for Problem 9" << endl;
            cout << "7 for Problem 13" << endl;
            cout << "8 for Problem 11" << endl;
            cout << "9 for Problem 12" << endl;
            cout << "10 for Problem 7" << endl;
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
                for (int i = 0; i < 12; i++){
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
                //output
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
                cout << "Problem 4" << endl;
                //variables
                const int rows = 3;
                int day[rows][Days]; // two dimensional array
                row(day, rows);
                break;
            }
            case 5:{
                cout << "Problem 8" << endl;
                //variables
                int idNum[7] = {5658845, 4520125, 7895122, 8777541, 8451277
                , 1302859, 7580489};
                int hours[7];
                float payRate[7];
                float wage[7];
                for (int i = 0; i < 7; i ++){
                   cout << idNum[i] << "\n Input the hours and the wage he receives: ";
                   cin >> hours[i] >> payRate[i];
                   wage[i] = hours[i] * payRate[i];
                }
                cout << idNum[0] << " " << wage[0] << endl;
                cout << idNum[1] << " " << wage[1] << endl;
                cout << idNum[2] << " " << wage[2] << endl;
                cout << idNum[3] << " " << wage[3] << endl;
                cout << idNum[4] << " " << wage[4] << endl;
                cout << idNum[5] << " " << wage[5] << endl;
                cout << idNum[6] << " " << wage[6] << endl;
                break;
            }
            case 6:{
                cout << "Problem 9" << endl;
                //variables
                char grade[20] = {'B','D','A','A', 'C', 'A', 'B', 'A', 'C', 'D'
                , 'B', 'C', 'D', 'A', 'D', 'C', 'C', 'B', 'D', 'A'};
                char ans[20]; //answer array
                int correct =  0; // number correct
                int incor = 0; //number incorrect
                int r[20]; //array of incorrect questions
                for(int i = 0; i < 20; i++){
                    cout << "Enter each of the students answers: ";
                    cin >> ans[i];
                    if (ans[i] == grade[i]){
                        correct = correct + 1;
                    }
                    else{
                        incor++;
                        r[i] = i + 1;
                        cout << r[i] << endl;
                    }
                }
                cout << "You have " << correct << " many correct. " << endl;
                cout << "You have " << incor << " wrong answers. " << endl;
                if (correct >= 15){
                    cout << "You have passed the driving test. " << endl;
                }
                break;
            }
            case 7:{
                cout << "This is problem 13" << endl;
                //variables
                int lot[5]; //lottery array
                int use[5]; // user array
                int cor; // number of numbers correct
                srand(time(NULL));
                for(int i = 0; i < 5; i++){
                    lot[i] = rand() % 10;
                }
                cout << "Enter the number of the lottery ticket you own: ";
                for(int x = 0; x < 5; x++){
                    cin >> use[x];
                    if (use[x] == lot[x]){
                        cor = cor + 1;
                    }
                }
                cout << lot[0];
                cout << lot[1];
                cout << lot[2];
                cout << lot[3];
                cout << lot[4] << endl;
                cout << cor << endl;
                if (cor == 5){
                    cout << "You won the grand prize!!! " << endl;
                }
                break;
            }
            case 8:{
                cout << "This is problem 11" << endl;
                //variables
                string name[5]; //array for name
                char grad[5]; //array for grade
                float score1[4], score2[4], score3[4], score4[4], score5[4];
                int avger, avger2, avger3, avger4, avger5; // average variables
                for(int i = 0; i < 5; i++){
                    cout << "Input the student's name: ";
                    cin >> name[i];
                    cout << "Input the scores of the student: ";
                    if (i == 0){
                        cin >> score1[0] >> score1[1] >> score1[2] >> score1[3];
                        if (score1[0] < 0 || score1[0] > 100 || 
                            score1[1] < 0 || score1[1] > 100 ||
                            score1[2] < 0 || score1[2] > 100 ||
                            score1[3] < 0 || score1[3] > 100){
                            cout << "You inputed a invalid score.";
                            break;
                        }
                        avger = (score1[0] + score1[1] + score1[2] + score1[3])/4;
                        if (avger >= 90){
                            grad[0] = 'A';
                        }
                        else if (avger < 90 && avger >= 80){
                            grad[0] = 'B';
                        }
                        else if (avger < 80 && avger >= 70){
                            grad[0] = 'C';
                        }
                        else if (avger < 70 && avger >= 60){
                            grad[0] = 'D';
                        }
                        else {
                            grad[0] = 'F';
                        }
                    }
                    else if (i == 1){
                        cin >> score2[0] >> score2[1] >> score2[2] >> score2[3];
                        if (score2[0] < 0 || score2[0] > 100 || 
                            score2[1] < 0 || score2[1] > 100 ||
                            score2[2] < 0 || score2[2] > 100 ||
                            score2[3] < 0 || score2[3] > 100){
                            cout << "You inputed a invalid score.";
                            break;
                        }
                        avger2 = (score2[0] + score2[1] + score2[2] + score2[3])/4;
                        if (avger2 >= 90){
                            grad[1] = 'A';
                        }
                        else if (avger2 < 90 && avger2 >= 80){
                            grad[1] = 'B';
                        }
                        else if (avger2 < 80 && avger2 >= 70){
                            grad[1] = 'C';
                        }
                        else if (avger2 < 70 && avger2 >= 60){
                            grad[1] = 'D';
                        }
                        else {
                            grad[1] = 'F';
                        }
                    }
                    else if (i == 2){
                        cin >> score3[0] >> score3[1] >> score3[2] >> score3[3];
                        if (score3[0] < 0 || score3[0] > 100 || 
                            score3[1] < 0 || score3[1] > 100 ||
                            score3[2] < 0 || score3[2] > 100 ||
                            score3[3] < 0 || score3[3] > 100){
                            cout << "You inputed a invalid score.";
                            break;
                        }
                        avger3 = (score3[0] + score3[1] + score3[2] + score3[3])/4;
                        if (avger3 >= 90){
                            grad[2] = 'A';
                        }
                        else if (avger3 < 90 && avger3 >= 80){
                            grad[2] = 'B';
                        }
                        else if (avger3 < 80 && avger3 >= 70){
                            grad[2] = 'C';
                        }
                        else if (avger3 < 70 && avger3 >= 60){
                            grad[2] = 'D';
                        }
                        else {
                            grad[2] = 'F';
                        }
                    }
                    else if (i == 3){
                        cin >> score4[0] >> score4[1] >> score4[2] >> score4[3];
                        if (score4[0] < 0 || score4[0] > 100 || 
                            score4[1] < 0 || score4[1] > 100 ||
                            score4[2] < 0 || score4[2] > 100 ||
                            score4[3] < 0 || score4[3] > 100){
                            cout << "You inputed a invalid score.";
                            break;
                        }
                        avger4 = (score4[0] + score4[1] + score4[2] + score4[3])/4;
                        if (avger4 >= 90){
                            grad[3] = 'A';
                        }
                        else if (avger4 < 90 && avger4 >= 80){
                            grad[3] = 'B';
                        }
                        else if (avger4 < 80 && avger4 >= 70){
                            grad[3] = 'C';
                        }
                        else if (avger4 < 70 && avger4 >= 60){
                            grad[3] = 'D';
                        }
                        else {
                            grad[3] = 'F';
                        }
                    }
                    else if (i == 4){
                        cin >> score5[0] >> score5[1] >> score5[2] >> score5[3];
                        if (score5[0] < 0 || score5[0] > 100 || 
                            score5[1] < 0 || score5[1] > 100 ||
                            score5[2] < 0 || score5[2] > 100 ||
                            score5[3] < 0 || score5[3] > 100){
                            cout << "You inputed a invalid score.";
                            break;
                        }
                        avger5 = (score5[0] + score5[1] + score5[2] + score5[3])/4;
                        if (avger5 >= 90){
                            grad[4] = 'A';
                        }
                        else if (avger5 < 90 && avger5 >= 80){
                            grad[4] = 'B';
                        }
                        else if (avger5 < 80 && avger5 >= 70){
                            grad[4] = 'C';
                        }
                        else if (avger5 < 70 && avger5 >= 60){
                            grad[4] = 'D';
                        }
                        else {
                            grad[4] = 'F';
                        }
                    } 
                }
                cout << name[0] << " got a grade of " << grad[0] << endl;
                cout << name[1] << " got a grade of " << grad[1] << endl;
                cout << name[2] << " got a grade of " << grad[2] << endl;
                cout << name[3] << " got a grade of " << grad[3] << endl;
                cout << name[4] << " got a grade of " << grad[4] << endl;
                break;
            }
            case 9:{
                cout << "This is problem 12" << endl;
                //variables
                string name[5]; //array for name
                char grad[5]; //array for grade
                float score1[4], score2[4], score3[4], score4[4], score5[4];
                int avger, avger2, avger3, avger4, avger5; // average variables
                for(int i = 0; i < 5; i++){
                    cout << "Input the student's name: ";
                    cin >> name[i];
                    cout << "Input the scores of the student: ";
                    if (i == 0){
                        cin >> score1[0] >> score1[1] >> score1[2] >> score1[3];
                        if (score1[0] < 0 || score1[0] > 100 || 
                            score1[1] < 0 || score1[1] > 100 ||
                            score1[2] < 0 || score1[2] > 100 ||
                            score1[3] < 0 || score1[3] > 100){
                            cout << "You inputed a invalid score.";
                            break;
                        }
                        if (score1[0] < score1[1] && score1[0] < score1[2] && 
                                score1[0] < score1[3]){
                            avger = (score1[1] + score1[2] + score1[3])/3;
                        }
                        else if (score1[1] < score1[0] && score1[1] < score1[2] && 
                                score1[1] < score1[3]){
                            avger = (score1[0] + score1[2] + score1[3])/3;
                        }
                        else if (score1[2] < score1[0] && score1[2] < score1[1] && 
                                score1[2] < score1[3]){
                            avger = (score1[0] + score1[1] + score1[3])/3;
                        }
                        else{
                            avger = (score1[0] + score1[1] + score1[2])/3;
                        }
                        if (avger >= 90){
                            grad[0] = 'A';
                        }
                        else if (avger < 90 && avger >= 80){
                            grad[0] = 'B';
                        }
                        else if (avger < 80 && avger >= 70){
                            grad[0] = 'C';
                        }
                        else if (avger < 70 && avger >= 60){
                            grad[0] = 'D';
                        }
                        else {
                            grad[0] = 'F';
                        }
                    }
                    else if (i == 1){
                        cin >> score2[0] >> score2[1] >> score2[2] >> score2[3];
                        if (score2[0] < 0 || score2[0] > 100 || 
                            score2[1] < 0 || score2[1] > 100 ||
                            score2[2] < 0 || score2[2] > 100 ||
                            score2[3] < 0 || score2[3] > 100){
                            cout << "You inputed a invalid score.";
                            break;
                        }
                        if (score2[0] < score2[1] && score2[0] > score2[2] && 
                                score2[0] < score2[3]){
                            avger2 = (score2[1] + score2[2] + score2[3])/3;
                            
                        }
                        else if (score2[1] < score2[0] && score2[1] < score2[2] && 
                                score2[1] < score2[3]){
                            avger2 = (score2[0] + score2[2] + score2[3])/3;
                        }
                        else if (score2[2] < score2[0] && score2[2] < score2[1] && 
                                score2[2] < score2[3]){
                            avger2 = (score2[0] + score2[1] + score2[3])/3;
                        }
                        else{
                            avger2 = (score2[0] + score2[1] + score2[2])/3;
                        }
                        if (avger2 >= 90){
                            grad[1] = 'A';
                        }
                        else if (avger2 < 90 && avger2 >= 80){
                            grad[1] = 'B';
                        }
                        else if (avger2 < 80 && avger2 >= 70){
                            grad[1] = 'C';
                        }
                        else if (avger2 < 70 && avger2 >= 60){
                            grad[1] = 'D';
                        }
                        else {
                            grad[1] = 'F';
                        }
                    }
                    else if (i == 2){
                        cin >> score3[0] >> score3[1] >> score3[2] >> score3[3];
                        if (score3[0] < 0 || score3[0] > 100 || 
                            score3[1] < 0 || score3[1] > 100 ||
                            score3[2] < 0 || score3[2] > 100 ||
                            score3[3] < 0 || score3[3] > 100){
                            cout << "You inputed a invalid score.";
                            break;
                        }
                        if (score3[0] < score3[1] && score3[0] < score3[2] && 
                                score3[0] < score3[3]){
                            avger3 = (score3[1] + score3[2] + score3[3])/3;
                        }
                        else if (score3[1] < score3[0] && score3[1] < score3[2] && 
                                score3[1] < score3[3]){
                            avger3 = (score3[0] + score3[2] + score3[3])/3;
                        }
                        else if (score3[2] < score3[0] && score3[2] < score3[1] && 
                                score3[2] < score3[3]){
                            avger3 = (score3[0] + score3[1] + score3[3])/3;
                        }
                        else{
                            avger3 = (score3[0] + score3[1] + score3[2])/3;
                        }
                        if (avger3 >= 90){
                            grad[2] = 'A';
                        }
                        else if (avger3 < 90 && avger3 >= 80){
                            grad[2] = 'B';
                        }
                        else if (avger3 < 80 && avger3 >= 70){
                            grad[2] = 'C';
                        }
                        else if (avger3 < 70 && avger3 >= 60){
                            grad[2] = 'D';
                        }
                        else {
                            grad[2] = 'F';
                        }
                    }
                    else if (i == 3){
                        cin >> score4[0] >> score4[1] >> score4[2] >> score4[3];
                        if (score4[0] < 0 || score4[0] > 100 || 
                            score4[1] < 0 || score4[1] > 100 ||
                            score4[2] < 0 || score4[2] > 100 ||
                            score4[3] < 0 || score4[3] > 100){
                            cout << "You inputed a invalid score.";
                            break;
                        }
                        if (score4[0] < score4[1] && score4[0] < score4[2] && 
                                score4[0] < score4[3]){
                            avger4 = (score4[1] + score4[2] + score4[3])/3;
                        }
                        else if (score4[1] < score4[0] && score4[1] < score4[2] && 
                                score4[1] < score4[3]){
                            avger4 = (score4[0] + score4[2] + score4[3])/3;
                        }
                        else if (score4[2] < score4[0] && score4[2] < score4[1] && 
                                score4[2] <score4[3]){
                            avger4 = (score4[0] + score4[1] + score4[3])/3;
                        }
                        else{
                            avger4 = (score4[0] + score4[1] + score4[2])/3;
                        }
                        if (avger4 >= 90){
                            grad[3] = 'A';
                        }
                        else if (avger4 < 90 && avger4 >= 80){
                            grad[3] = 'B';
                        }
                        else if (avger4 < 80 && avger4 >= 70){
                            grad[3] = 'C';
                        }
                        else if (avger4 < 70 && avger4 >= 60){
                            grad[3] = 'D';
                        }
                        else {
                            grad[3] = 'F';
                        }
                    }
                    else if (i == 4){
                        cin >> score5[0] >> score5[1] >> score5[2] >> score5[3];
                        if (score5[0] < 0 || score5[0] > 100 || 
                            score5[1] < 0 || score5[1] > 100 ||
                            score5[2] < 0 || score5[2] > 100 ||
                            score5[3] < 0 || score5[3] > 100){
                            cout << "You inputed a invalid score.";
                            break;
                        }
                        if (score5[0] < score5[1] && score5[0] < score5[2] && 
                                score5[0] < score5[3]){
                            avger5 = (score5[1] + score5[2] + score5[3])/3;
                        }
                        else if (score5[1] < score5[0] && score5[1] < score5[2] && 
                                score5[1] < score5[3]){
                            avger5 = (score5[0] + score5[2] + score5[3])/3;
                        }
                        else if (score5[2] < score5[0] && score5[2] < score5[1] && 
                                score5[2] < score5[3]){
                            avger5 = (score5[0] + score5[1] + score5[3])/3;
                        }
                        else{
                            avger5 = (score5[0] + score5[1] + score5[2])/3;
                        }
                        if (avger5 >= 90){
                            grad[4] = 'A';
                        }
                        else if (avger5 < 90 && avger5 >= 80){
                            grad[4] = 'B';
                        }
                        else if (avger5 < 80 && avger5 >= 70){
                            grad[4] = 'C';
                        }
                        else if (avger5 < 70 && avger5 >= 60){
                            grad[4] = 'D';
                        }
                        else {
                            grad[4] = 'F';
                        }
                    } 
                }
                cout << name[0] << " got a grade of " << grad[0] << endl;
                cout << name[1] << " got a grade of " << grad[1] << endl;
                cout << name[2] << " got a grade of " << grad[2] << endl;
                cout << name[3] << " got a grade of " << grad[3] << endl;
                cout << name[4] << " got a grade of " << grad[4] << endl;
                break;
            }
            case 10:{
                cout << "This is problem 7" << endl;
                //variables
                int sales[6][4]; //2-d array
                int dif[6][4]; //difference array
                int tot = 0; //total
                int tot2 = 0; //difference total
                float avg = 0; //average for quarter
                //inputs
                cout << "Input the number of sales for the first division made each quarter: ";
                cin >> sales[0][0] >> sales[0][1] >> sales[0][2] >> sales[0][3];
                cout << "Input the number of sales for the second division made each quarter: ";
                cin >> sales[1][0] >> sales[1][1] >> sales[1][2] >> sales[1][3];
                cout << "Input the number of sales for the third division made each quarter: ";
                cin >> sales[2][0] >> sales[2][1] >> sales[2][2] >> sales[2][3];
                cout << "Input the number of sales for the fourth division made each quarter: ";
                cin >> sales[3][0] >> sales[3][1] >> sales[3][2] >> sales[3][3];
                cout << "Input the number of sales for the fifth division made each quarter: ";
                cin >> sales[4][0] >> sales[4][1] >> sales[4][2] >> sales[4][3];
                cout << "Input the number of sales for the sixth division made each quarter: ";
                cin >> sales[5][0] >> sales[5][1] >> sales[5][2] >> sales[5][3];
                for (int i = 0; i < 6; i++){
                    dif[i][0] = sales[i][0];
                    for(int x = 0; x < 4; x++){
                        cout << sales[i][x] << " ";
                        if (x > 0){
                            dif[i][x] = sales[i][x] - sales[i][x-1];
                            cout << "(" << dif[i][x] << " Difference) ";
                        }
                    }
                    cout << endl;
                }
                tot = sales[0][0] + sales[1][0] + sales[2][0] + sales[3][0] + sales[4][0]
                        + sales[5][0];
                cout << "The total number of sales for the first quarter is " 
                     << tot << "." << endl;
                avg = tot/6;
                cout << "The average number of sales for the first quarter is " 
                     << avg << "." << endl;
                tot = sales[0][1] + sales[1][1] + sales[2][1] + sales[3][1] + sales[4][1]
                        + sales[5][1];
                cout << "The total number of sales for the second quarter is " 
                     << tot << "." << endl;
                avg = tot/6;
                cout << "The average number of sales for the second quarter is " 
                     << avg << "." << endl;
                tot = sales[0][2] + sales[1][2] + sales[2][2] + sales[3][2] + sales[4][2]
                        + sales[5][2];
                cout << "The total number of sales for the third quarter is " 
                     << tot << "." << endl;
                avg = tot/6;
                cout << "The average number of sales for the third quarter is " 
                     << avg << "." << endl;
                tot = sales[0][3] + sales[1][3] + sales[2][3] + sales[3][3] + sales[4][3]
                        + sales[5][3];
                cout << "The total number of sales for the fourth quarter is " 
                     << tot << "." << endl;
                avg = tot/6;
                cout << "The average number of sales for the fourth quarter is " 
                     << avg << "." << endl;
                tot2 = dif[0][1] + dif[1][1] + dif[2][1] + dif[3][1] + dif[4][1]
                        + dif[5][1];
                cout << "The total difference for the second quarter is " 
                     << tot2 << "." << endl;
                tot2 = dif[0][2] + dif[1][2] + dif[2][2] + dif[3][2] + dif[4][2]
                        + dif[5][2];
                cout << "The total difference for the third quarter is " 
                     << tot2 << "." << endl;
                tot2 = dif[0][3] + dif[1][3] + dif[2][3] + dif[3][3] + dif[4][3]
                        + dif[5][3];
                cout << "The total difference for the fourth quarter is " 
                     << tot2 << "." << endl;
                if (sales[0][0] > sales[1][0] && sales[0][0] > sales[2][0] &&
                        sales[0][0] > sales[3][0] && sales[0][0] > sales[4][0] 
                        && sales[0][0] > sales[5][0]){
                    cout << "Division one had the most sales." << endl;
                }
                else if (sales[1][0] > sales[0][0] && sales[1][0] > sales[2][0] &&
                        sales[1][0] > sales[3][0] && sales[1][0] > sales[4][0] 
                        && sales[1][0] > sales[5][0]){
                    cout << "Division two had the most sales." << endl;
                }
                else if (sales[2][0] > sales[0][0] && sales[2][0] > sales[1][0] &&
                        sales[2][0] > sales[3][0] && sales[2][0] > sales[4][0] 
                        && sales[2][0] > sales[5][0]){
                    cout << "Division three had the most sales." << endl;
                }
                else if (sales[3][0] > sales[0][0] && sales[3][0] > sales[2][0] &&
                        sales[3][0] > sales[1][0] && sales[3][0] > sales[4][0] 
                        && sales[3][0] > sales[5][0]){
                    cout << "Division four had the most sales." << endl;
                }
                else if (sales[4][0] > sales[0][0] && sales[4][0] > sales[1][0] &&
                        sales[4][0] > sales[3][0] && sales[4][0] > sales[2][0] 
                        && sales[4][0] > sales[5][0]){
                    cout << "Division five had the most sales." << endl;
                }
                else if (sales[5][0] > sales[0][0] && sales[5][0] > sales[1][0] &&
                        sales[5][0] > sales[3][0] && sales[5][0] > sales[2][0] 
                        && sales[5][0] > sales[4][0]){
                    cout << "Division six had the most sales." << endl;
                }
                else{
                    cout <<  "No division led in sales. " << endl;
                }
                if (sales[0][1] > sales[1][1] && sales[0][1] > sales[2][1] &&
                        sales[0][1] > sales[3][1] && sales[0][1] > sales[4][1] 
                        && sales[0][1] > sales[5][1]){
                    cout << "Division one had the most sales." << endl;
                }
                else if (sales[1][1] > sales[0][1] && sales[1][1] > sales[2][1] &&
                        sales[1][1] > sales[3][1] && sales[1][1] > sales[4][1] 
                        && sales[1][1] > sales[5][1]){
                    cout << "Division two had the most sales." << endl;
                }
                else if (sales[2][1] > sales[0][1] && sales[2][1] > sales[1][1] &&
                        sales[2][1] > sales[3][1] && sales[2][1] > sales[4][1] 
                        && sales[2][1] > sales[5][1]){
                    cout << "Division three had the most sales." << endl;
                }
                else if (sales[3][1] > sales[0][1] && sales[3][1] > sales[2][1] &&
                        sales[3][1] > sales[1][1] && sales[3][1] > sales[4][1] 
                        && sales[3][1] > sales[5][1]){
                    cout << "Division four had the most sales." << endl;
                }
                else if (sales[4][1] > sales[0][1] && sales[4][1] > sales[1][1] &&
                        sales[4][1] > sales[3][1] && sales[4][1] > sales[2][1] 
                        && sales[4][1] > sales[5][1]){
                    cout << "Division five had the most sales." << endl;
                }
                else if (sales[5][1] > sales[0][1] && sales[5][1] > sales[1][1] &&
                        sales[5][1] > sales[3][1] && sales[5][1] > sales[2][1] 
                        && sales[5][1] > sales[4][1]){
                    cout << "Division six had the most sales." << endl;
                }
                else{
                    cout <<  "No division led in sales. " << endl;
                }
                if (sales[0][2] > sales[1][2] && sales[0][2] > sales[2][2] &&
                        sales[0][2] > sales[3][2] && sales[0][2] > sales[4][2] 
                        && sales[0][2] > sales[5][2]){
                    cout << "Division one had the most sales." << endl;
                }
                else if (sales[1][2] > sales[0][2] && sales[1][2] > sales[2][2] &&
                        sales[1][2] > sales[3][2] && sales[1][2] > sales[4][2] 
                        && sales[1][2] > sales[5][2]){
                    cout << "Division two had the most sales." << endl;
                }
                else if (sales[2][2] > sales[0][2] && sales[2][2] > sales[1][2] &&
                        sales[2][2] > sales[3][2] && sales[2][2] > sales[4][2] 
                        && sales[2][2] > sales[5][2]){
                    cout << "Division three had the most sales." << endl;
                }
                else if (sales[3][2] > sales[0][2] && sales[3][2] > sales[2][2] &&
                        sales[3][2] > sales[1][2] && sales[3][2] > sales[4][2] 
                        && sales[3][2] > sales[5][2]){
                    cout << "Division four had the most sales." << endl;
                }
                else if (sales[4][2] > sales[0][2] && sales[4][2] > sales[1][2] &&
                        sales[4][2] > sales[3][2] && sales[4][2] > sales[2][2] 
                        && sales[4][2] > sales[5][2]){
                    cout << "Division five had the most sales." << endl;
                }
                else if (sales[5][2] > sales[0][2] && sales[5][2] > sales[1][2] &&
                        sales[5][2] > sales[3][2] && sales[5][2] > sales[2][2] 
                        && sales[5][2] > sales[4][2]){
                    cout << "Division six had the most sales." << endl;
                }
                else{
                    cout <<  "No division led in sales. " << endl;
                }
                if (sales[0][3] > sales[1][3] && sales[0][3] > sales[2][3] &&
                        sales[0][3] > sales[3][3] && sales[0][3] > sales[4][3] 
                        && sales[0][3] > sales[5][3]){
                    cout << "Division one had the most sales." << endl;
                }
                else if (sales[1][3] > sales[0][3] && sales[1][3] > sales[2][3] &&
                        sales[1][3] > sales[3][3] && sales[1][3] > sales[4][3] 
                        && sales[1][3] > sales[5][3]){
                    cout << "Division two had the most sales." << endl;
                }
                else if (sales[2][3] > sales[0][3] && sales[2][3] > sales[1][3] &&
                        sales[2][3] > sales[3][3] && sales[2][3] > sales[4][3] 
                        && sales[2][3] > sales[5][3]){
                    cout << "Division three had the most sales." << endl;
                }
                else if (sales[3][3] > sales[0][3] && sales[3][3] > sales[2][3] &&
                        sales[3][3] > sales[1][3] && sales[3][3] > sales[4][3] 
                        && sales[3][3] > sales[5][3]){
                    cout << "Division four had the most sales." << endl;
                }
                else if (sales[4][3] > sales[0][3] && sales[4][3] > sales[1][3] &&
                        sales[4][3] > sales[3][3] && sales[4][3] > sales[2][3] 
                        && sales[4][3] > sales[5][3]){
                    cout << "Division five had the most sales." << endl;
                }
                else if (sales[5][3] > sales[0][3] && sales[5][3] > sales[1][3] &&
                        sales[5][3] > sales[3][3] && sales[5][3] > sales[2][3] 
                        && sales[5][3] > sales[4][3]){
                    cout << "Division six had the most sales." << endl;
                }
                else{
                    cout <<  "No division led in sales. " << endl;
                }
                break;
            }
            }
    }while(num);
  //End of program
    return 0;
}
void row(int day[][Days],int n){
    unsigned int lbs = 0, lbs2 = 0, lbs3 = 0;
    unsigned int lbs4 = 0, lbs5 = 0, lbs6 = 0;
    unsigned int lbs7 = 0;
    int monk1, monk2, monk3; //monkey to determine average
    float least = 1000000000;
    float most = 0;
    float avg = 0;
    cout << "Enter the number of pounds one monkey ate each day: ";
    //for loop for field
    for (int i = 0; i < n; i++){
        cin >> lbs >> lbs2 >> lbs3 >> lbs4 >> lbs5 >> lbs6 >> lbs7;
        cout << lbs << " " << lbs2 << " " << lbs3 << " ";
        cout << lbs4 << " " << lbs5 << " " << lbs6 << " ";
        cout << lbs7;
        cout << endl;

        if (i ==0){
           monk1 = lbs + lbs2 + lbs3 + lbs4 + lbs5 + lbs6 + lbs7; 
        }
        else if (i == 1){
           monk2 = lbs + lbs2 + lbs3 + lbs4 + lbs5 + lbs6 + lbs7; 
        }
        else if (i == 2){
           monk3 = lbs + lbs2 + lbs3 + lbs4 + lbs5 + lbs6 + lbs7; 
        }
    }
            avg = (monk1 + monk2 + monk3)/21.0;
    if (monk1 > monk2 && monk1 > monk3){
        cout << "The monkey that ate the most amount is monkey one." << endl;
    }
    else if (monk2 > monk1 && monk2 > monk3){
        cout << "The monkey that ate the most amount is monkey two." << endl;
    }
    else if (monk3 > monk2 && monk3 > monk1){
        cout << "The monkey that ate the most amount is monkey three." << endl;
    }
    else{
        cout << "Not one monkey ate more then the rest." << endl;
    }
    if (monk1 < monk2 && monk1 < monk3){
        cout << "The monkey that ate the least amount is monkey one." << endl;
    }
    else if (monk2 < monk1 && monk2 < monk3){
        cout << "The monkey that ate the least amount is monkey two." << endl;
    }
    else if (monk3 < monk2 && monk3 < monk1){
        cout << "The monkey that ate the least amount is monkey three." << endl;
    }
    else{
        cout << "Not one monkey ate less then the rest." << endl;
    }
    cout << "The average is " << avg << "." << endl;
}