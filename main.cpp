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
   bool adult = false; // Stores true or false (1-0) values, using 1 bytes
   char middleInitial = 'A'; // Stores single characters, letters, or numbers using 1 byte

   cout << age << "\n";
   cout << detailedAge << "\n";
   cout << pi << "\n";
   cout << adult << "\n";
   cout << middleInitial << "\n";

   // Boolean Data Types

   /*
    Boolean data types only use two values, 1 (true) or 0 (false).
    This means that ultimately, anything that has this value must
    be either true or false
   */

   if (adult = true){
    cout << "You are a fully grown adult!";
    return 0;
   } else {
    cout << "Given time, you will become an adult!";
    adult = true;
    return 0;
   }

   return 0;
}
