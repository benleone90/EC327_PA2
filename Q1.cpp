#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
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

    switch (command){
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
        double sqrtFirst, sqrtLast, sqrtDelta;
        cout << "Please enter command parameters (sqrt: first, last, delta): " << endl;
        cin >> sqrtFirst >> sqrtLast >> sqrtDelta;
        findSqrtValue(sqrtFirst, sqrtLast, sqrtDelta);
        break;
    
    case 'u':
    case 'U':
        double sqFirst, sqLast, sqDelta;
        cout << "Please enter command parameters (square area: first, last, delta): " << endl;
        cin >> sqFirst >> sqLast >> sqDelta;
        areaSquare(sqFirst, sqLast, sqDelta);
        break;
    
    case 'c':
    case 'C':
        double cirFirst, cirLast, cirDelta;
        cout << "Please enter command parameters (circle area: first, last, delta): " << endl;
        cin >> cirFirst >> cirLast >> cirDelta;
        areaCircle(cirFirst, cirLast, cirDelta);
        break;

    case 'e':
    case 'E':
        int evenFirst, evenLast;
        cout << "Please enter command parameters (even numbers: first, last): " << endl;
        cin >> evenFirst >> evenLast;
        findNextEvenValue(evenFirst, evenLast);
        break;

    case 'k':
    case 'K':
        int luckyFirst, luckyLast, luckyDelta;
        cout << "Please enter command parameters (lucky number: first, last, delta): " << endl;
        cin >> luckyFirst >> luckyLast >> luckyDelta;
        lucky(luckyFirst, luckyLast, luckyDelta);
        break;

    case 's':
    case 'S':
    case 'n':
    case 'N':
    case 'x':
    case 'X':
        double mathFirst, mathLast, mathDelta;
        cout << "Please enter command parameters (" << command << " command: first, last, delta): " << endl;
        cin >> mathFirst >> mathLast >> mathDelta;
        doMath(mathFirst, mathLast, mathDelta, command);
        break;

    case 'l':
    case 'L':
        double logFirst, logLast, logDelta;
        cout << "Please enter command parameters (natural logs: first, last, delta): " << endl;
        cin >> logFirst >> logLast >> logDelta;
        naturalLog(logFirst, logLast, logDelta);
        break;

    case 'y':
    case 'Y':
        double nyanFirst, nyanLast, nyanDelta;
        cout << "Please enter command parameters (nyan cat: first, last, delta): " << endl;
        cin >> nyanFirst >> nyanLast >> nyanDelta;
        findNyanCatValue(nyanFirst, nyanLast, nyanDelta);
        break;

    case 'd':
    case 'D':
        int oddFirst, oddLast;
        cout << "Please enter command parameters (odd numbers: first, last): " << endl;
        cin >> oddFirst >> oddLast;
        findNextOddValue(oddFirst, oddLast);
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