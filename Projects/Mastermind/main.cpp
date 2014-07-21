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
    float score; //score counter
    int guess; //number of guesses allowed
    //code to guess variables
    short code1;
    short code2;
    short code3;
    short code4; 
    //guess variables
    int guess1;
    int guess2;
    int guess3;
    int guess4;
    //file variable
    ifstream output;
    //retry variable
    char redo; 
    do{
        //pre - variable inputs
        score = 0.0;       
        guess = 1;
        //random code generator
        srand(time(NULL));
        code1 = rand() % 4 + 1;
        code2 = rand() % 4 + 1;
        code3 = rand() % 4 + 1;
        code4 = rand() % 4 + 1;
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
            //determining how many are correct and score they receive
            if (guess1 == code1 && guess2 == code2 && guess3 == code3
                    && guess4 == code4){
                cout << code1 << " ";
                cout << code2 << " ";
                cout << code3 << " ";
                cout << code4 << endl;
                cout << "All positions are correct. You Win!!! " << endl;
                cout << "It took you " << guess << " guesses. " << endl;
                for(int i  = 10; i >= guess; i--){
                    score = score + 50.0;
                }
                cout << "Your score is " << score << endl;
                output.open ("Score.txt");
                if (output.is_open()){
                    output >> score;
                    output.close ();
                }
                else{
                    cout << "The file is not open.";
                }
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
                score = score + 30.0;
                guess ++;
            }
            else if (guess1 == code1 && guess3 == code3 && guess4 == code4){
                cout << "Three guesses are correct " << endl;
                score = score + 30.0;
                guess ++;
            }
            else if (guess1 == code1 && guess2 == code2 && guess4 == code4){
                cout << "Three guesses are correct " << endl;
                score = score + 30.0;
                guess ++;
            }
            else if (guess1 == code1 && guess2 == code2 && guess3 == code3){
                cout << "Three guesses are correct " << endl;
                score = score + 30.0;
                guess ++;
            }
            else if (guess3 == code3 && guess4 == code4){
                cout << "Two guesses are correct " << endl;
                score = score + 20.0;
                guess ++;
            }

            else if (guess3 == code3 && guess4 == code4){
                cout << "Two guesses are correct " << endl;
                score = score + 20.0;
                guess ++;
            }
            else if (guess2 == code2 && guess4 == code4){
                cout << "Two guesses are correct " << endl;
                score = score + 20.0;
                guess ++;
            }
            else if (guess2 == code2 && guess3 == code3){
                cout << "Two guesses are correct " << endl;
                score = score + 20.0;
                guess ++;
            }
            else if (guess1 == code1 && guess4 == code4){
                cout << "Two guesses are correct " << endl;
                score = score + 20.0;
                guess ++;
            }
            else if (guess1 == code1 && guess3 == code3){
                cout << "Two guesses are correct " << endl;
                score = score + 20.0;
                guess ++;
            }
            else if (guess1 == code1 && guess2 == code2){
                cout << "Two guesses are correct " << endl;
                score = score + 20.0;
                guess ++;
            }
            else if (guess4 == code4){
                cout << "One guess is correct " << endl;
                score = score + 10.0;
                guess ++;
            }
            else if (guess3 == code3){
                cout << "One guess is correct " << endl;
                score = score + 10.0;
                guess ++;
            }
            else if (guess2 == code2){
                cout << "One guess is correct " << endl;
                score = score + 10.0;
                guess ++;
            }
            else if (guess1 == code1){
                cout << "One guess is correct " << endl;
                score = score + 10.0;
                guess ++;
            }
            else{
                cout << "No guess is correct" << endl;
                guess ++;
            }
        }
        //determining if you lose
        if (guess == 11){
            cout << "You lose!!!" << endl;
            cout << "Number of guesses was 10." << endl;
            cout << "Better luck next time." << endl;
            cout << "Your score is " << score << endl;
        }
        //Retry
        cout << "Retry? Y/N ";
        cin >> redo;
        
    }while (redo == 'y' || redo == 'Y');
    return 0;
}