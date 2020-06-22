/* iostream is the header file library which allows
for the dev to work with input and output objects */
#include <iostream>

// allows use of names for standard objects and variables in the standard library
using namespace std;

int main()
{
   // Data Tpes

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

   cout << age << "\n";
   cout << detailedAge << "\n";
   cout << pi << "\n";
   cout << adult << "\n";
   cout << middleInitial << "\n";

   //Numeric Data Types

   /*
    Let's start with the first three, which are numeric types.
    This means that they store numbers, but not all are
    storing equally.

    int is best used for simple whole numbers, which keeps it simple!

    float vs double
    float and double both store fractional numbers. The main difference, as stated above,
    is how much is actually stored. That means double is better for doing calculations behind
    the scenes, since it is more accurate mathematically.

    Note: scientific numbers can be shown by using "e"
   */

   double scienceNumber = 1e8;

   cout << scienceNumber;


   return 0;
}
