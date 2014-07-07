/* 
* File:   main.cpp
* Author: David Snow
* Created on June 30, 2014, 11:55 AM
*/
//System Libraries
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
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
            cout << "5 for Problem 6" << endl;
            cout << "6 for Problem 7" << endl;
            cin >> num;
            cin.ignore();
        }while( num < 0 || num > 6);
      //Problems for homework
        switch(num){
            case 1:
                cout<<"Problem 1"<<endl;
                //problem variables
                char R, P, S, r, p, s; //Rock, Paper, Scissors
                char pChoice; //player one choice
                char sChoice; //player two choice
                char replay; //replay variable
                //setting variables equal a value
                P = 'P';
                S = 'S';
                R = 'R';
                r = 'r';
                p = 'p';
                s = 's';
                cout << "Player 1: Enter R for Rock, P for Paper, or S for Scissors ";
                cin >> pChoice;
                cout << "Player 2: Enter R for Rock, P for Paper, or S for Scissors ";
                cin >> sChoice;
                //picking a winner
                if ((sChoice == P && pChoice == P)||(sChoice == p && pChoice == p)){
                    cout << "The game is a draw. Nobody Wins." << endl;
                    cout << "Play Again? Y/N ";
                    cin >> replay;
                }
                else if ((sChoice == R && pChoice == R)||(sChoice == r && pChoice == r)){
                    cout << "The game is a draw. Nobody Wins." << endl;
                    cout << "Play Again? Y/N ";
                    cin >> replay;
                }
                else if ((sChoice == S && pChoice == S)||(sChoice == s && pChoice == s)){
                    cout << "The game is a draw. Nobody Wins." << endl;
                    cout << "Play Again? Y/N ";
                    cin >> replay;
                }
                else if ((sChoice == P && pChoice == S)||(sChoice == p && pChoice == s)){
                    cout << "Scissors beats Paper. Player 1 wins." << endl;
                    cout << "Play Again? Y/N ";
                    cin >> replay;
                }
                else if ((sChoice == S && pChoice == P)||(sChoice == s && pChoice == p)){
                    cout << "Scissors beats Paper. Player 2 wins." << endl;
                    cout << "Play Again? Y/N ";
                    cin >> replay;
                }
                else if ((sChoice == R && pChoice == P)||(sChoice == r && pChoice == p)){
                    cout << "Paper beats Rock. Player 2 wins." << endl;
                    cout << "Play Again? Y/N ";
                    cin >> replay;
                }
                else if ((sChoice == P && pChoice == R)||(sChoice == p && pChoice == r)){
                    cout << "Paper beats Rock. Player 1 wins." << endl;
                    cout << "Play Again? Y/N ";
                    cin >> replay;
                }
                else if ((sChoice == S && pChoice == R)||(sChoice == s && pChoice == r)){
                    cout << "Rock beats Scissors. Player 2 wins." << endl;
                    cout << "Play Again? Y/N ";
                    cin >> replay;
                }
                else if ((sChoice == R && pChoice == S)||(sChoice == r && pChoice == s)){
                    cout << "Rock beats Scissors. Player 1 wins." << endl;
                    cout << "Play Again? Y/N ";
                    cin >> replay;
                }
                else{
                    cout << "A invalid character was entered." << endl;
                    cout << "Play Again? Y/N ";
                    cin >> replay;
                }
                //redo variables
                while (replay == 'Y'||replay =='y'){
                    cout << "Player 1: Enter R for Rock, P for Paper, or S for Scissors ";
                    cin >> pChoice;
                    cout << "Player 2: Enter R for Rock, P for Paper, or S for Scissors ";
                    cin >> sChoice;
                if ((sChoice == P && pChoice == P)||(sChoice == p && pChoice == p)){
                    cout << "The game is a draw. Nobody Wins." << endl;
                    cout << "Play Again? Y/N ";
                    cin >> replay;
                }
                else if ((sChoice == R && pChoice == R)||(sChoice == r && pChoice == r)){
                    cout << "The game is a draw. Nobody Wins." << endl;
                    cout << "Play Again? Y/N ";
                    cin >> replay;
                }
                else if ((sChoice == S && pChoice == S)||(sChoice == s && pChoice == s)){
                    cout << "The game is a draw. Nobody Wins." << endl;
                    cout << "Play Again? Y/N ";
                    cin >> replay;
                }
                else if ((sChoice == P && pChoice == S)||(sChoice == p && pChoice == s)){
                    cout << "Scissors beats Paper. Player 1 wins." << endl;
                    cout << "Play Again? Y/N ";
                    cin >> replay;
                }
                else if ((sChoice == S && pChoice == P)||(sChoice == s && pChoice == p)){
                    cout << "Scissors beats Paper. Player 2 wins." << endl;
                    cout << "Play Again? Y/N ";
                    cin >> replay;
                }
                else if ((sChoice == R && pChoice == P)||(sChoice == r && pChoice == p)){
                    cout << "Paper beats Rock. Player 2 wins." << endl;
                    cout << "Play Again? Y/N ";
                    cin >> replay;
                }
                else if ((sChoice == P && pChoice == R)||(sChoice == p && pChoice == r)){
                    cout << "Paper beats Rock. Player 1 wins." << endl;
                    cout << "Play Again? Y/N ";
                    cin >> replay;
                }
                else if ((sChoice == S && pChoice == R)||(sChoice == s && pChoice == r)){
                    cout << "Rock beats Scissors. Player 2 wins." << endl;
                    cout << "Play Again? Y/N ";
                    cin >> replay;
                }
                else if ((sChoice == R && pChoice == S)||(sChoice == r && pChoice == s)){
                    cout << "Rock beats Scissors. Player 1 wins." << endl;
                    cout << "Play Again? Y/N ";
                    cin >> replay;
                }
                else{
                    cout << "A invalid character was entered." << endl;
                    cout << "Play Again? Y/N ";
                    cin >> replay;
                }
                }
                cout<<"End of problem"<<endl;
                break;
            case 2:
                cout << "Problem 2" << endl;
                //variables
                float Balance, nBal, cBal;//input, nBal is a temp variable for the loop
                float iRate; //iRate is interest rate amount
                float tAmont; //total amount
                float nAmont; //new balance after rate
                char redo; //redo
                cout << "Input the balance of the account: ";
                cin >> Balance;
                if (Balance > 1000){
                    nBal = 1000 * .015;//calculation for interest first 1000
                    cBal = Balance - 1000;
                    nAmont = cBal *.1;
                    iRate = 2.5;               
                    tAmont = nBal + nAmont + Balance;
                    cout << "The total interest due is " << iRate << endl;
                    cout << "The total amount due is " << tAmont << endl;
                    cout << "Redo? Y/N ";
                    cin >> redo;
                            
                }
                else {
                    cBal = cBal * .015;//calculation for interest less than 1000
                    iRate = 1.5;               
                    tAmont = cBal + Balance;
                    cout << "The total interest due in percent is " << iRate << endl;
                    cout << "The total amount due is " << tAmont << endl;
                    cout << "Redo? Y/N ";
                    cin >> redo;
                }
                while (redo == 'y'||redo =='y'){
                        cout << "Input the balance of the account: ";
                        cin >> Balance;
                if (Balance > 1000){
                    nBal = 1000 * 1.5e-2;//calculation for interest first 1000
                    cBal = Balance - 1000;
                    nAmont = cBal *1.0e-1;
                    iRate = 2.5;               
                    tAmont = nBal + nAmont + Balance;
                    cout << "The total interest due is " << iRate << endl;
                    cout << "The total amount due is " << tAmont << endl;
                    cout << "Redo? Y/N ";
                    cin >> redo;         
                }
                else {
                    cBal = Balance * .015;//calculation for interest less than 1000
                    iRate = 1.5;               
                    tAmont = cBal + Balance;
                    cout << "The total interest due in percent is " << iRate << endl;
                    cout << "The total amount due is " << tAmont << endl;
                    cout << "Redo? Y/N ";
                    cin >> redo;
                }
                }
                break;
            case 3:
                cout << "Problem 3" << endl;
                //variables
                short month; //months
                short days; //days of the year
                char redone; //retry variable
                cout << "Input the month you were born in numbers: December = 12 ";
                cin >> month;
                cout << "Input the day of the month you were born:";
                cin >> days;
                //calculating the horoscope
                if (month == 12 &&  days > 22 || month == 1 && days < 19){
                    cout << "You are a Capricorn.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (month == 2 && days > 22 ||month == 3 && days < 17 ){
                    cout << "You are a Pisces.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (month == 1 && days > 20 || month == 2 && days < 18 ){
                    cout << "You are a Aquarius.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (month == 3 && days > 21 || month == 4 && days < 19  ){
                    cout << "You are a Aries.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (month == 4 && days > 20 ||month == 5 && days < 20 ){
                    cout << "You are a Taurus.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (month == 5 && days > 21 ||month == 6 && days < 21 ){
                    cout << "You are a Gemini.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (month == 6 && days > 22 ||month == 7 && days < 22 ){
                    cout << "You are a Cancer.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (month == 7 && days > 23 ||month == 8 && days < 23 ){
                    cout << "You are a Leo.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (month == 8 && days > 23 ||month == 9 && days < 22 ){
                    cout << "You are a Virgo.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (month == 9 && days > 23 ||month == 10 && days < 22 ){
                    cout << "You are a Libra.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (month == 10 && days > 23 ||month == 11 && days < 21 ){
                    cout << "You are a Scorpio.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (month == 11 && days > 22 ||month == 12 && days < 21 ){
                    cout << "You are a Sagittarius.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else {
                    cout << "You entered a invalid number.";\
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                
                //redo loop
                while(redone == 'y' || redone == 'Y'){
                    cout << "Input the month you were born in numbers: December = 12 ";
                    cin >> month;
                    cout << "Input the day of the month you were born:";
                    cin >> days;
                //calculating the horoscope
                if (month == 12 &&  days > 22 || month == 1 && days < 19){
                    cout << "You are a Capricorn.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (month == 2 && days > 22 ||month == 3 && days < 17 ){
                    cout << "You are a Pisces.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (month == 1 && days > 20 || month == 2 && days < 18 ){
                    cout << "You are a Aquarius.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (month == 3 && days > 21 || month == 4 && days < 19  ){
                    cout << "You are a Aries.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (month == 4 && days > 20 ||month == 5 && days < 20 ){
                    cout << "You are a Taurus.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (month == 5 && days > 21 ||month == 6 && days < 21 ){
                    cout << "You are a Gemini.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (month == 6 && days > 22 ||month == 7 && days < 22 ){
                    cout << "You are a Cancer.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (month == 7 && days > 23 ||month == 8 && days < 23 ){
                    cout << "You are a Leo.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (month == 8 && days > 23 ||month == 9 && days < 22 ){
                    cout << "You are a Virgo.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (month == 9 && days > 23 ||month == 10 && days < 22 ){
                    cout << "You are a Libra.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (month == 10 && days > 23 ||month == 11 && days < 21 ){
                    cout << "You are a Scorpio.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (month == 11 && days > 22 ||month == 12 && days < 21 ){
                    cout << "You are a Sagittarius.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else {
                    cout << "You entered a invalid number.";\
                    cout << "Redo? Y/N";
                    cin >> redone;
                }               
                }
                break;
            case 4:
                cout << "Problem 4" << endl;
                //variables
                short mon; //months
                short day; //days of the year
                cout << "Input the month you were born in numbers: December = 12 ";
                cin >> mon;
                cout << "Input the day of the month you were born:";
                cin >> day;
                //calculating the horoscope
                if (mon == 12 &&  day > 22 || mon == 1 && day < 19){
                    cout << "You are a Capricorn. ";
                    cout << "You are compatible with Taurus and Virgo.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (mon == 2 && day > 22 ||mon == 3 && day < 17 ){
                    cout << "You are a Pisces. ";
                    cout << "You are compatible with Cancer and Scorpio.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (mon == 1 && day > 20 || mon == 2 && day < 18 ){
                    cout << "You are a Aquarius. ";
                    cout << "You are compatible with Gemini and Libra.";
                    cin >> redone;
                }
                else if (mon == 3 && day > 21 || mon == 4 && day < 19  ){
                    cout << "You are a Aries. ";
                    cout << "You are compatible with Sagittarius and Leo.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (mon == 4 && day > 20 ||mon == 5 && day < 20 ){
                    cout << "You are a Taurus. ";
                    cout << "You are compatible with Virgo and Capricorn.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (mon == 5 && day > 21 ||mon == 6 && day < 21 ){
                    cout << "You are a Gemini. ";
                    cout << "You are compatible with Libra Aquarius.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (mon == 6 && day > 22 ||mon == 7 && day < 22 ){
                    cout << "You are a Cancer. ";
                    cout << "You are compatible with Scorpio and Pisces.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (mon == 7 && day > 23 ||mon == 8 && day < 23 ){
                    cout << "You are a Leo. ";
                    cout << "You are compatible with Aries and Sagittarius.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (mon == 8 && day > 23 ||mon == 9 && day < 22 ){
                    cout << "You are a Virgo. ";
                    cout << "You are compatible with Taurus and Capricorn.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (mon == 9 && day > 23 ||mon == 10 && day < 22 ){
                    cout << "You are a Libra. ";
                    cout << "You are compatible with Gemini and Aquarius.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (mon == 10 && day > 23 ||mon == 11 && day < 21 ){
                    cout << "You are a Scorpio. ";
                    cout << "You are compatible with Cancer and Pisces.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (mon == 11 && day > 22 ||mon == 12 && day < 21 ){
                    cout << "You are a Sagittarius. ";
                    cout << "You are compatible with Aries and Leo.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else {
                    cout << "You entered a invalid number.";\
                    cout << "Redo? Y/N";
                    cin >> redone;
                }           
                //redo loop
                while (redone =='y'||redone=='Y'){
                cout << "Input the month you were born in numbers: December = 12 ";
                cin >> mon;
                cout << "Input the day of the month you were born:";
                cin >> day;
                //calculating the horoscope
                if (mon == 12 &&  day > 22 || mon == 1 && day < 19){
                    cout << "You are a Capricorn. ";
                    cout << "You are compatible with Taurus and Virgo.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (mon == 2 && day > 22 ||mon == 3 && day < 17 ){
                    cout << "You are a Pisces. ";
                    cout << "You are compatible with Cancer and Scorpio.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (mon == 1 && day > 20 || mon == 2 && day < 18 ){
                    cout << "You are a Aquarius. ";
                    cout << "You are compatible with Gemini and Libra.";
                    cin >> redone;
                }
                else if (mon == 3 && day > 21 || mon == 4 && day < 19  ){
                    cout << "You are a Aries. ";
                    cout << "You are compatible with Sagittarius and Leo.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (mon == 4 && day > 20 ||mon == 5 && day < 20 ){
                    cout << "You are a Taurus. ";
                    cout << "You are compatible with Virgo and Capricorn.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (mon == 5 && day > 21 ||mon == 6 && day < 21 ){
                    cout << "You are a Gemini. ";
                    cout << "You are compatible with Libra Aquarius.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (mon == 6 && day > 22 ||mon == 7 && day < 22 ){
                    cout << "You are a Cancer. ";
                    cout << "You are compatible with Scorpio and Pisces.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (mon == 7 && day > 23 ||mon == 8 && day < 23 ){
                    cout << "You are a Leo. ";
                    cout << "You are compatible with Aries and Sagittarius.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (mon == 8 && day > 23 ||mon == 9 && day < 22 ){
                    cout << "You are a Virgo. ";
                    cout << "You are compatible with Taurus and Capricorn.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (mon == 9 && day > 23 ||mon == 10 && day < 22 ){
                    cout << "You are a Libra. ";
                    cout << "You are compatible with Gemini and Aquarius.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (mon == 10 && day > 23 ||mon == 11 && day < 21 ){
                    cout << "You are a Scorpio. ";
                    cout << "You are compatible with Cancer and Pisces.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else if (mon == 11 && day > 22 ||mon == 12 && day < 21 ){
                    cout << "You are a Sagittarius. ";
                    cout << "You are compatible with Aries and Leo.";
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                else {
                    cout << "You entered a invalid number.";\
                    cout << "Redo? Y/N";
                    cin >> redone;
                }
                }
                break;
            case 5:
                cout << "Problem 6" << endl;
                //variables
                int a,b,c; //inputs
                float root1, root2; //outputs
                cout << "Enter the first number of the quadratic equation ";
                cin >> a;
                cout << "Enter the Second number of the quadratic equation ";
                cin >> b;
                cout << "Enter the third number of the quadratic equation ";
                cin >> c;               
                //determining the roots
                if (b * b - (4 * a * c) > 0){
                   root1 = (-b + sqrt(b * b - (4 * a * c)))/(2*a);
                   root2 = (-b - sqrt(b * b - (4 * a * c)))/(2*a);
                   cout << "The first root is " << root1 << endl;
                   cout << "The second root is " << root2 << endl;
                   cout << "Redo? Y/N";
                   cin >> redo;
                }
                else if (b * b - (4 * a * c) < 0){
                   cout << "The Problem has two complex roots." << endl;
                   cout << "Redo? Y/N";
                   cin >> redo;
                }
                else {
                   root1 = (-b + sqrt(b * b - (4 * a * c)))/(2*a);
                   cout << "The only root is " << root1 << endl;
                   cout << "Redo? Y/N";
                   cin >> redo;
                }
                while (redo =='Y'||redo =='y'){
                                    cout << "Enter the first number of the quadratic equation ";
                cin >> a;
                cout << "Enter the Second number of the quadratic equation ";
                cin >> b;
                cout << "Enter the third number of the quadratic equation ";
                cin >> c;
                if (b * b - (4 * a * c) > 0){
                   root1 = (-b + sqrt(b * b - (4 * a * c)))/(2*a);
                   root2 = (-b - sqrt(b * b - (4 * a * c)))/(2*a);
                   cout << "The first root is " << root1 << endl;
                   cout << "The second root is " << root2 << endl;
                   cout << "Redo? Y/N";
                   cin >> redo;
                }
                else if (b * b - (4 * a * c) < 0){
                   cout << "The Problem has two complex roots." << endl;
                   cout << "Redo? Y/N";
                   cin >> redo;
                }
                else {
                   root1 = (-b + sqrt(b * b - (4 * a * c)))/(2*a);
                   cout << "The only root is " << root1 << endl;
                   cout << "Redo? Y/N";
                   cin >> redo;
                }
                }
                break;
            case 6:
                cout << "Problem 10" << endl;
                break;
        }
    }while(num);
  //End of program
    return 0;
}
