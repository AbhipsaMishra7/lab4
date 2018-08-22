#include <iostream> // library
using namespace std ; // using stndard definition
int main () {
   int years,a, b, months, weeks, days ;
   cout << "enter the required time period in days" << endl ; // print in terminal
   cin >> days ; //enter value in terminal in terms of days
   years = days/365 ; // conversion formulas
   a = days%365 ;
   months = a/30 ;
   b= months%30;
   weeks = b/7 ;
   days =weeks%7 ;
   cout << "the entered number of days is equal to " << years << "years" << months << "months" << weeks << "weeks" << days << "days" << endl ;
   // prints converted value 
return 7 ; // returning integer value to int main function
            }

 
   
