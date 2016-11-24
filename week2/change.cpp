/**************************************
 * Author: Matt Garner
 * Date: 10/7/15
 * Description: Assignment 2.c - displays fewest number of coins in change
 * ***********************************/

#include <iostream>
using namespace std;

int main()
{
   int cents; //input variable

   //Currency denomination values
   const int quarter=25;
   const int dime   =10;
   const int nickel = 5;
   const int penny  = 1;
   
   cout << "Please enter an amount in cents less than a dollar\n";
   cin >> cents;   
   cout << "Your change will be:\n";

   // Calculate the quantity of each coin, from largest to smallest denomination for any input between 0-99
   cout << "Q: " << (cents/quarter)                       << endl; //Quarters
   cout << "D: " << (cents%quarter)/dime                  << endl; //Dimes
   cout << "N: " << ((cents%quarter)%dime)/nickel         << endl; //Nickels
   cout << "P: " << (((cents%quarter)%dime)%nickel)/penny << endl; //Pennys

   return 0;
}
