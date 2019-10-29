#include <iostream>
using namespace std;

//Recursive function to find GCD of two positive integers
int gcd(int m, int n){
    if (m % n == 0){
        return n;
    }
    else {
        return gcd (n, m % n);
    }
    return 0;
}


int main()
{
    int m = 0;
    int n = 0;
    while (m == 0 || n == 0){
        cout << "Enter m: ";
        cin >> m;
        cout << "Enter n: ";
        cin >> n;
        //Input check to ensure m and/or m are non-zero
        if (m <= 0 || n <= 0){
        cout << "Invalid input. Must be positive integers." << endl;
        break;
        }
        cout << "GCD is: " << gcd (m, n) << endl;
    }
    return 0;
}