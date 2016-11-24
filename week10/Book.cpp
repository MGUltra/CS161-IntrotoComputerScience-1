/*****************************************************
 * Author: Matt Garner
 * Date: 12/2/15
 * Description: This is the definition file for the Book class
 * ***************************************************/

#include "Book.hpp"


/************ Constructor *************/

Book::Book(std::string idc, std::string t, std::string a)
{
    idCode = idc;
    title = t;
    author = a;
    location = ON_SHELF;
    checkedOutBy = NULL;
    requestedBy = NULL;
}


/************ Set Methods *************/


// sets location of the book. only takes locale enum values as paremeter.
void Book::setLocation(Locale loc)
{
    location = loc;
}


// sets checkedOutBy to a point to the patron who has checked out book.
void Book::setCheckedOutBy(Patron* patA)
{
    checkedOutBy = patA;
}


// sets requestedBy to a pointer to Patron object, taken by paremeter
void Book::setRequestedBy(Patron* patB)
{
    requestedBy = patB;
}


// sets dateCheckedOut to an integer taken by paremeter
void Book::setDateCheckedOut(int date)
{
    dateCheckedOut = date;
}


/************ Get Methods *************/
// returns member varialbes declared in the book Class

int Book::getCheckOutLength()
{
    return CHECK_OUT_LENGTH;
}


std::string Book::getIdCode()
{
    return idCode;
}


std::string Book::getTitle()
{
    return title;
}


std::string Book::getAuthor()
{
    return author;
}


Locale Book::getLocation()
{
    return location;
}


Patron* Book::getCheckedOutBy()
{
    return checkedOutBy;
}


Patron* Book::getRequestedBy()
{
    return requestedBy;
}


int Book::getDateCheckedOut()
{
    return dateCheckedOut;
}

