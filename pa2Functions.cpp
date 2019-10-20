#include <iostream>
#include "pa2Functions.h"
using namespace std;

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