/* iostream is the header file library which allows
for the dev to work with input and output objects */
#include <iostream>
//allows for the use of the strings library
#include <string>

// allows use of names for standard objects and variables in the standard library
using namespace std;

int main()
{
   // Data Types

   /*
    C++, like C, can perform memory management!
    First, lets go over how much memory all the
    basic data types take
   */

   int age = 25; //Stores whole numbers, using 4 bytes
   float detailedAge = 25.67; //Stores fractional numbers up to seven decimal spaces, using 4 bytes
   double pi = 3.14159265358979; // Stores fractional numbers up to fifteen decimal spaces, using 4 bytes
   bool adult = true; // Stores true or false (1-0) values, using 1 bytes
   char middleInitial = 'A'; // Stores single characters, letters, or numbers using 1 byte
   string helloWorld = "Hello World"; // Stores multiple char at once

   cout << age << "\n";
   cout << detailedAge << "\n";
   cout << pi << "\n";
   cout << adult << "\n";
   cout << middleInitial << "\n";
   cout << helloWorld;

   // Char and String

   /*
    Char is used to store single characters using single quotations ('').
    ASCII values may also be used to represent different letters or symbols, such as ! @ $ # or %

    String is a variable type that is not a built in type, since it is actually just
    combining char values.
    How does this make a difference?
    The char only stores one value such as 'A' where as string can store something
    like "Hello World"
    Note that a string uses double quotations ("") where as char uses single quotations ('')
   */

   return 0;
}
