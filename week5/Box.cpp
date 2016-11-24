/*************************************************
 * Author: Matt Garner
 * Date: 10/28/15
 * Description: 5.a this is the implementation file for the box
 * class that we are constructing for this assignment
 * **********************************************/


#include "Box.hpp" //include box header file

//default constructor - sets values to one.
Box::Box()
{
   setLength(1);
   setWidth(1);
   setHeight(1);
}

//constructor initializing the variables
Box::Box(double lengthIn, double widthIn, double heightIn)
{ 
   setLength(lengthIn);
   setWidth(widthIn);
   setHeight(heightIn);
}

//Set method taking heightIn from client and sets it to height
void Box::setHeight(double heightIn)
{
   if (heightIn >= 0)
       height = heightIn;
}

//Set method taking widthIn from client and setting it to width
void Box::setWidth(double widthIn)
{
   if (widthIn >= 0)
       width = widthIn;
}

//Set method taking lengthIn from client and setting it to length
void Box::setLength(double lengthIn)
{
   if (lengthIn >= 0)
       length = lengthIn;
}

//get method which returns the volume of the box
double Box::getVolume()
{
   return length*width*height;
}

//get method which returns the suface area of the box
double Box::getSurfaceArea()
{
   return (2*(length*width))+(2*(length*height))+(2*(width*height));
}

