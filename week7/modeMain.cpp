#include <vector>
#include <iostream>

int main()
{
   std::vector<int> findMode(int array[],int size);

   std::vector<int> theMode;

   int array1[] = {4, 2, 3, 1, 5};
   int array2[] = {13, 13, 13, 52, 52, 52, 52, 12, 12, 12};
   int array3[] = {-17, 89, 1, 89, -11, 2, -17, 1, -11};
   int array4[] = {99};

   theMode = findMode(array1, 5);
   int v1 = theMode.at(0);
   int v2 = theMode.at(2);
   int v3 = theMode.at(4);
   std::cout << "The mode is: " << v1 << " " << v2 << " " << v3 << std::endl;
   
   theMode = findMode(array2, 10);
   v1 = theMode.at(0);
   std::cout << "The mode is: " << v1 << std::endl;
    
   theMode = findMode(array4, 1);
   v1 = theMode.at(0);
   std::cout << "The mode is: " << v1 << std::endl;
  
   theMode = findMode(array3, 9);
   v1 = theMode.at(0);
   v2 = theMode.at(1);
   v3 = theMode.at(2);
   int v4 = theMode.at(3);
   std::cout << "The mode is: " << v1 << " " << v2 << " " << v3 << " " << v4 << std::endl;
 







   return 0;
}
