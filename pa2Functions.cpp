#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <string>
#include "pa2Functions.h"
using namespace std;
extern string userInput;
extern ifstream inFile;


void initialize(){
    cout << "EC327: Introduction to Software Engineering\nFall 2019\nProgramming Assignment 2\nValue of Entries is: " << ENTRIES << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

bool checkCode (char command){
    if (command == 'f' || command == 'F'){
        int fact;
        cout << "Please enter command parameters (factorial): ";
        cin >> fact;
        cout << "Factorial of " << fact << " is " << factorial(fact) << endl;
        return true;

    } else if (command == 'b' || command == 'B'){
        int index;
        cout << "Please enter command parameters (Fibonacci: index): ";
        cin >> index;
        cout << "Fibonacci number at index " << index << " is " << fibonacci(index) << endl;
        return true;

    } else if (command == 'r' || command == 'R'){
        double sqrtFirst, sqrtLast, sqrtDelta;
        cout << "Please enter command parameters (sqrt: first, last, delta): " << endl;
        cin >> sqrtFirst >> sqrtLast >> sqrtDelta;
        findSqrtValue(sqrtFirst, sqrtLast, sqrtDelta);
        return true;

    } else if (command == 'u' || command == 'U'){
        double sqFirst, sqLast, sqDelta;
        cout << "Please enter command parameters (square area: first, last, delta): " << endl;
        cin >> sqFirst >> sqLast >> sqDelta;
        areaSquare(sqFirst, sqLast, sqDelta);
        return true;

    } else if (command == 'c' || command == 'C'){
        double cirFirst, cirLast, cirDelta;
        cout << "Please enter command parameters (circle area: first, last, delta): " << endl;
        cin >> cirFirst >> cirLast >> cirDelta;
        areaCircle(cirFirst, cirLast, cirDelta);
        return true;

    } else if (command == 'e' || command == 'E'){
        int evenFirst, evenLast;
        cout << "Please enter command parameters (even numbers: first, last): " << endl;
        cin >> evenFirst >> evenLast;
        findNextEvenValue(evenFirst, evenLast);
        return true;

    } else if (command == 'k' || command == 'K'){
        int luckyFirst, luckyLast, luckyDelta;
        cout << "Please enter command parameters (lucky number: first, last, delta): " << endl;
        cin >> luckyFirst >> luckyLast >> luckyDelta;
        lucky(luckyFirst, luckyLast, luckyDelta);
        return true;

    } else if (command == 's' || command == 'S' || command == 'n' || command == 'N' || command == 'x' || command == 'X'){
        double mathFirst, mathLast, mathDelta;
        cout << "Please enter command parameters (" << command << " command: first, last, delta): " << endl;
        cin >> mathFirst >> mathLast >> mathDelta;
        doMath(mathFirst, mathLast, mathDelta, command);
        return true;

    } else if (command == 'l' || command == 'L'){
        double logFirst, logLast, logDelta;
        cout << "Please enter command parameters (natural logs: first, last, delta): " << endl;
        cin >> logFirst >> logLast >> logDelta;
        naturalLog(logFirst, logLast, logDelta);
        return true;

    } else if (command == 'y' || command == 'Y'){
        double nyanFirst, nyanLast, nyanDelta;
        cout << "Please enter command parameters (nyan cat: first, last, delta): " << endl;
        cin >> nyanFirst >> nyanLast >> nyanDelta;
        findNyanCatValue(nyanFirst, nyanLast, nyanDelta);
        return true;

    } else if (command == 'd' || command == 'D'){
        int oddFirst, oddLast;
        cout << "Please enter command parameters (odd numbers: first, last): " << endl;
        cin >> oddFirst >> oddLast;
        findNextOddValue(oddFirst, oddLast);
        return true;

    } else if (command == 'i' || command == 'I'){
        return true;
        
    } else if (command == 'o' || command == 'O'){
        return true;
    }
     else if( command == 'q' || command == 'Q'){
        cout << "Thank you for using this awesome program! It's an A+ ;)";
        run = false;
        return true;

     } else {
        cout << "Invalid command code. Please try again." << endl;
        return false;
    }
}

int factorial(int n){
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int fibonacci(int index){
    if (index == 0){
        return 0;
    } else if (index == 1){
        return 1;
    } else {
        return fibonacci(index - 1) + fibonacci(index - 2);
    }
}

double findSqrtValue(double first, double last, double delta){
    if (delta <= 0 || first > last){
        cout << "No computation needed." << endl;
    } else {
        cout << "Square Root Values: " << endl;
        for (int i = 0; i < ENTRIES; i++){
            double calc = first + (delta * i);
            if (calc <= last){    
                cout << sqrt(calc) << endl;
            } else {
                break;
            }
        }
    }
    return 0;
}

double areaSquare (double first, double last, double delta){
    if (delta <= 0 || first > last){
        cout << "No computation needed." << endl;
    } else {
        cout << "Area of Square Values: " << endl;
        for (int i = 0; i < ENTRIES; i++){
            double calc = first + (delta * i);
            if (calc <= last){
                cout << (calc * calc) << endl;
            } else {
                break;
            }
        }
    }
    return 0;
}

double areaCircle (double first, double last, double delta){
    const double pi = 3.14159;
    if (delta <= 0 || first > last){
        cout << "No computation needed." << endl;
    } else {
        cout << "Area of Circle Values: " << endl;
        for (int i = 0; i < ENTRIES; i++){
            double calc = first + (delta * i);
            if (calc <= last)
            {
                cout << pi * (calc * calc) << endl;
            } else {
                break;
            }
            
        }
        
    }
    return 0;
}

int findNextEvenValue(int first, int last){
    if (first > last)
    {
        cout << "No computation needed." << endl;
    } else {
        cout << "Even numbers between " << first << " and " << last << ": " << endl;
        for (int i = 0; i < ENTRIES; i++){
            if (first <= last && first % 2 == 0){
                cout << first << endl;
                first += 1;
            } else {
                first += 1;
                i--;
            }
        }
    }
    return 0;
}

double lucky(double first, double last, double delta){
    srand(time(NULL));
    if (delta <= 0 || first > last){
        cout << "No computation needed." << endl;
    } else {
        cout << "Lucky Number Values: " << endl;
        for (int i = 0; i < ENTRIES; i++){
            double calc = first + (delta * i);
            double random = rand();
            if (calc <= last){
                cout << random * calc << endl;
            } else {
                break;
            }
        }
    }
    return 0;
}

double doMath(double first, double last, double delta, char math){
    if (delta <= 0 || first > last){
        cout << "No computation needed." << endl;
    } else {
        cout << "Math Values: " << endl;
        for (int i = 0; i < ENTRIES; i++){
            double calc = first + (delta * i);
            if (calc <= last){
                switch (math)
                {
                case 's':
                case 'S':
                    cout << sin(calc) << endl;
                    break;
                
                case 'n':
                case 'N':
                    cout << cos(calc) << endl;
                    break;

                case 'x':
                case 'X':
                    cout << exp(calc) << endl;
                    break;

                default:
                    cout << "Not a valid math function." << endl;
                    break;
                }
            } else {
                break;
            }
        }
    }
    return 0;
}

double naturalLog(double first, double last, double delta){
    if (delta <= 0 || first > last){
        cout << "No computation needed." << endl;
    } else {
        cout << "Natural Log Values: " << endl;
        for (int i = 0; i < ENTRIES; i++){
            double calc = first + (delta * i);
            if (calc <= last)
            {
                cout << log(calc) << endl;
            } else {
                break;
            }
        }
    }
    return 0;
}

double findNyanCatValue(double first, double last, double delta){
if (delta <= 0 || first > last){
        cout << "No computation needed." << endl;
    } else {
        cout << "Nyan Cat Values: " << endl;
        for (int i = 0; i < ENTRIES; i++){
            double myNum = first + (delta * i);
            if (myNum <= last)
            {
                cout << fixed << pow((4 * myNum), myNum) + myNum + 10 << endl;
            } else {
                break;
            }
        }
    }
    return 0;
}

int findNextOddValue(int first, int last){
    if (first > last)
    {
        cout << "No computation needed." << endl;
    } else {
        cout << "Odd numbers between " << first << " and " << last << ": " << endl;
        for (int i = 0; i < ENTRIES; i++){
            if (first <= last && first % 2 != 0){
                cout << first << endl;
                first += 1;
            } else {
                first += 1;
                i--;
            }
        }
    }
    return 0;
}

void readDataFromFile(const char* input){
    checkCode(*input);
}