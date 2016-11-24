/********************************************
 * Author: Matt Garner
 * Date: 11/18/15
 * Description: Assignment 8:This is the declaration
 * file for the Item Class, which stores the name,
 * price, and quantity.
 * ******************************************/

// Guards
#ifndef ITEM_HPP
#define ITEM_HPP

// Include String
#include <string>

class Item
{
private:

   // Item name
   std::string name;

   // Item Price
   double price;

   // Item Quantity
   int quantity;

public:

   //Constructors
   Item();
   Item(std::string, double, int);

   //Set Methods - Name, Price, Quantity
   void setName(std::string);
   void setPrice(double);
   void setQuantity(int);

   //Get Methods - Name, Price, Quantity
   std::string getName();
   double getPrice();
   int getQuantity();

};

#endif
