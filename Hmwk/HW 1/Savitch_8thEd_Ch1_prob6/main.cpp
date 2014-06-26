/* 
* File:   main.cpp
* Author: David Snow
*
* Created on June 24, 2014, 1:09 PM
*/

//errors in system library

//addded space between iostream and >
//#include <iostream > 
//main.cpp:8:21: fatal error: iostream : No such file or directory

// left off <
//#include iostream>
//main.cpp:14:10: error: #include expects "FILENAME" or <FILENAME>

//system libraries
#include <iostream>
using namespace std;

//user libraries

//global constants

//function properties

//execution begins here

//errors in execution

//misspelled main
//int man(int argc, char** argv) {
///usr/lib/gcc/i686-pc-cygwin/4.7.3/../../../libcygwin.a(libcmain.o): In function `main':

//missing one parentheses
//int main int argc, char** argv) {
//make[2]: *** [build/Debug/Cygwin_4.x-Windows/main.o] Error 1

//no parentheses
//int main int argc, char** argv {
//make[2]: *** [build/Debug/Cygwin_4.x-Windows/main.o] Error 1

//misspelled cout
//cot << "Hello\n";
//main.cpp: In function ‘int main(int, char**)’:

//misspelled cin
//in >> number_of_pods;
//main.cpp: In function ‘int main(int, char**)’:

// no <<
//cout  "If you have ";
//main.cpp: In function ‘int main(int, char**)’:
// no ending bracket
//main.cpp: In function ‘int main(int, char**)’:

int main(int argc, char** argv) {
  //variables
  int number_of_pods, peas_per_pod, total_peas;
  //before input
  cout << "Hello\n";
  cout << "Press return after entering a number. \n";
  cout << "Enter the number of pods: \n";
  //input
  cin >> number_of_pods;
  //strings for input of peas in pod
  cout << "Enter the number of peas in the pod: \n";
  //number of peas in the pod
  cin >> peas_per_pod;
  //calculate total
  total_peas = number_of_pods * peas_per_pod;
  //strings
  cout << "If you have "; 
  cout << number_of_pods;
  cout << "pea pods\n";
  cout << "and ";
  cout << peas_per_pod;
  cout << " peas in each pod, then \n";
  cout << "you have ";
  cout << total_peas;
  cout << " peas in all the pods.\n";\
  cout << "Good-bye";
  return 0;
}