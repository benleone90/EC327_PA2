#include <iostream>
#include "pa2Functions.h"
using namespace std;

int ENTRIES;

long double factorial(int n){
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

