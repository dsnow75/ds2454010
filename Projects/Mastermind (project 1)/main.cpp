/* 
 * File:   main.cpp
 * Author: David-Snow
 *
 * Created on July 13, 2014, 6:27 PM
 */
//system libraries
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Starts Here!
int main(int argc, char** argv) {
    //variables
    float Score; //score counter
    int guess; //number of guesses allowed
    //code to guess
    short code1;
    short code2;
    short code3;
    short code4; 
    //guess variables
    int guess1;
    int guess2;
    int guess3;
    int guess4;
    //retry variable
    char redo; 
    do{
        Score = 0.0;
        guess = 1;
        srand(time(NULL));
        code1 = rand() % 4 + 1;
        code2 = rand() % 4 + 1;
        code3 = rand() % 4 + 1;
        code4 = rand() % 4 + 1;
        cout << code1 << " ";
        cout << code2 << " ";
        cout << code3 << " ";
        cout << code4 << endl;
        while (guess <= 10){
            //input guesses for code
            cout << "Input the first number you guess:(1-4) ";
            cin >> guess1;
            cout << "Input the second number you guess:(1-4) ";
            cin >> guess2;
            cout << "Input the third number you guess:(1-4) ";
            cin >> guess3;
            cout << "Input the fourth number you guess:(1-4) ";
            cin >> guess4;
            if (guess1 == code1 && guess2 == code2 && guess3 == code3
                    && guess4 == code4){
                cout << code1 << " ";
                cout << code2 << " ";
                cout << code3 << " ";
                cout << code4 << endl;
                cout << "All positions are correct. You Win!!! " << endl;
                cout << "It took you " << guess << " guesses. " << endl;
                for(int i  = 10; i >= guess; i--){
                    Score = Score + 50.0;
                }
                cout << "Your score is " << Score << endl;
                switch (guess){
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                        cout << "Congratulations!! You got it in half or"
                               " less of the number of guesses allowed" << endl;
                    default:
                        ;
                }
                break;
            }
            else if (guess2 == code2 && guess3 == code3 && guess4 == code4){
                cout << "Three guesses are correct " << endl;
                Score = Score + 30.0;
                guess ++;
            }
            else if (guess1 == code1 && guess3 == code3 && guess4 == code4){
                cout << "Three guesses are correct " << endl;
                Score = Score + 30.0;
                guess ++;
            }
            else if (guess1 == code1 && guess2 == code2 && guess4 == code4){
                cout << "Three guesses are correct " << endl;
                Score = Score + 30.0;
                guess ++;
            }
            else if (guess1 == code1 && guess2 == code2 && guess3 == code3){
                cout << "Three guesses are correct " << endl;
                Score = Score + 30.0;
                guess ++;
            }
            else if (guess3 == code3 && guess4 == code4){
                cout << "Two guesses are correct " << endl;
                Score = Score + 20.0;
                guess ++;
            }
            else if (guess3 == code3 && guess4 == code4){
                cout << "Two guesses are correct " << endl;
                Score = Score + 20.0;
                guess ++;
            }
            else if (guess2 == code2 && guess4 == code4){
                cout << "Two guesses are correct " << endl;
                Score = Score + 20.0;
                guess ++;
            }
            else if (guess2 == code2 && guess3 == code3){
                cout << "Two guesses are correct " << endl;
                Score = Score + 20.0;
                guess ++;
            }
            else if (guess1 == code1 && guess4 == code4){
                cout << "Two guesses are correct " << endl;
                Score = Score + 20.0;
                guess ++;
            }
            else if (guess1 == code1 && guess3 == code3){
                cout << "Two guesses are correct " << endl;
                Score = Score + 20.0;
                guess ++;
            }
            else if (guess1 == code1 && guess2 == code2){
                cout << "Two guesses are correct " << endl;
                Score = Score + 20.0;
                guess ++;
            }
            else if (guess4 == code4){
                cout << "One guess is correct " << endl;
                Score = Score + 10.0;
                guess ++;
            }
            else if (guess3 == code3){
                cout << "One guess is correct " << endl;
                Score = Score + 10.0;
                guess ++;
            }
            else if (guess2 == code2){
                cout << "One guess is correct " << endl;
                Score = Score + 10.0;
                guess ++;
            }
            else if (guess1 == code1){
                cout << "One guess is correct " << endl;
                Score = Score + 10.0;
                guess ++;
            }
            else{
                cout << "No guess is correct" << endl;
                guess ++;
            }
        }
        cout << "Retry? Y/N ";
        cin >> redo;
        
    }while (redo == 'y' || redo == 'Y');
    return 0;
}