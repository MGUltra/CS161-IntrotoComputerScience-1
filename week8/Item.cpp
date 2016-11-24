/******************************************************
 * Author: Matt Garner
 * Date: 11/18/15
 * Description: Assignment 8 - this is the definition file
 * for the Item Class. It includes constructors, as well as
 * set and get methods for name, price, and quantity.
 * ****************************************************/

#include "Item.hpp"

/************ Constructors **************/

Item::Item()
{
   setName("");
   setPrice(0.0);
   setQuantity(0);
}

Item::Item(std::string inName, double inPrice, int inQuantity)
{
   setName(inName);
   setPrice(inPrice);
   setQuantity(inQuantity);
}


/********** Set Methods ***************/

// Set Name
void Item::setName(std::string inString)
{
    name = inString;
}

// Set Price
void Item::setPrice(double inDouble)
{
    price = inDouble;
}

// Set Item
void Item::setQuantity(int inInt)
{
    quantity = inInt;
}


/********** Get Methods ***************/

// Return Name
std::string Item::getName()
{
    return name;
}

// Return Price
double Item::getPrice()
{
    return price;
}

// Return Quantity
int Item::getQuantity()
{
    return quantity;
}

