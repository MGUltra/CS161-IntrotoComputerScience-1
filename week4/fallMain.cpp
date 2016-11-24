#include <iostream>

using namespace std;

double fallDistance(double);

int main()
{
   double dinosaur = 3;
   double parrot = fallDistance(dinosaur);
   cout << "The fall distance is " << parrot << " meters." << endl;

   return 0;
}
