/**************************************************
 * Author: Matt Garner
 * Date: 12/3/15
 * Descritpion: This is the definition file for the 
 * Library class.
 * ************************************************/

#include "Library.hpp"

/************* Constructor ****************/

Library::Library()
{
    currentDate = 0;
}

/************* Get Methods ****************/


//getPatron returns a pointer to patron object for the pID string taken as a paremeter

Patron* Library::getPatron(std::string pID)
{   
    for(int i = 0; i < members.size(); i++)
    {
        Patron* mem = members.at(i);
	
	if(pID == (*mem).getIdNum())
        {
	    return members.at(i);
        }
    }

    return NULL;
}


//getBook returns a pointer to book object for the bID string taken as a paremeter

Book* Library::getBook(std::string bID)
{
    for(int i = 0; i < holdings.size(); i++)
    {
        Book* boo = holdings.at(i);

	if(bID == (*boo).getIdCode())
	{
            return holdings.at(i);
	}
    }

    return NULL;
}


/*********** Class Functions **************/


/******************************************************
 *                      addBook
 * The addBook function uses the push.back() function 
 * to add books to the library's holdings.
 * ****************************************************/

void Library::addBook(Book* addB)
{
    holdings.push_back(addB);
}


/*******************************************************
 *                     addPatron
 * The addPatron function uses the push.back() function
 * to add patrons to the library's members lis.
 * *****************************************************/


void Library::addPatron(Patron* addP)
{
    members.push_back(addP);
}


/*******************************************************
 *                    checkOutBook
 * The checkOutBook function takes an available book in
 * the library's holdings and places it in a patron's 
 * list of checked out books with hte addBook function.
 * It also accounts for the reasons why a book might not be
 * checked out.
 * *****************************************************/

std::string Library::checkOutBook(std::string pID, std::string bID)
{
 
    // string variables
    std::string bNotFound = "book not found";
    std::string pNotFound = "patron not found";
    std::string bCheckedO = "book already checked out";
    std::string bOtherPat = "book on hold by other patron";
    std::string bCheckOut = "check out successful";
    
    // if book isnt in holdings
    if(getBook(bID) == NULL)
        return bNotFound;
    
    // if patron isnt in members
    if(getPatron(pID) == NULL)
        return pNotFound;
    
    // if book is checked out
    if(getBook(bID)->getLocation() == CHECKED_OUT)
        return bCheckedO;
    

    // if book is on hold shelf, unless it is on hold for current patron
    if(getBook(bID)->getLocation() == ON_HOLD_SHELF)
    {    
        if(getBook(bID)->getRequestedBy() != getPatron(pID))	
	{
	    return bOtherPat;
	}
    } 
    
    // update who checked out the book, when, and its new location
    // set requested by to null. 
    else
    {
        getBook(bID)->setCheckedOutBy(getPatron(pID));
	getBook(bID)->setDateCheckedOut(currentDate);
	getBook(bID)->setLocation(CHECKED_OUT);
        getBook(bID)->setRequestedBy(NULL);
	getPatron(pID)->addBook(getBook(bID));
	return bCheckOut;
    }
    
    
}


/*******************************************************
 *                 returnBook
 * the returnBook function takes a checked out book and 
 * returns it to a shelf in the library where it can possibly
 * be checked out again depending on if it has been requested.
 * *****************************************************/

std::string Library::returnBook(std::string bID)
{
    // string variables
    std::string bNotFound = "book not found";
    std::string inLibrary = "book already in library";
    std::string bReturned = "return successful";

    // if book isnt in holdings
    if(getBook(bID) == NULL)
        return bNotFound;

    // if book is already checked in
    if(getBook(bID)->getLocation() != CHECKED_OUT)
        return inLibrary;

    else
    {
        //pointer variables
	Book* bookPtr;
	Patron* patronPtr;

        // get pointer to patron who has book
	bookPtr = getBook(bID);
	patronPtr = bookPtr->getCheckedOutBy();

        // use removeBook function to take book from patron checked out list
	patronPtr->removeBook(bookPtr);
	
        // place book on shelf or hold shelf depending on if it's been requested.
	if(bookPtr->getRequestedBy() == NULL)
	    bookPtr->setLocation(ON_SHELF);
	else
	    bookPtr->setLocation(ON_HOLD_SHELF);

	return bReturned;
    }
}



/****************************************************
 *                  requestBook
 * The requestBook function allows a patron to request a book
 * be held. If the book on on the shel, it is set as requested
 * and moved to the hold shelf. If the book is checked out, it 
 * is requested but not yet moved to the hold shelf. If the book is
 * already requested by someone, it will not be able to be held.
 * **************************************************/

std::string Library::requestBook(std::string pID, std::string bID)
{
    // string variabled
    std::string bNotFound = "book not found";
    std::string pNotFound = "patron not found";
    std::string alreadyOn = "book already on hold";
    std::string requested = "request successful";
    
    // pointer variables
    Book* bookPtr;
    bookPtr = getBook(bID);

    Patron* patronPtr;
    patronPtr = getPatron(pID);

    // if book not in holdings
    if(getBook(bID) == NULL)
    {    
        return bNotFound;
    }

    // if Patron not in members
    if(getPatron(pID) == NULL)
        return pNotFound;

    // if book already on request
    if(bookPtr->getRequestedBy() != NULL)
        return alreadyOn;

    // if book is available
    else
    {
        bookPtr->setRequestedBy(patronPtr);

	if(bookPtr->getLocation() == ON_SHELF)
	   bookPtr->setLocation(ON_HOLD_SHELF);
	
	return requested;
    }
}


/*********************************************************
 *                    payFine
 * The payFine function allows a payment be made towards
 * a members late fees accrued for overdue books.
 * *******************************************************/

std::string Library::payFine(std::string pID, double payment)
{
    // string variables
    std::string pNotFound = "patron not found";
    std::string paymentIn = "payment successful";

    // if patron not in members
    if(getPatron(pID) == NULL)
        return pNotFound;
    
    // if payment can be made
    else
    {
        getPatron(pID)->amendFine(-payment);

        return paymentIn;
    }
}


/***********************************************************
 *                incrememtCurrentDate
 * The incrementCurrentDate function moves the date forward
 * from the creation of hte library object. It also updates
 * the potential fines for checked out books for all books
 * checked out for all members
 * *********************************************************/

void Library::incrementCurrentDate()
{
    currentDate++;
    
    for(int i = 0; i < members.size(); i++)
    {
        Patron* patPtr;
	patPtr = members.at(i);

	for(int j = 0; j < patPtr->getCheckedOutBooks().size(); j++)
        {
	    Book* bookPtr;
	    bookPtr = patPtr->getCheckedOutBooks().at(j);

	    if((currentDate - (bookPtr->getDateCheckedOut())) > (bookPtr->CHECK_OUT_LENGTH))
	    {
		patPtr->amendFine(0.10);
	    }
	}
    }
}


