/********************************************
 * Author: Matt Garner
 * Date: 11/18/15
 * Description: Assignment 8 - this is hte declaration
 * file for the ShoppingCart Class. It's private members
 * contain a pointer to Item array and an int to keep 
 * track of the array end. It also contains a constructor,
 * a function to add to the array and one to calculate
 * the total price.
 * ******************************************/

// Guards
#ifndef SHOPPINGCART_HPP
#define SHOPPINGCART_HPP

// include header file
#include "Item.hpp"

/********** ShoppingCart Class ************/

class ShoppingCart
{
private:

// Pointer to Item Array
   Item* array[100];

// Integer location of the end of array
   int arrayEnd;

public:

// default constructor
   ShoppingCart();
   
// add Item function taking a pointer as a paremeter
   void addItem(Item*);

// total price function.
   double totalPrice();
};

#endif
