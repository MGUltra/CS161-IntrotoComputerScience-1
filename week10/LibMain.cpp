#include <iostream>
#include <string>

#include "Library.hpp"

int main()
{
    std::cout << "hello" << std::endl;
  
    Book b1("123", "War and Peace", "Tolstoy");
    std::cout << "hello" << std::endl;
    Book b2("234", "Moby Dick", "Melville");
    std::cout << "hello" << std::endl;
    Book b3("345", "Phantom Tollbooth", "Juster");
    std::cout << "hello" << std::endl;
    Patron p1("abc", "Felicity");
    Patron p2("bcd", "Waldo");
    Library lib;
    lib.addBook(&b1);
    
    std::cout << "hello" << std::endl;

    lib.addBook(&b2);
    lib.addBook(&b3);
    lib.addPatron(&p1);
    lib.addPatron(&p2);
    lib.checkOutBook("bcd", "234");
    for (int i=0; i<7; i++)
       lib.incrementCurrentDate();
    std::cout << p2.getFineAmount() << std::endl;
    lib.checkOutBook("bcd", "123");
    lib.checkOutBook("abc", "345");
    for (int i=0; i<24; i++)
       lib.incrementCurrentDate();
    lib.payFine("bcd", 0.4);
    double p1Fine = p1.getFineAmount();
    double p2Fine = p2.getFineAmount();
    std::cout << p1Fine << std::endl;
    
    std::cout << p2Fine << std::endl;
    
    std::cout << lib.returnBook("123") << std::endl;
    
    std::cout << lib.returnBook("123") << std::endl;
    return 0;
}
