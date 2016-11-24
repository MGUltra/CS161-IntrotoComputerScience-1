#include <iostream>
#include "Point.hpp"



int main()
{
    std::cout << "p1: " << std::endl;

    Point p1(-1.5, 0.0);

    std::cout <<"should be -1.5 " << p1.getXCoord() << std::endl;
    std::cout <<"should be 0 " << p1.getYCoord() << std::endl;
    
    std::cout << "p2: " << std::endl;
    
    Point p2(1.5, 4.0);

    std::cout <<"should be 1.5 " << p2.getXCoord() << std::endl; 
    std::cout <<"should be 4.0 " << p2.getYCoord() << std::endl;
   
    std::cout << "p3: " << std::endl;

    Point p3;

    std::cout <<"should be 0 " << p3.getXCoord() << std::endl; 
    std::cout <<"should be 0 " << p3.getYCoord() << std::endl;
   
    std::cout << "p4: " << std::endl;

    Point p4;
     
    std::cout << "setting p4 to (5,9) " << std::endl;
    p4.setXCoord(5);
    p4.setYCoord(9);

    std::cout << "should be 5 " << p4.getXCoord() << std::endl;
    std::cout << "should be 9 " << p4.getXCoord() << std::endl;

    //std::cout << "Sum: " << std::endl;
    //std::cout << "should be 5.5 " << p2.getSum() << std::endl;

    double dist = p1.distanceTo(p2);

    std::cout << dist << std::endl;

    dist = p3.distanceTo(p4);

    std::cout << dist << std::endl;
/*
    std::cout << p1.getxCoord() << std::endl;
    std::cout << p1.getyCoord() << std::endl;
*/
    return 0;
}
