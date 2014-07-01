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
   int sumP,sumN, sumA; //sumP is sum of positives, sumN is sum of negatives
   int avgP, avgN, avgA; //sumA = sum of all numbers, avgP = average of positive
   //avgN = average of negatives, acgA = average of all numbers
   short P, N; //P = number of positive numbers, N + number of negative numbers
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
       P = 1;
       N = 0;
   }
   else{
       sumN = num1;
       sumP = 0;
       N = 1;
       P = 0;
   }
   if (num2 > 0){
       sumP = sumP + num2;
       P = P + 1;
   }
   else{
       sumN = sumN + num2;
       N = N + 1;
   }
   if (num3 > 0){
       sumP = sumP + num3;
       P = P + 1;
   }
   else{
       sumN = sumN + num3;
       N = N + 1;
   }
   if (num4 > 0){
       sumP = sumP + num4;
       P = P + 1;
   }
   else{
       sumN = sumN + num4;
       N = N + 1;
   }
   if (num5 > 0){
       sumP = sumP + num5;
       P = P + 1;
   }
   else{
       sumN = sumN + num5;
       N = N + 1;
   }
   if (num6 > 0){
       sumP = sumP + num6;
       P = P + 1;
   }
   else{
       sumN = sumN + num6;
       N = N + 1;
   }
   if (num7 > 0){
       sumP = sumP + num7;
       P = P + 1;
   }
   else{
       sumN = sumN + num7;
       N = N + 1;
   }
   if (num8 > 0){
       sumP = sumP + num8;
       P = P + 1;
   }
   else{
       sumN = sumN + num8;
       N = N + 1;
   }
   if (num9 > 0){
       sumP = sumP + num9;
       P = P + 1;
   }
   else{
       sumN = sumN + num9;
       N = N + 1;
   }
   if (num10 > 0){
       sumP = sumP + num10;
       P = P + 1;
   }
   else{
       sumN = sumN + num10;
       N = N + 1;
   }
   //calculations for average
   sumA = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10;
   avgN = sumN/N;
   avgP = sumP/P;
   avgA = sumA/10;
   //results
   cout << "Sum of the negative  are " << sumN << endl;
   cout << "Sum of the positive numbers are " << sumP << endl;
   cout << "The average of the negative  are " << avgN << endl;
   cout << "The average of the positive numbers are " << avgP << endl;
   cout << "The sum of all the numbers are " << sumA << endl;
   cout << "The average of the sum of all the numbers are " << avgA;
   return 0;
}