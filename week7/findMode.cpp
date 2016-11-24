/**********************************************
 * Author: Matthew Garner
 * Date: 11/11/15
 * Description: assignment 7: this is a function
 * that takes an array as a paremeter and returns
 * a vector containing the mode or modes
 * ********************************************/

// included to use vectors.
#include <vector>

// included to use the sort function.
#include <algorithm>


/***********************************************
 *                   findMode
 * This function takes an array as a paremeter,
 * sorts it by ascending value, identifies the mode
 * or modes, and then returns them as a vector.
 * *********************************************/

std::vector<int> findMode(int numbers[], int size)
{

// the sort function orders the array by ascending value
    std::sort(numbers, numbers+size);

// this creates a vector named mode
    std::vector<int> mode;

// the variable that counts the quantity of matching number
    int matchCounter = 1;

// the variable for the maximun quanity a number appears in the array
    int maxFrequency = 1;

// the variable that counts
    int modeCounter  = 1;


/**********************************************
 * This for loop iterates through the array and counts
 * the ammount of times any given number appears and 
 * assigns the largest quantity to the maxFrequency
 * variable. Whatever the mode or modes are, this is the 
 * amount of times they appear in the array
 * ********************************************/

    for(int i = 0; i < size-1; i++)
    {
       if(numbers[i] == numbers[i+1])
       {
          matchCounter++;  
          
	  if(matchCounter > maxFrequency)
	  {
	     maxFrequency = matchCounter;
	  }
       }
       else
       matchCounter = 1;
    }
   

/***********************************************
 * This if statement executes if the modes only
 * appear once, in which case every integer in the
 * array is a mode. The nested for loop iterates
 * through the array, adding each number to the 
 * mode vector.
 * *********************************************/

    if(maxFrequency == 1)
    {
       for(int j = 0; j < size; j++)
       {
           mode.push_back(numbers[j]);
       }
    }


/***********************************************
 * In the case that the modes appear more than once
 * in the array, the following else statement executes.
 * It interates through the array, testing for matching 
 * numbers. For each match, the modeCounter counts up,
 * otherwise it is reset to zero. Each integer that
 * appears the same number of times as the maxFrequency
 * is added to the vector.
 * *********************************************/

    else
    {
       for(int j = 0; j < size-1; j++)
       {
          if(numbers[j] == numbers[j+1])
          {
	     modeCounter++;

	     if(maxFrequency == modeCounter)
	     {
                mode.push_back(numbers[j]);
	        modeCounter = 1;
	     }

          }
	  else
	     modeCounter = 1;
       }
    }
    
    // the modes are returned as a vector.
    return mode;
}
