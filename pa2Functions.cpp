#include <iostream>
#include <cmath>
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
        for (int i = 0; i < ENTRIES; i++)
        {
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
        for (int i = first; i < last; i++)
        {
            if (i % 2 == 0){
                cout << i << endl;
            } else {
                break;
            }
        }
        
    }
    return 0;
}