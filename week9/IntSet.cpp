/********************************************************
 * Author: Matt Garner
 * Date: 11/25/15
 * Description: assignment 9 - This is the definition file for
 * the IntSet class, which holds a mathmatical set of integers.
 * ******************************************************/


#include "IntSet.hpp"
#include <iostream>

//default constructor

IntSet::IntSet()
{
    arrSize = 10;
    arr = new int[arrSize];
    arrQuantity = 0;
}

//destructor

IntSet::~IntSet()
{
    delete [] arr;
    arr = 0;
}


/****************************************************
 *                     Size
 * The size function returns the quantity of integers
 * currently present in the calling array.
 * **************************************************/

int IntSet::size()
{
    return arrQuantity;
}

/****************************************************
 *                    isEmpty
 * The isEmpty function returns a boolian values depending
 * on whether there are any values in the calling set.
 * True, if the array is empty, false if it has values.
 * **************************************************/

bool IntSet::isEmpty()
{
    if(arrQuantity == 0)
       return true;
    else
       return false;
}

/****************************************************
 *                     contains
 * The contains function takes an int as a paremeter
 * argument and then tests if it is currently in the set.
 * The function iterates through the array, testin the 
 * argument versus the values in the array. If the int 
 * is in the array, true is returned, if there is no 
 * match, false is returned.
 * **************************************************/

bool IntSet::contains(int num) const
{
    if(arrQuantity > 0)
    {
       for(int i=0; i < arrQuantity; i++)
       {
          if(arr[i] == num)
             return true;
       }
    }

    return false;
}


/*****************************************************
 *                       add
 * The add function allows the client to add integers 
 * to the set. The add function tests the integer against
 * the contenst of the array. If it is present, the int
 * passed by paremeter argument is not added. If it is not 
 * present, the int is added. If the array is full, the
 * function dynamically creates a new array twice the size,
 * copies the contents of the old array to the new, and then 
 * changes the pointer to the new array. The old array is deleted
 * ***************************************************/

void IntSet::add(int num)
{
    bool noMatch = true;

    for(int j = 0; j < arrQuantity; j++)
    {     
       if(num == arr[j])
       {
          noMatch = false;
       }
    }   
        
    if(noMatch)
    {
       if(arrQuantity == arrSize)
       {
           arrSize *= 2;
	   int* arrTemp;
	   arrTemp = new int[arrSize];

	   for(int x = 0; x < arrQuantity; x++)
	   {   
              arrTemp[x] = arr[x];
	   }

	   delete arr;
	   arr = arrTemp;
       }
       arr[arrQuantity] = num;
       arrQuantity++;
    }
}
  

/*****************************************************
 *                      Remove
 * 
 * ***************************************************/

void IntSet::remove(int num)
{
    for(int x = 0; x < arrQuantity; x++)
    {
       if(num == arr[x])
       {
          for(int i = x; i < arrQuantity-1; i++)
	  {
	     arr[i] = arr[i+1];
	  }

	  arrQuantity--;
       }
    }
}


/******************************************************
 *                      addAll
 * The addAll function adds all of the integers that are present
 * in the argument set to the calling set, if they are not 
 * already present. The add() function is called, and it is 
 * through that function that dulicate values are prevented
 * from being added to the calling array.
 * ****************************************************/

void IntSet::addAll(const IntSet& setX)
{
    if(setX.arrQuantity == 0)
       return;

    else
    {
       for(int i = 0; i < setX.arrQuantity; i++)
       {
          add(setX.arr[i]);
       }
    }
}


/*******************************************************
 *                   removeDifferent
 * The removeDifferent function removes all integers in
 * the calling set that don't also appear in the
 * argument set. The contains() function is used to test
 * the integers against the other set, and if there is a 
 * match, the remove() function is then called to remove
 * the integer from the calling set. The counter for the 
 * for loop must be decremented for every match since all
 * the values in the set then shift to close the gap of the
 * removed integer.
 * *****************************************************/

void IntSet::removeDifferent(const IntSet& setX)
{
    for(int i = 0; i < arrQuantity; i++)
    {
       if(setX.contains(arr[i]) == false)
       {  
	 remove(arr[i]);
	 i--;
       }
    }
}


/********************************************************
 *                      removeSame
 * the removeSame function removes all the integers in the 
 * calling set that also appear in the argument set. The for
 * loop iterates through the argument set and then the contains()
 * function is called to test the integers against one another
 * to find any matches. Any matching integers are then removed
 * from the calling function with the remove() function.
 * ******************************************************/

void IntSet::removeSame(const IntSet& setX)
{
    for(int i=0; i < setX.arrQuantity; i++)
       if(contains(setX.arr[i]))
          remove(setX.arr[i]);
}
