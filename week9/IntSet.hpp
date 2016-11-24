/**********************************************
 * Author: Matt Garner
 * Date: 11/25/15
 * Description: assignment 9 - This is the header files
 * for the IntSet class, which holds a mathmatical set 
 * of integers, and allows the client to modify the sets
 * in various ways.
 * ********************************************/

//guards
#ifndef INTSET_HPP
#define INTSET_HPP

class IntSet
{
private:
   
   //Pointer to int
   int* arr;

   // keeps track of the size of the array
   int arrSize;

   // keeps track of the quantity of values in the set
   int arrQuantity;

public:

   // default constructor
   IntSet();

   // destructor
   ~IntSet();

   // returns size of the array
   int size();
   
   // returns true if array is empty
   bool isEmpty();

   // returns true is argument integer is present in set
   bool contains(int) const;
   
   // adds an integer to set if it isn't there already
   void add(int);

   // removes int from set if it is present
   void remove(int);

   // adds values of argument set to calling set, if not present
   void addAll(const IntSet&);

   // removes integers from calling set that are not in argument set
   void removeDifferent(const IntSet&);

   // removes integers from calling set that are in argument set
   void removeSame(const IntSet&);

};

#endif
