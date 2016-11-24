/**************************************************
 * Author: Matt Garner
 * Date: 11/4/15
 * Description:This is the function definition files
 *      for the LineSegment Class
 * ************************************************/

//include LineSegment class declaration file
#include "LineSegment.hpp"

//Constructor. Initializes both endpoints by sending Parameter Point
//objects to the set methods
LineSegment::LineSegment(Point p1, Point p2)
{
    setEnd1(p1);
    setEnd2(p2);
}

//Set method for end1 private variable
void LineSegment::setEnd1(Point p1)
{
    end1 = p1;
}

//Set method for end2 private variable
void LineSegment::setEnd2(Point p2)
{
    end2 = p2;
}

//Get method for end1 Private variable
Point LineSegment::getEnd1()
{
    return end1;
}

//Get method for end2 private variable
Point LineSegment::getEnd2()
{
    return end2;
}

/***************************************************
 *                      Length
 * length function calculates length of a line segment
 * by calling distanceTo function from Point clas.
 * *************************************************/

double LineSegment::length()
{
    return end1.distanceTo(end2);
}

/***************************************************
 *                     Slope
 * Slope function calculates the slope of a line segment
 * by using the slope formula M = (y-y1)/(x-x1) .
 * *************************************************/

double LineSegment::slope()
{
    //difference in Y values
    double rise = end1.getYCoord() - end2.getYCoord();
    
    //difference in X values
    double run =  end1.getXCoord() - end2.getXCoord();
    
    //return rise divided by run
    return rise/run;
}

