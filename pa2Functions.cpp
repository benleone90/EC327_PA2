#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <string>
#include "pa2Functions.h"
using namespace std;
extern string fileName;
extern string userInput;
extern ifstream inFile;
extern ofstream outFile;
extern char oper;



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
        cout << "Please input name of file to be written to (ending with .txt): " << endl;
        cin >> fileName;
        writeDataToFile(fileName.c_str());
        return true;
    }
     else if( command == 'q' || command == 'Q'){
        cout << "Thank you for using this awesome program! It's an A+ ;)" << endl;
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
        outFile << "No computation needed." << endl;
    } else {
        cout << "Square Root Values: " << endl;
        outFile << "Square Root Values: " << endl;
        for (int i = 0; i < ENTRIES; i++){
            double calc = first + (delta * i);
            if (calc <= last){    
                cout << sqrt(calc) << endl;
                outFile << sqrt(calc) << endl;
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
        outFile << "No computation needed." << endl;
    } else {
        cout << "Area of Square Values: " << endl;
        outFile << "Area of Square Values: " << endl;
        for (int i = 0; i < ENTRIES; i++){
            double calc = first + (delta * i);
            if (calc <= last){
                cout << (calc * calc) << endl;
                outFile << (calc * calc) << endl;
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
        outFile << "No computation needed." << endl;
    } else {
        cout << "Area of Circle Values: " << endl;
        outFile << "Area of Circle Values: " << endl;
        for (int i = 0; i < ENTRIES; i++){
            double calc = first + (delta * i);
            if (calc <= last)
            {
                cout << pi * (calc * calc) << endl;
                outFile << pi * (calc * calc) << endl;
            } else {
                break;
            }
            
        }
        
    }
    return 0;
}

int findNextEvenValue(int first, int last){
    if (first > last){
        cout << "No computation needed." << endl;
        outFile << "No computation needed." << endl;
    } else {
        cout << "Even numbers between " << first << " and " << last << ": " << endl;
        outFile << "Even numbers between " << first << " and " << last << ": " << endl;
        for (int i = 0; i < ENTRIES; i++){
            if (first <= last && first % 2 == 0){
                cout << first << endl;
                outFile << first << endl;
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
        outFile << "No computation needed." << endl;
    } else {
        cout << "Lucky Number Values: " << endl;
        outFile << "Lucky Number Values: " << endl;
        for (int i = 0; i < ENTRIES; i++){
            double calc = first + (delta * i);
            double random = rand();
            if (calc <= last){
                cout << random * calc << endl;
                outFile << random * calc << endl;
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
        outFile << "No computation needed." << endl;
    } else {
        cout << "Math Values: " << endl;
        outFile << "Math Values: " << endl;
        for (int i = 0; i < ENTRIES; i++){
            double calc = first + (delta * i);
            if (calc <= last){
                switch (math)
                {
                case 's':
                case 'S':
                    cout << sin(calc) << endl;
                    outFile << sin(calc) << endl;
                    break;
                
                case 'n':
                case 'N':
                    cout << cos(calc) << endl;
                    outFile << cos(calc) << endl;
                    break;

                case 'x':
                case 'X':
                    cout << exp(calc) << endl;
                    outFile << exp(calc) << endl;
                    break;

                default:
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
        outFile << "No computation needed." << endl;
    } else {
        cout << "Natural Log Values: " << endl;
        outFile << "Natural Log Values: " << endl;
        for (int i = 0; i < ENTRIES; i++){
            double calc = first + (delta * i);
            if (calc <= last)
            {
                cout << log(calc) << endl;
                outFile << log(calc) << endl;
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
        outFile << "No computation needed." << endl;
    } else {
        cout << "Nyan Cat Values: " << endl;
        outFile << "Nyan Cat Values: " << endl;
        for (int i = 0; i < ENTRIES; i++){
            double myNum = first + (delta * i);
            if (myNum <= last)
            {
                cout << fixed << pow((4 * myNum), myNum) + myNum + 10 << endl;
                outFile << fixed << pow((4 * myNum), myNum) + myNum + 10 << endl;
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
        outFile << "No computation needed." << endl;
    } else {
        cout << "Odd numbers between " << first << " and " << last << ": " << endl;
        outFile << "Odd numbers between " << first << " and " << last << ": " << endl;
        for (int i = 0; i < ENTRIES; i++){
            if (first <= last && first % 2 != 0){
                cout << first << endl;
                outFile << first << endl;
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
    inFile.open(input);
    if (!inFile){
        cerr << input << " file does not exist!" << endl;
    } else {
        cout << input << " file is open!" << endl;
        while(inFile >> oper){
            if (oper == 'f' || oper == 'F'){   
                int n;
                inFile >> n;
                cout << factorial(n) << endl;
                outFile << factorial(n) << endl;

            } else if (oper == 'b' || oper == 'B'){
                int index;
                inFile >> index;
                cout << fibonacci(index) << endl;
                outFile << fibonacci(index) << endl;

            } else if (oper == 'r' || oper == 'R'){
                double sqrtFirst, sqrtLast, sqrtDelta;
                inFile >> sqrtFirst >> sqrtLast >> sqrtDelta;
                cout << findSqrtValue(sqrtFirst, sqrtLast, sqrtDelta) << endl;

            } else if (oper == 'u' || oper == 'U'){
                double sqFirst, sqLast, sqDelta;
                inFile >> sqFirst >> sqLast >> sqDelta;
                cout << areaSquare(sqFirst, sqLast, sqDelta) << endl;

            } else if (oper == 'c' || oper == 'C'){
                double cirFirst, cirLast, cirDelta;
                inFile >> cirFirst >> cirLast >> cirDelta;
                cout << areaCircle(cirFirst, cirLast, cirDelta) << endl;

            } else if (oper == 'e' || oper == 'E'){
                int evenFirst, evenLast;
                inFile >> evenFirst >> evenLast;
                cout << findNextEvenValue(evenFirst, evenLast) << endl;

            } else if (oper == 'k' || oper == 'K'){
                int luckyFirst, luckyLast, luckyDelta;
                inFile >> luckyFirst >> luckyLast >> luckyDelta;
                cout << lucky(luckyFirst, luckyLast, luckyDelta) << endl;

            } else if (oper == 's' || oper == 'S' || oper == 'n' || oper == 'N' || oper == 'x' || oper == 'X'){
                double mathFirst, mathLast, mathDelta;
                inFile >> mathFirst >> mathLast >> mathDelta;
                cout << doMath(mathFirst, mathLast, mathDelta, oper) << endl;

            } else if (oper == 'l' || oper == 'L'){
                double logFirst, logLast, logDelta;
                inFile >> logFirst >> logLast >> logDelta;
                cout << naturalLog(logFirst, logLast, logDelta);

            } else if (oper == 'y' || oper == 'Y'){
                double nyanFirst, nyanLast, nyanDelta;
                inFile >> nyanFirst >> nyanLast >> nyanDelta;
                cout << findNyanCatValue(nyanFirst, nyanLast, nyanDelta) << endl;

            } else if (oper == 'd' || oper == 'D'){
                int oddFirst, oddLast;
                inFile >> oddFirst >> oddLast;
                cout << findNextOddValue(oddFirst, oddLast) << endl;
            }
        }
    }
    inFile.close();
}

void writeDataToFile(const char* input){
    outFile.open(input);
    if (!outFile){
        cerr << "There was a problem creating your file!" << endl;
    } else {
        cout << input << " was successfully created and is open!" << endl;
        while (run){
            char command;
            cout << "Please enter command code: ";
            outFile << "Please enter command code: " << endl;
            cin >> command;
        
            if (command == 'f' || command == 'F'){
                int fact;
                cout << "Please enter command parameters (factorial): ";
                outFile << "Please enter command parameters (factorial): " << endl;
                cin >> fact;
                cout << "Factorial of " << fact << " is " << factorial(fact) << endl;
                outFile << "Factorial of " << fact << " is " << factorial(fact) << endl;
                
            } else if (command == 'b' || command == 'B'){
                int index;
                cout << "Please enter command parameters (Fibonacci: index): ";
                outFile << "Please enter command parameters (Fibonacci: index): " << endl;
                cin >> index;
                cout << "Fibonacci number at index " << index << " is " << fibonacci(index) << endl;
                outFile << "Fibonacci number at index " << index << " is " << fibonacci(index) << endl;

            } else if (command == 'r' || command == 'R'){
                double sqrtFirst, sqrtLast, sqrtDelta;
                cout << "Please enter command parameters (sqrt: first, last, delta): " << endl;
                outFile << "Please enter command parameters (sqrt: first, last, delta): " << endl;
                cin >> sqrtFirst >> sqrtLast >> sqrtDelta;
                findSqrtValue(sqrtFirst, sqrtLast, sqrtDelta);
                
            } else if (command == 'u' || command == 'U'){
                double sqFirst, sqLast, sqDelta;
                cout << "Please enter command parameters (square area: first, last, delta): " << endl;
                outFile << "Please enter command parameters (square area: first, last, delta): " << endl;
                cin >> sqFirst >> sqLast >> sqDelta;
                areaSquare(sqFirst, sqLast, sqDelta);

            } else if (command == 'c' || command == 'C'){
                double cirFirst, cirLast, cirDelta;
                cout << "Please enter command parameters (circle area: first, last, delta): " << endl;
                outFile << "Please enter command parameters (circle area: first, last, delta): " << endl;
                cin >> cirFirst >> cirLast >> cirDelta;
                areaCircle(cirFirst, cirLast, cirDelta);

            } else if (command == 'e' || command == 'E'){
                int evenFirst, evenLast;
                cout << "Please enter command parameters (even numbers: first, last): " << endl;
                outFile << "Please enter command parameters (even numbers: first, last): " << endl;
                cin >> evenFirst >> evenLast;
                findNextEvenValue(evenFirst, evenLast);

            } else if (command == 'k' || command == 'K'){
                int luckyFirst, luckyLast, luckyDelta;
                cout << "Please enter command parameters (lucky number: first, last, delta): " << endl;
                outFile << "Please enter command parameters (lucky number: first, last, delta): " << endl;
                cin >> luckyFirst >> luckyLast >> luckyDelta;
                lucky(luckyFirst, luckyLast, luckyDelta);

            } else if (command == 's' || command == 'S' || command == 'n' || command == 'N' || command == 'x' || command == 'X'){
                double mathFirst, mathLast, mathDelta;
                cout << "Please enter command parameters (" << command << " command: first, last, delta): " << endl;
                outFile << "Please enter command parameters (" << command << " command: first, last, delta): " << endl;
                cin >> mathFirst >> mathLast >> mathDelta;
                doMath(mathFirst, mathLast, mathDelta, command);

            } else if (command == 'l' || command == 'L'){
                double logFirst, logLast, logDelta;
                cout << "Please enter command parameters (natural logs: first, last, delta): " << endl;
                outFile << "Please enter command parameters (natural logs: first, last, delta): " << endl;
                cin >> logFirst >> logLast >> logDelta;
                naturalLog(logFirst, logLast, logDelta);

            } else if (command == 'y' || command == 'Y'){
                double nyanFirst, nyanLast, nyanDelta;
                cout << "Please enter command parameters (nyan cat: first, last, delta): " << endl;
                outFile << "Please enter command parameters (nyan cat: first, last, delta): " << endl;
                cin >> nyanFirst >> nyanLast >> nyanDelta;
                findNyanCatValue(nyanFirst, nyanLast, nyanDelta);

            } else if (command == 'd' || command == 'D'){
                int oddFirst, oddLast;
                cout << "Please enter command parameters (odd numbers: first, last): " << endl;
                outFile << "Please enter command parameters (odd numbers: first, last): " << endl;
                cin >> oddFirst >> oddLast;
                findNextOddValue(oddFirst, oddLast);

            } else if (command == 'i' || command == 'I'){
                cout << "Please input name of file: " << endl;
                cin >> userInput;
                readDataFromFile(userInput.c_str()); 
                
            } else if (command == 'o' || command == 'O'){
                cout << "Already writing to file " << input << endl;
                outFile << "Already writing to file " << input << endl;
            }
            else if( command == 'q' || command == 'Q'){
                cout << "Thank you for using this awesome program! It's an A+ ;)" << endl;
                outFile << "Thank you for using this awesome program! It's an A+ ;)" << endl;
                outFile.close();
                run = false;

            } else {
                cout << "Invalid command code. Please try again." << endl;
            }
        }
    }
}