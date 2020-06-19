/* iostream is the header file library which allows
for the dev to work with input and output objects */
#include <iostream>

// allows use of names for standard objects and variables in the standard library
using namespace std;

int main()
{
    // Let's learn about Variables!

    // Identifiers are unique names for variables
    // all variables MUST have a unique identifier
    // this is helpful for calling on your variable later

    // There are naming conventions
    // Simply put, try to describe what it is

    int age = 32; // this is a good identifier, since it describes in one word what it is for
    string nameForChild = "Maggie"; // this is also good, since it makes it clear that the varibale is a name for a child

    int m = 32; // unless it is clearly stated why it is called m, such as for an equation, this is a poor identifier
    string a = "Maggie"; // this is also an unclear identifier, because what is this used for?

    cout << age << "\n" << nameForChild << "\n" << m << "\n" << a;

    return 0; //Though this is assumed, DO NOT FORGET!!

    // Here are the basic rules to making identifiers
    /*
        Names can contain letters, underscores, and digits
        Names must start with a letter or underscore
        Names are case sensitive, so var and Var are two different variables
        Names may NOT contain whitespace or special characters like ! @ # $
        Reserved words can not be used, such as init or main
    */
}
