/*********************************
 * Author: Matt Garner
 * Date: 10/28/15
 * Description: 5.a This is the declaration file for the class we are
 * constructing for this assignment.
 * *******************************/

//include guards
#ifndef BOX_HPP
#define BOX_HPP

class Box //create class
{

//private variables used within class
private:

    double height;
    double width;
    double length;

public:
    Box(); //default constructor

    Box(double, double, double); //initializing constructor

    void setHeight(double); //set height function

    void setWidth(double); //set width function

    void setLength(double); //set length function

    double getVolume(); //function calculates volume

    double getSurfaceArea(); //function calculates surface area
};
#endif
