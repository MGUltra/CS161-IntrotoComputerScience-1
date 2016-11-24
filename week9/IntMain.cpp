

#include <iostream>
#include "IntSet.hpp"

int main()
{

    IntSet setA;
    IntSet setB;
    IntSet setC;
    IntSet setD;
    IntSet setE;
    IntSet setF;

    setA.add(4);
    setA.add(5);
    setA.add(6);
    setA.add(12);

    setB.add(6);
    setB.add(5);
    setB.add(4);
    setB.add(11);
    setB.add(55);

    std::cout << "a size " << setA.size() << std::endl;
    std::cout << "b size " << setB.size() << std::endl;

    setA.addAll(setB);
    
    std::cout << "a size " << setA.size() << std::endl;
    std::cout << "b size " << setB.size() << std::endl;
    
    setA.removeDifferent(setB);

    std::cout << "a size " << setA.size() << std::endl;
    std::cout << "b size " << setB.size() << std::endl;

    setC.add(16);
    setC.add(15);
    setC.add(14);
    setC.add(13);
    setC.add(12);

    setD.add(10);
    setD.add(17);
    setD.add(18);
    setD.add(21);
    setD.add(22);

    std::cout << "C size " << setC.size() << std::endl;
    std::cout << "D size " << setD.size() << std::endl;

    setC.removeDifferent(setD);

    std::cout << "C size " << setC.size() << std::endl;
    std::cout << "D size " << setD.size() << std::endl;

    setC.addAll(setD);

    std::cout << "C size " << setC.size() << std::endl;
    std::cout << "D size " << setD.size() << std::endl;

    setD.removeSame(setC);

    std::cout << "C size " << setC.size() << std::endl;
    std::cout << "D size " << setD.size() << std::endl;

    


/*
    setA.add(23);
    setA.add(24);
    setA.add(25);
    setA.add(26);
    setA.add(27);
    setA.add(28);
    setA.add(29);
    setA.add(30);
    setA.add(31);
    setA.add(32);

    setA.add(33);
    setA.add(34);
    setA.add(35);
    setA.add(36);
    setA.add(37);
    setA.add(38);

    if(setA.contains(33))
      std::cout << "yes" << std::endl;

    std::cout << "a size " << setA.size() << std::endl;
    std::cout << "b size " << setB.size() << std::endl;

    setA.removeDifferent(setB);

   // setA.remove(4);

    std::cout << "a size " << setA.size() << std::endl;
    std::cout << "b size " << setB.size() << std::endl;
*/
    return 0;
}
