/******************************************
 * Author: Matt Garner
 * Date: 10/14/15
 * Description: Project 3.a - User determines number of inputs,
 *              program then returns the min and max value.
 ******************************************/
#include <iostream>

int numQuantity; // number of integers to be input by user
int numValue; // variable for integers input by user

// minimum and maximum values
int minValue; 
int maxValue;

int main()
{
   //user chooses the number of integers to be input.
   std::cout << "How many integers would you like to enter?\n";
   std::cin >> numQuantity;

   //while loop ensuring the initial input remains valid
   while (numQuantity <=0) 
   {
        std::cout << "Invalid number of inputs.\n";
        std::cout << "How many integers would you like to enter?\n";
        std::cin  >> numQuantity;
   }
   
   //Begin entering integers
   std::cout << "Please enter " << numQuantity << " integers.\n";

/*run a loop testing the input integers for minumin and
 *maximum values. Repeat until the number of inputs matches
 *the quantity chosen by the user */

   while (numQuantity--)
   {
	std::cin >> numValue;
	
        if (numValue > maxValue)
           maxValue = numValue;
        if (numValue < minValue)
           minValue = numValue;
   }

   //Final min/max values printed to screen
   std::cout << "Min: " << minValue <<std::endl;
   std::cout << "Max: " << maxValue <<std::endl;

   return 0;
}
