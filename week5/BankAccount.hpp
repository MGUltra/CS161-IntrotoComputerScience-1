/***********************************************
 * Author: Matt Garner
 * Date: 10/28/15
 * Description: 5.b This is the class descaration file for the BankAccount
 * class we are constructing for this assignment.
 * *********************************************/

//include Guards
#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP

#include <string> //include string for customer name and ID

/*************************************
 *           BankAccount
 * This class allows a user to get alter 
 * the balance of a bank account through
 * deposits and withdraws.
 * ***********************************/

class BankAccount
{
private:
    std::string customerName; //customers name
    std::string customerID;   //customers account number
    double customerBalance;   //customers balance

public:
   BankAccount(); //default constructor

   BankAccount(std::string, std::string, double); //initializing constructor

   std::string getCustomerName(); //returns customer name

   std::string getCustomerID(); //returns customer ID

   double getCustomerBalance(); //returns current balance

   void withdraw(double); //subtracts from current balance

   void deposit(double); //adds to current balance

   
};
#endif
