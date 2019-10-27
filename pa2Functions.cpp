#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include "pa2Functions.h"
using namespace std;

void initialize(){
    cout << "EC327: Introduction to Software Engineering\nFall 2019\nProgramming Assignment 2\nValue of Entries is: " << ENTRIES << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
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
    const float pi = 3.14159;
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