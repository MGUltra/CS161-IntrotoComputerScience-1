/********************************************
 * Author: Matt Garner
 * Date: 11/4/15
 * Description: This files is the declaration file for the 
 *      Point Class. This class establishes a point as two coordinates
 *      and can calculate the distance between two points.
 ********************************************/

//Guards
#ifndef POINT_HPP
#define POINT_HPP

class Point  //Class name
{
private: //Private variables

   double xCoord; //x-value of a point
   double yCoord; //y-calue of a point

public: //Public functions

   Point(); //default constructor
   
   Point(double, double); //constructor

   void setXCoord(double); //set method for the x-value variable

   void setYCoord(double); //set method for the y-value variable

   double getXCoord(); //get method for the x-value variable

   double getYCoord(); //get method for the y-value variable
 
   //distanceTo function, passes Point object 
   //through paremeter by constant reference
   double distanceTo(const Point&); 

}; 

#endif
