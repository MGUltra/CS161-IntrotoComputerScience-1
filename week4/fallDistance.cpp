/*****************************
 * Author: Matt Garner
 * Date: 10/21/15
 * Description: 4.a a function that calculates fall distance
 * ***************************/

#include <cmath> // include for pow() function

using namespace std;

/*************************************************
 *                Fall Distance
 * This function calculates fall distance base on the
 * formula d = .5(g)(t^2) where d is falling distance,
 * in meters, g is gravity in meters per second, and t is
 * time in seconds. The function returns the fall distance
 * to the main function.
 *
 * ***********************************************/

double fallDistance(double t)
{

    double timeSq; //time squared value = t*t
    double d; //fall distance in meters

    timeSq = pow(t, 2.0); // t^2 in the falling formula
    d = 0.5*9.8*timeSq; //distance = .5(g)(t^2) -- g = 9.8

    return d; //return the fall distance value to main
}

/****************** TEST ************************
  int main()
{
    double t = 3; //time of fall in seconds
    double d = fallDistance(t);
    cout << "the fall distance is " << d << " meters." << endl;

    return 0;
}
******************* TEST ************************/
