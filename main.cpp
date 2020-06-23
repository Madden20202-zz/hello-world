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

   // Using + operator

   // "+" allows two values to be added together

   int x = 1, y = 2, z = 3;
   int sum = x + y;
   int combinedSum = sum + z; // notice that variables and values may be combined together in any way

   cout << sum << "\n";

   cout << combinedSum;

   return 0;
}
