#ifndef pa2Functions
#define pa2Functions

extern const int ENTRIES;
extern bool run;
extern char* oper;
extern int params;

void initialize();

bool checkCode (char);

int factorial(int);

int fibonacci(int);

double findSqrtValue(double, double, double);

double areaSquare (double, double, double);

double areaCircle (double, double, double);

int findNextEvenValue(int, int);

double lucky(double, double, double);

double doMath(double, double, double, char);

double naturalLog(double, double, double);

double findNyanCatValue(double, double, double);

int findNextOddValue(int, int);

void readDataFromFile(const char*);

#endif