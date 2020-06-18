/* iostream is the header file library which allows
for the dev to work with input and output objects */
#include <iostream>

// allows use of names for standard objects and variables in the standard library
using namespace std;

int main()
{
    // Let's learn about Variables!

    //int stands for Integer, which stores whole numbers without decimals
    int a = 10;

    cout << a << endl; // note that, though the endl is used in this case, it is against convention to do so

    //float is used for storing floating point numbers, that have decimals
    float pi = 3.14;

    cout << pi << endl;

    //char stands for Characters and stores single letters
    char middleInitial = 'k';

    cout << middleInitial << endl;

    //string combines an array of chars into full sentences
    string alert = "This is a basic test!";

    cout << alert << endl;

    //bool stands for Boolean, which can only store true or false values
    bool playerTurn = true;

    if(playerTurn = true) {
        cout << "It is your turn!";
    } else {
        cout << "An error has occured, please check the code";
    }

    return 0;
}
