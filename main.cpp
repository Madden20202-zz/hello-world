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

   // Logical Operators

   //Logical Operators checks the values and gives responses via boolean operators

   /*
    && = logical and, which will only work when both values are the same
    || = logical or, which works if either variable is valid
    ! = logical not, which works if the value is not the value looked for
   */

   int age = 22, creditCards = 3;

   cout << (age < 18 && creditCards < 1) << "\n";// returns 0 since this is false

   cout << (age < 18 || creditCards < 5) << "\n"; // returns 1 since the creditCards value is less than 5

   cout << !(age << 12 && creditCards > 10); // returns 1 since the statement is false but the not turns it true

   return 0;
}
