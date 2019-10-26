#include <iostream>
#include <cmath>
#include "pa2Functions.h"
using namespace std;

const int ENTRIES = 10;

bool run = true;
int main()
{
    initialize();
    while (run){
    char command;
    
    cout << "Please enter command code: ";
    cin >> command;

    switch (command)
    {
    case 'f':
    case 'F':
        int fact;
        cout << "Please enter command parameters (factorial): ";
        cin >> fact;
        cout << "Factorial of " << fact << " is " << factorial(fact) << endl;
        break;

    case 'b':
    case 'B':
        int index;
        cout << "Please enter command parameters (Fibonacci: index): ";
        cin >> index;
        cout << "Fibonacci number at index " << index << " is " << fibonacci(index) << endl;
        break;

    case 'r':
    case 'R':
        double first;
        double last;
        double delta;
        cout << "Please enter command parameters (sqrt: first, last, delta): " << endl;
        cin >> first >> last >> delta;
        cout << "Square Root Values: " << endl;
        findSqrtValue(first, last, delta);
        break;

    case 'q':
    case 'Q':
        cout << "Thank you for using this awesome program! It's an A+ ;)";
        run = false;
        break;

    default:
        cout << "Invalid command code!" << endl;
        break;
    }
    }
    return 0;
}