#include <iostream> //library
using namespace std ; // using standard definition
int main () { // taking int as main function
   float theta1 , theta2, theta3 ; // defining float variables
   cout << "enter value of theta1" << endl ;//print in terminal
   cout << "enter value of theta2" << endl ; 
   cin >> theta1;// ask for values to user
   cin >> theta2;
   theta3=180-(theta1 + theta2) ; // formula
   cout << "value of the third angle is " << theta3 << endl ;
return 7 ; // return integer value to int main function
     }
