/**********************************
 * Author: Matt Garner
 * Date: 10/14/15
 * Description : Week 3 - Project 3.b - adds numbers from opened file
 * ********************************/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
   //input/output variables
   ifstream inputFile;
   ofstream outputFile;
   
   string filename; //variable for input file name
   
   int number; //numbers in input file
   int sum=0; // sume of numbers in input file
   
   cout << "Enter the filename\n";
   cin >> filename;

   inputFile.open(filename.c_str()); //open input file
   
   if (inputFile) //if file is found
   {
      //continue adding numbers until end of file
      while (inputFile >> number)
	   {
	   sum += number;
           }

      inputFile.close(); //close input file
   }

   else //if file isn't found
   {
      cout << "Could not access file.\n";
   }

   outputFile.open("sum.txt"); //open output file sum.txt
   outputFile << sum; //output sum of input file numbers to output file
   outputFile.close(); //close output file

   return 0;
}
