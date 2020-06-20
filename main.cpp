/* iostream is the header file library which allows
for the dev to work with input and output objects */
#include <iostream>

// allows use of names for standard objects and variables in the standard library
using namespace std;

int main()
{
   // User Input

   // Let's test how much we can use this new information

   int x, y;

   int sum;

   cout << "I am able to add any two numbers! \n\n";

   cout << "Please give me the first number \n";

   cin >> x;

   cout << "Please give me the second number \n";

   cin >> y;

   sum = x + y;

   cout << "The total is " << sum;

   return 0;
}
