/***************************************
 * Author: Matt Garner
 * Date: 10/28/15
 * Description: 5.a this is the class implementation file for the
 * BankAccount class
 * *************************************/

#include "BankAccount.hpp" //include header
#include <string> // include strings for name and ID

//default constructor
BankAccount::BankAccount()
{
    customerName = "default";
    customerID = "default";
    customerBalance = 0;
}

//constructor initializes private variables
BankAccount::BankAccount(std::string name, std::string iD, double balance)
{
    customerName = name;
    customerID = iD;
    customerBalance = balance;
}

// returns the customers name
std::string BankAccount::getCustomerName()
{
    return customerName;
}

// returns the customers ID
std::string BankAccount::getCustomerID()
{
    return customerID;
}

// returns the current balance
double BankAccount::getCustomerBalance()
{
    return customerBalance;
}

//subtracts the withraw ammount from current balance
void BankAccount::withdraw(double moneysub)
{
    customerBalance -= moneysub;
}

//adds the deposit amount to current balance
void BankAccount::deposit(double moneyadd)
{
    customerBalance += moneyadd;
}
