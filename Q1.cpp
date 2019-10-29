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
string fileName;
string userInput;
ifstream inFile;
ofstream outFile;
char oper;

int main()
{
    initialize();
    while (run){
        char command;
    
        cout << "Please enter command code: ";
        cin >> command;

        checkCode(command);

        switch (command)
        {
        case 'i':
        case 'I':
            cout << "Please input name of file: " << endl;
            cin >> userInput;
            readDataFromFile(userInput.c_str());            
            break;
        
        default:
            break;
        }
    }
    return 0;
}