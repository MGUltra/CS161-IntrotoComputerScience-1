#include <iostream>
#include "ShoppingCart.hpp"

int main()
{
    int total;    

    Item a("affidavit", 179.99, 12);
    Item b("Bildungsroman", 0.7, 20);
    Item c("capybara", 4.5, 6);
    Item d("dirigible", 0.05, 16);
/*
    std::cout << "a Price: " << a.getPrice() << std::endl;
    std::cout << "b Price: " << b.getPrice() << std::endl;

    total = a.getQuantity() + b.getQuantity();

    std::cout << "total quantity: " << total << std::endl; 
*/    
    ShoppingCart sc1;

    sc1.addItem(&a);
    sc1.addItem(&b);
    sc1.addItem(&c);
    sc1.addItem(&d);

    double diff = sc1.totalPrice();

    std::cout << "Total Price: " << diff << std::endl;
    

    return 0;
}
