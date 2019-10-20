#include <iostream>
using namespace std;

int *ReverseMultiply(int *list, int size)
{
    int newSize = (size * 2) + 1;
    int newList[newSize] = {};
    for (int i = 0, j = newSize - 2; i < size; i++, j--)
    {
        newList[i] = list[i];
        newList[j] = list[i];
    }
    
    //Print array
    for (int k = 0; k < newSize; k++){
        cout << newList[k] << " ";
    }
    return 0;
}

// int *ReverseAdd(int *list, int size){

// }

int main ()
{
    int size = 0;
    cout << "Enter the number of entries: ";
    cin >> size;
    int list[size] = {};
    for (int i = 0; i < size; i++){
        cout << "Entry " << i << " is: ";
        cin >> list[i];
    }
    
    cout << "Original array is: ";
    for (int i = 0; i < size; i++){
        cout << list[i] << " ";
    }
    cout << "and the address of the zero element is: " << list << endl;

    ReverseMultiply(list, size);
    return 0;
}