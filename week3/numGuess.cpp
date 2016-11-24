/************************************
 * Author: Matt Garner
 * Date: 10/14/15
 * Description: Project 3.c - input a number to guess, 
 *              program will prompt to continue guessing until number found.
 ************************************/

 #include <iostream>

int number;      //number for player to guess
int guess;       //number that a player guessed
int guessLoop=0; //number of times a player guessed. starts at zero

 int main() 
 {
    std::cout << "Enter the number for the player to guess.\n";
    std::cin >> number; //User inputs number to be guessed
    std::cout << "Enter your guess.\n";
    
    while (guess != number) //loop continues until the guess matches input number
         {
	    std::cin >> guess; //input guess value
            guessLoop = guessLoop++; //counter for every loop

            //guess too high
	    if (guess > number)

               std::cout << "Too High - try again.\n";
	    
	    //guess too low
	    if (guess < number)

	       std::cout << "Too low - try again.\n";
	    
	    //correct guess
	    if (guess == number) 
	    {
	       std::cout << "You guessed it in ";
	       std::cout << guessLoop << " tries.\n";
	    }
         } 
    return 0;
 }
