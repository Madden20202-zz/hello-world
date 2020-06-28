/* iostream is the header file library which allows
for the dev to work with input and output objects */
#include <iostream>
//allows for the use of the strings library
#include <string>

// allows use of names for standard objects and variables in the standard library
using namespace std;

int main()
{
   // Strings

   /*
    It is time to explore strings!

    Strings are used to store text, and
    are surrounded by double quotations ("")
   */

   string greeting = "Hello!";

   cout << greeting << "\n";

   // User Input

   /*
    How are situations handled in which a user must interact with the code?

    We have already seen "cin" in action, which can take any input the user has typed in.
   */

   string userName = "guest";
   string realName;

   cout << "What is your username? \n";
   cin >> userName;
   cout << "Would you like " << userName << " to be your username? \n";

   // However, cin does not accept white spaces, which is used a lot to differentiate words

   cout << "What is your name? \n";
   cin >> realName;
   cout << "Your name is " << realName << "? \n";



   return 0;
}
