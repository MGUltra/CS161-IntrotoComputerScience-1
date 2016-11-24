/**************************************************
 * Author: Matt Garner
 * Date: 11/4/15
 * Discription: This files is the function definitions for the
 *              Point class. 
 **************************************************/              

#include <cmath> //includ for pow and sqrt
#include "Point.hpp" //include declaration file

//Default constructor. initializes set methods to 0.
Point::Point() 
{
   setXCoord(0);
   setYCoord(0);
}

//Constructor. initializes set methods to parameters.
Point::Point(double x, double y)
{
   setXCoord(x);
   setYCoord(y);
}

//Set method for xCoord private variable
void Point::setXCoord(double x)
{
   xCoord = x;  
}

//Set method for yCoord private variable
void Point::setYCoord(double y)
{
   yCoord = y;
}

//Get method for xCoord private variable
double Point::getXCoord()
{
   return xCoord;
}

//Get method for yCoord private variable
double Point::getYCoord()
{
   return yCoord;
}

/***********************************************
 *                  distanceTo
 * This function uses the distance formula to calculate
 * the distance between two points, and returns that 
 * value as a double.
 * ********************************************/
double Point::distanceTo(const Point &pointXY)
{   
   //Calculate distance between x values
   double xDist = std::pow(xCoord-pointXY.xCoord,2);
   
   //Calculate distance between y values
   double yDist = std::pow(yCoord-pointXY.yCoord,2);
   
   //Calculate distance by taking the square root of the sum
   //of X and Y distances.
   double distance = std::sqrt(xDist+yDist);

   return distance; //return distance
}


