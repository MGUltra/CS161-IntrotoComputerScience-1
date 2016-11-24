//Author: Matt Garner
//Date: September 27, 2015
//Description: CS 161 Assignment #1

#include <iostream>
#include <string>

// a simple program
int main()
{
   std::string faveAnimal;
   std::cout << "Please enter your favorite animal." << std::endl;
   std::cin >> faveAnimal;
   std::cout << "Your Favorite animal is the " << faveAnimal;
   std::cout << "." << std::endl;

   return 0;
}

