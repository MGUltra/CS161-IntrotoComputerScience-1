/***********************************************
 * Author: Matt Garner
 * Date: 12/3/15
 * Description: This is the declaration file for the Patron class.
 * *********************************************/

#include "Patron.hpp"

/*********** Constructor ************/

Patron::Patron(std::string idn, std::string n)
{
    idNum = idn;
    name = n;
    fineAmount = 0;
}

/*********** Get Methods ************/

std::string Patron::getIdNum()
{
    return idNum;
}

std::string Patron::getName()
{
    return name;
}

std::vector<Book*> Patron::getCheckedOutBooks()
{
    return checkedOutBooks;
}

double Patron::getFineAmount()
{
    return fineAmount;
}



/*********** Class Functions **************/


/******************************************
 *               addBook
 * The addBook function uses the push_back()
 * function to add the pointer to book object
 * to vector containing this patron's checked
 * out books.
 * ****************************************/

void Patron::addBook(Book* b)
{
    checkedOutBooks.push_back(b);
}



/***********************************************************
 *                     removeBook
 * The removeBook Function iterates through the vector through
 * a for loop and then uses the erase() function to remove a 
 * book from the vector of checked out books.
 * *********************************************************/

void Patron::removeBook(Book* b)
{
    for(int i = 0; i < checkedOutBooks.size(); i++)
    {
        if(checkedOutBooks.at(i) == b)
	{    
	    checkedOutBooks.erase(checkedOutBooks.begin() + i);
	}   
    }
}



/*************************************************************
 *                     amendFine
 * The amendFine function takes a double as a paremeter and then
 * adds that amount to the current fine amoutn and sets that value
 * to the variable fineAmount.
 * ***********************************************************/

void Patron::amendFine(double amount)
{
    fineAmount += amount;
}


