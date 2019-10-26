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
        double sqrtFirst;
        double sqrtLast;
        double sqrtDelta;
        cout << "Please enter command parameters (sqrt: first, last, delta): " << endl;
        cin >> sqrtFirst >> sqrtLast >> sqrtDelta;
        cout << "Square Root Values: " << endl;
        findSqrtValue(sqrtFirst, sqrtLast, sqrtDelta);
        break;
    
    case 'u':
    case 'U':
        double sqFirst;
        double sqLast;
        double sqDelta;
        cout << "Please enter command parameters (square area: first, last, delta): " << endl;
        cin >> sqFirst >> sqLast >> sqDelta;
        cout << "Area of Square Values: " << endl;
        areaSquare(sqFirst, sqLast, sqDelta);
        break;
    
    case 'c':
    case 'C':
        double cirFirst;
        double cirLast;
        double cirDelta;
        cout << "Please enter command parameters (circle area: first, last, delta): " << endl;
        cin >> cirFirst >> cirLast >> cirDelta;
        cout << "Area of Circle Values: " << endl;
        areaCircle(cirFirst, cirLast, cirDelta);
        break;

    case 'e':
    case 'E':
        int evenFirst;
        int evenLast;
        cout << "Please enter command parameters (even numbers: first, last): " << endl;
        cin >> evenFirst >> evenLast;
        cout << "Even numbers between " << evenFirst << " and " << evenLast << ": " << endl;
        findNextEvenValue(evenFirst, evenLast);
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