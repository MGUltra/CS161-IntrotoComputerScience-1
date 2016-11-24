/********************************************
 * Author: Matt Garner
 * Date: 10/7/15
 * Description: Assignment 2.b - converts Celsius temps to Fahrenheit
 * *****************************************/

#include <iostream>
using namespace std;

int main()
{
   double tempC; //name of input - float to preserve decimal

   cout << "Please enter a Celsius temperature.\n";
   cin  >> tempC;

   cout << "The equivalent Fahrenheit temperature is:\n";
   cout << ((double)9/5)*tempC+32 << endl; //C to F conversion formula. type cast 9/5 to preserve decimal

   return 0;
}
