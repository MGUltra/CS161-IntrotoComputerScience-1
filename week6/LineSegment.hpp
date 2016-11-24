/*****************************************************
 * Author: Matt Garner
 * Date: 11/4/15
 * Description: This is the declaration file for the 
 * LineSegment Class. This class calculates the length
 * and slope of a line segment untilizing two Point
 * Objects
 * **************************************************/

//Guards
#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

#include "Point.hpp" //include Point class declaration file

class LineSegment //Class name
{
private: //Private Variables

    Point end1; //One end of a line segment. Point object
    Point end2; //another end of a line segment. Point object

public: //Public functions

    LineSegment(Point, Point); //constructor. two Point objects in parameter

    void setEnd1(Point); //Set method for End1 of line segment

    void setEnd2(Point); //Set method for End2 of line segment

    Point getEnd1(); //Get method for End1

    Point getEnd2(); //Get method for End2
    
    double length(); //function calculating length of line segment

    double slope(); //function calculating slope of line segment
};
#endif
