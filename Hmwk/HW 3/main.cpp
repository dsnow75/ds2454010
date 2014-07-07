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
    short num;
  //Display a Main Menu
    do{
        do{
            cout << "Choose your problem you want to look at" << endl;
            cout << "1 for Problem 1" << endl;
            cout << "2 for Problem 2" << endl;
            cout << "3 for Problem 3" << endl;
            cout << "4 for Problem 4" << endl;
            cout << "5 for Problem 5" << endl;
            cout << "6 for Problem 6" << endl;
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
                char Redo; //redo
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
                    cin >> Redo;
                            
                }
                else {
                    cBal = cBal * .015;//calculation for interest less than 1000
                    iRate = 1.5;               
                    tAmont = cBal + Balance;
                    cout << "The total interest due in percent is " << iRate << endl;
                    cout << "The total amount due is " << tAmont << endl;
                    cout << "Redo? Y/N ";
                    cin >> Redo;
                }
                while (Redo == 'y'||Redo =='y'){
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
                    cin >> Redo;         
                }
                else {
                    cBal = Balance * .015;//calculation for interest less than 1000
                    iRate = 1.5;               
                    tAmont = cBal + Balance;
                    cout << "The total interest due in percent is " << iRate << endl;
                    cout << "The total amount due is " << tAmont << endl;
                    cout << "Redo? Y/N ";
                    cin >> Redo;
                }
                }
                break;
            case 3:
                cout << "Problem 3" << endl;
                break;
            case 4:
                cout << "Problem 4" << endl;
                break;
            case 5:
                cout << "Problem 5" << endl;
                break;
            case 6:
                cout << "Problem 6" << endl;
                break;
        }
    }while(num);
  //End of program
    return 0;
}
