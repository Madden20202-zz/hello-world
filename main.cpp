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

   // String Concatenation

   //This is the simple act of taking two strings, and combining them via the "+" operator

   string firstName = "Johnny";

   string lastName = "Bravo";

   cout << firstName + lastName << "\n";

   // That does not have any space in it, which looks sloppy. Let's fix that

   cout << firstName + ' ' + lastName << "\n"; // This added the single space needed to make it easier to read

   // There is another way! use Append

   string fullName = firstName.append(lastName); // This does not have the white space, but is much faster!

   cout << fullName << "\n";

   //Note that strings that contain numbers and letters are not compatible

   /*
    string x = "10";
    int y = 20;
    string z = x + y;

    cout << z;

    This will produce an error, since the two types are not compatible
   */

   // String Length

   // The length of a string can be found by using the length() function

   cout << fullName.length() << "\n";

   // Note that Strings are stored as arrays, which have indexes (This is covered more later) and can be changed based on the index value

   /*
    Hello
    01234

    Why is this labelled like this? Because the number corresponds to the index number
    of the letter in the greetings variable! Why know this? Because we can change the word hello
    into jello by changing the value of the first index!
   */

   cout << greeting[0] << "\n"; // Displays the first letter

   greeting[0] = 'J'; // Make sure its single quotations since it is a char

   cout << greeting << "\n";

   return 0;
}
