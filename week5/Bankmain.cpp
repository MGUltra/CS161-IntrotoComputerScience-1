#include <iostream>
#include <string>
#include "BankAccount.hpp"

int main()
{

   double wd;
   double dp;
   std::string narm;
   std::string iard;
   double barlance;

   std::cout << "enter name" << std::endl;

   std::cin >> narm;

   std::cout << "enter ID" << std::endl;

   std::cin >> iard;

   std::cout << "enter balance" << std::endl;

   std::cin >> barlance;

   BankAccount acc2(narm, iard, barlance);

   std::cout << acc2.getCustomerBalance() << std::endl;

   std::cout << "how much to deposit?" << std::endl;

   std::cin >> dp;

   acc2.deposit(dp);

   std::cout << acc2.getCustomerBalance() << std::endl;

   std::cout << "how much to withdraw?" << std::endl;

   std::cin >> wd;

   acc2.withdraw(wd);

   std::cout << acc2.getCustomerBalance() << std::endl;

/*
   BankAccount acc1("John Doe", "136DI4", 1400);

   std::cout << acc1.withdraw(500) << std::endl;

   std::cout << acc1.getCustomerID() << std::endl;

   std::cout << acc1.getCustomerName() << std::endl;

   std::cout << acc1.deposit(150.49) << std::endl;
*/

   return 0;
}
