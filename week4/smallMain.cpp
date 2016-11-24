#include <iostream>

using namespace std;

void smallSort(int&, int&, int&);

int main()
{
   
   int dog = 14;
   int cat = -90;
   int trex = 2;
/*
   cout << "integer a" << endl;
   cin >> a;
   cout << "integer b" << endl;
   cin >> b;
   cout << "integer c" << endl;
   cin >> c;
*/
   smallSort(dog, cat, trex);

   cout << dog << ", " << cat << ", " << trex << endl;

   return 0;
}
