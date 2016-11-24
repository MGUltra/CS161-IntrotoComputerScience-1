/***************************************
 * Author: Matt Garner
 * Date: 10/7/15
 * Description: Assignment 2.a - Displays the average of 5 numbers
 * ************************************/

#include <iostream>
using namespace std;

int main()
{
   //identify the five numbers that will be input
   double n1;
   double n2;
   double n3;
   double n4;
   double n5;

   cout << "Please enter five numbers.\n";
   
   //user input the 5 numbers
   cin >> n1;
   cin >> n2;
   cin >> n3;
   cin >> n4;
   cin >> n5;

   cout << "The average of those numbers is:\n";

   //calculate the average of the numbers
   cout << (n1+n2+n3+n4+n5)/5 << endl;

   return 0;
}
