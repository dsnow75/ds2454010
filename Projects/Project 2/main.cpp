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
void wPlace(int n, int x, int y, int z, int q, int w, int e, int r, float &s);
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
    //array
    int numCor[0];
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
                numCor[0] += 4;
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
                cout << numCor[0] << " is the total amount of correct guesses "
                        "during the game." << endl;
                output.open ("Score.dat");
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
                numCor[0] += 3;
                cout << "Three guesses are correct " << endl;
                score = score + 30.0;
                guess ++;
            }
            else if (guess1 == code1 && guess3 == code3 && guess4 == code4){
                numCor[0] += 3;
                cout << "Three guesses are correct " << endl;
                score = score + 30.0;
                guess ++;
            }
            else if (guess1 == code1 && guess2 == code2 && guess4 == code4){
                numCor[0] += 3;
                cout << "Three guesses are correct " << endl;
                score = score + 30.0;
                guess ++;
            }
            else if (guess1 == code1 && guess2 == code2 && guess3 == code3){
                numCor[0] += 3;
                cout << "Three guesses are correct " << endl;
                score = score + 30.0;
                guess ++;
            }
            else if (guess3 == code3 && guess4 == code4){
                numCor[0] += 2;
                cout << "Two guesses are correct " << endl;
                score = score + 20.0;
                guess ++;
            }

            else if (guess3 == code3 && guess4 == code4){
                numCor[0] += 2;
                cout << "Two guesses are correct " << endl;
                score = score + 20.0;
                guess ++;
            }
            else if (guess2 == code2 && guess4 == code4){
                numCor[0] += 2;
                cout << "Two guesses are correct " << endl;
                score = score + 20.0;
                guess ++;
            }
            else if (guess2 == code2 && guess3 == code3){
                numCor[0] += 2;
                cout << "Two guesses are correct " << endl;
                score = score + 20.0;
                guess ++;
            }
            else if (guess1 == code1 && guess4 == code4){
                numCor[0] += 2;
                cout << "Two guesses are correct " << endl;
                score = score + 20.0;
                guess ++;
            }
            else if (guess1 == code1 && guess3 == code3){
                numCor[0] += 2;
                cout << "Two guesses are correct " << endl;
                score = score + 20.0;
                guess ++;
            }
            else if (guess1 == code1 && guess2 == code2){
                numCor[0] += 2;
                cout << "Two guesses are correct " << endl;
                score = score + 20.0;
                guess ++;
            }
            else if (guess4 == code4){
                numCor[0] += 1;
                cout << "One guess is correct " << endl;
                score = score + 10.0;
                guess ++;
            }
            else if (guess3 == code3){
                numCor[0] += 1;
                cout << "One guess is correct " << endl;
                score = score + 10.0;
                guess ++;
            }
            else if (guess2 == code2){
                numCor[0] += 1;
                cout << "One guess is correct " << endl;
                score = score + 10.0;
                guess ++;
            }
            else if (guess1 == code1){
                numCor[0] += 1;
                cout << "One guess is correct " << endl;
                score = score + 10.0;
                guess ++;
            }
            else{
                cout << "No guess is correct" << endl;
                guess ++;
            }
            wPlace(guess1, guess2, guess3, guess4, 
                    code1, code2, code3, code4, score);
        }
        //determining if you lose
        if (guess == 11){
            cout << code1 << " ";
            cout << code2 << " ";
            cout << code3 << " ";
            cout << code4 << endl;
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
void wPlace(int n, int i, int x, int y, int q, int w, int e, int r, float &s){
    if (n != q && i != w && x != e && y != r 
            && (n == w || n == e || n == r)
            && (i == q || i == e || i == r) 
            && (x == w || x == q || x == r)
            && (y == w || y == e || y == q)){
        cout << "You got all four in the wrong place. " << endl;
        s = s + 20.0;
    }
    else if(n != q && i != w && x != e
            && (n == w || n == e || n == r)
            && (i == q || i == e || i == r) 
            && (x == w || x == q || x == r)){
        cout << "You got three in the wrong place. " << endl;
        s = s + 15.0;
    }
    else if(n != q && i != w && y != r
            && (n == w || n == e || n == r)
            && (i == q || i == e || i == r) 
            && (y == w || y == q || y == e)){
        cout << "You got three in the wrong place. " << endl;
        s = s + 15.0;
    }
    else if(n != q && y != r && x != e
            && (n == w || n == e || n == r)
            && (y == q || y == e || y == w) 
            && (x == w || x == q || x == r)){
        cout << "You got three in the wrong place. " << endl;
        s = s + 15.0;
    }
    else if(y != r && i != w && x != e
            && (y == w || y == e || y == q)
            && (i == q || i == e || i == r) 
            && (x == w || x == q || x == r)){
        cout << "You got three in the wrong place. " << endl;
        s = s + 15.0;
    }
    else if(y != r && x != e
            && (y == w || y == e || y == q)
            && (x == q || x == w || x == r)){
        cout << "You got two in the wrong place. " << endl;
        s = s + 10.0;
    }
    else if(y != r && i != w
            && (y == w || y == e || y == q)
            && (i == q || i == e || i == r)){
        cout << "You got two in the wrong place. " << endl;
        s = s + 10.0;
    }
    else if(y != r && n != q
            && (y == w || y == e || y == q)
            && (n == w || n == e || n == r)){
        cout << "You got two in the wrong place. " << endl;
        s = s + 10.0;
    }
    else if(x != e && i != w
            && (x == w || x == r || x == q)
            && (i == q || i == e || i == r)){
        cout << "You got two in the wrong place. " << endl;
        s = s + 10.0;
    }
    else if(x != e && n != q
            && (x == w || x == r || x == q)
            && (n == w || n == e || n == r)){
        cout << "You got two in the wrong place. " << endl;
        s = s + 10.0;
    }
    else if(i != w && n != q
            && (i == e || x == r || x == q)
            && (n == w || n == e || n == r)){
        cout << "You got two in the wrong place. " << endl;
        s = s + 10.0;
    }
    else if (n != q && 
       (n == w || n == e || n == r)){
        cout << "You have one guess in the wrong place. " << endl;
        s = s + 5.0;
    }
    else if (i != w && 
       (i == q || i == e || i == r)){
        cout << "You have one guess in the wrong place. " << endl;
        s = s + 5.0;
    }
    else if (x != e && 
       (x == w || x == q || x == r)){
        cout << "You have one guess in the wrong place. " << endl;
        s = s + 5.0;
    }
    else if (y != r && 
       (y == w || y == e || y == q)){
        cout << "You have one guess in the wrong place. " << endl;
        s = s + 5.0;
    }
}