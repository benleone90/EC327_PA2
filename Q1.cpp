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
string userInput;
ifstream inFile;
string oper;

int main()
{
    string fileName;
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
            inFile.open(userInput);
            if (!inFile){
                cerr << userInput << " file does not exist!" << endl;
                break;
            } else {
                cout << userInput << " file is open!" << endl;
                inFile >> oper;
                //cout << oper;
                readDataFromFile(oper.c_str());
            }
            break;
        
        default:
            break;
        }
    }
    return 0;
}