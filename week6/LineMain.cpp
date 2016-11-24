#include <iostream>
#include "LineSegment.hpp"

int main()
{

    Point p1(4.3, 7.52);
    Point p2(-17.0, 1.5);
    LineSegment ls1(p1, p2);
    double length = ls1.length();
    double slope = ls1.slope();

    std::cout << "length: " << length << std::endl;
    std::cout << "Slope: " << slope << std::endl;
    
    Point p3(4.3, 5);
    Point p4(-17.0, 5);
    LineSegment ls2(p3, p4);
    length = ls2.length();
    slope = ls2.slope();

    std::cout << "length: " << length << std::endl;
    std::cout << "Slope: " << slope << std::endl;
    
    Point p5(10, 7.52);
    Point p6(10, 1.5);
    LineSegment ls3(p5, p6);
    length = ls3.length();
    slope = ls3.slope();

    std::cout << "length: " << length << std::endl;
    std::cout << "Slope: " << slope << std::endl;
    
    return 0;
}
