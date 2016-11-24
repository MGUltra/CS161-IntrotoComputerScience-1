#include <iostream>
#include "Box.hpp"

int main()
{
   Box boxxie;
   Box Box2(3,3,3);
/*   
   double larngth = 10;
   double wardth = 5;
   double hardth = 15;
*/
   double l;
   double w;
   double h;

   std::cout << "enter length" << std::endl;
   std::cin >> l;
   std::cout << "enter width" << std::endl;
   std::cin >> w;
   std::cout << "enter height" << std::endl;
   std::cin >> h;


   boxxie.setWidth(w);
   boxxie.setHeight(h);
   boxxie.setLength(l);


  // boxxie(l,w,h);

   std::cout << "Volume: " << boxxie.getVolume() << std::endl;
   std::cout << "Surface Area: " << boxxie.getSurfaceArea() << std::endl;

   std::cout << "Volume: " << Box2.getVolume() << std::endl;
   std::cout << "Surface Area: " << Box2.getSurfaceArea() << std::endl;

   return 0;
}
