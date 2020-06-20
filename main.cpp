/* iostream is the header file library which allows
for the dev to work with input and output objects */
#include <iostream>

// allows use of names for standard objects and variables in the standard library
using namespace std;

int main()
{
   // User Input

   // If you have noticed, cout displays text to the user and uses <<
   // To take information from the user, use cin and >>

   int x;

   cout << "Please put your age in! \n";

   cin >> x;

   cout << "You are " << x << " year(s) old!";

   return 0;
}
