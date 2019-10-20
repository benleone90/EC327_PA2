#include <iostream>
#include "pa2Functions.h"
using namespace std;

const int ENTRIES = 10;

int run = 1;
int main()
{
    while (run){    
    char command;
    
    cout << "Please enter command code: ";
    cin >> command;

    switch (command)
    {
    case 'f':
    case 'F':
        int fact;
        cout << "Please enter command parameters: ";
        cin >> fact;
        cout << "Factorial of " << fact << " is " << factorial(fact) << endl;
        break;

    case 'b':
    case 'B':
        int index;
        cout << "Please enter command parameters: ";
        cin >> index;
        cout << "Fibonacci number at index " << index << " is " << fibonacci(index) << endl;
        break;

    case 'q':
    case 'Q':
        cout << "Thank you for using this awesome program! It's an A+ ;)";
        run = 0;
        break;

    default:
        cout << "Invalid command code!" << endl;
        break;
    }
    }
    return 0;
}