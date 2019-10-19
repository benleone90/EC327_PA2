#include <iostream>
#include <iomanip>
using namespace std;

// Recursive function to compute 2n/(3n+2) series
double series (double n)
{
    double output = 0;
    while (n >= 1)
    {
    output += (2*n)/((3*n)+2);
    n -= 1;
    series (n);
    }
    return output;
}

// Main function calling recursive function "series"
int main ()
{
    double n;
    cout << "Enter n: ";
    cin >> n;
    cout << setprecision(5) << series (n) << endl;
    return 0;
}