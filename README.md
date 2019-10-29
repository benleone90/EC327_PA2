# EC327_PA2
## Programming Assignment 2
Each of these programs will need to be compiled using g++.
### Q1 - Functions, Header Files, File I/O
This program will take in a `char` as a variable to call a function. Depending on the function called, the function will call for input parameters or a file name for file I/O. The program will return the results of the function called or will output to a file if output is requested. It will run the input file based on the input in the file.
### Q2 - Recurstion
- (Q2a) - This program will find the greatest common divisor (GCD) of two `int` m & n. If one of the inputs is zero, it will return an error to indicate invalid input.
- (Q2b) - The program computes the series (2n)/(3n+1). The program does not accept negative numbers
### Q3 - Array of Pointers and Dynamic Memory Allocation
The first function will a pointer to an integer array that has a size equal to 2*size + 1. The values in the new array at indices from 0 to size-1 should have the same values as in the original input array in the same order. The rest of the values in the new array should be the reverse order of the original array. The final value should be the product.

The second function will return a pointer to an integer array that has a size equal to 2*size-1. The values in the new array at indices from 0 to size-1 should have the same values as in the original input array in the same order. The rest of the values in the new array should be the sum of sets of numbers starting from the end of the original array.