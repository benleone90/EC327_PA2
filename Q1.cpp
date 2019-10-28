#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <string>
#include "pa2Functions.h"
using namespace std;

const int ENTRIES = 10;
bool run = true;

int main()
{
    string fileName;
    initialize();
    while (run){
        char command;
    
        cout << "Please enter command code: ";
        cin >> command;

        checkCode(command);
    }
    return 0;
}