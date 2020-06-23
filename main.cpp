/* iostream is the header file library which allows
for the dev to work with input and output objects */
#include <iostream>
//allows for the use of the strings library
#include <string>

// allows use of names for standard objects and variables in the standard library
using namespace std;

int main()
{
   // Operators

   /*
    What is an Operator?
    An operator is anything that allows values or variables to be changed
    You can think of it being the PEMDAS operations, though the validity of this is not confirmed
   */

   // Comparison Operators

   // Comparison operators compare the values of two different variables or a variable and a value

   /*
    == 	Equal to
    != 	Not equal
    > 	Greater than
    < 	Less than
    >= 	Greater than or equal to
    <= 	Less than or equal to
   */

   int x = 5, y = 10;

   cout << (x < y); // will return a 1 since it is true, a 0 would be false

   return 0;
}
