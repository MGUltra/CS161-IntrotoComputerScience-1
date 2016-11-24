/*********************************************
 * Author: Matt Garner
 * Date: 11/18/15
 * Description: Assigment 8 - This is the definition 
 * file for the ShoppingCart Class.
 * *******************************************/

// include header file
#include "ShoppingCart.hpp"

// include cstdlib for NULL

#include <cstdlib>

/**********************************************
 *                ShoppingCart
 * This is the defaul constructor for the ShoppingCart
 * Class. It initializes arrayEnd to zero and iterates
 * through the array, assigning null to each location.
 * ********************************************/

ShoppingCart::ShoppingCart()
{
    arrayEnd = 0;

    for(int i=0; i<100; i++)
    {
       array[i] = NULL;
    }    
}

/***********************************************
 *                   addItem
 * This function adds items to the array.
 * It takes an pointer to item as a paremeter
 * and adds it to the array. It also updates the array end
 * to keep track of the end of the array.
 * *********************************************/

void ShoppingCart::addItem(Item* x)
{
    array[arrayEnd] = x;   
    arrayEnd++;
}

/***********************************************
 *                 totalPrice
 * This function calculates the total price of all
 * merchandise that has been added to the cart. It declares
 * a double for the total price and then iterates through the 
 * array and multiplies the price of the items with the quantity,
 * after dereferencing them. The loop iterates until reaching
 * the arrayEnd, at which time it returns the total price as
 * a double.
 * *********************************************/

double ShoppingCart::totalPrice()
{
    double totalPrice;

    for(int j=0; j<arrayEnd; j++)
    {
       totalPrice += ((*array[j]).getPrice() * (*array[j]).getQuantity());
    }

    return totalPrice;
}
