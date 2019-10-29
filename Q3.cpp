#include <iostream>
using namespace std;

int *ReverseMultiply(int *list, int size)
{
    int sizeMulti = (size * 2) + 1;
    long long listMulit[sizeMulti] {};
    listMulit[sizeMulti - 1] = 1;

    //For loop putting original elements into new array
    //and copying to end of array in reverse
    for (int i = 0, j = sizeMulti - 2; i < size; i++, j--)
    {
        listMulit[i] = list[i];
        listMulit[j] = list[i];
    }

    //For loop that multiplies each element of array for final sum in last element
    for (int j = 0; j < sizeMulti - 1; j++)
    {
        listMulit[sizeMulti - 1] = listMulit[j] * listMulit[sizeMulti - 1];
    }

    //Print array
    cout << "One array is: ";
    for (int k = 0; k < sizeMulti; k++){
        cout << listMulit[k] << " ";
    }
    cout << "and the address of zero element is: " << listMulit << endl;
    return 0;
}

int *ReverseAdd(int *list, int size)
{
    int sizeAdd = (size * 2) - 1;
    int listAdd[sizeAdd] {};

    //For loop putting original elements into new array
    for (int i = 0; i < size; i++)
    {
        listAdd[i] = list[i];
    }

    //For loop to add entries
    for (int j = size, k = size - 1; j < sizeAdd; j++, k--)
    {
        listAdd[j] = list[k] + list[k - 1];
    }

    //Print array
    cout << "Two array is: ";
    for (int f = 0; f < sizeAdd; f++)
    {
        cout << listAdd[f] << " ";
    }
    cout << "and the address of zero element is: " << listAdd << endl;
    return 0;
}

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
    cout << "-----------------" << endl;
    cout << "Original array is: ";
    for (int i = 0; i < size; i++){
        cout << list[i] << " ";
    }
    cout << "and the address of the zero element is: " << list << endl;

    //Call ReverseMultiply function
    ReverseMultiply(list, size);

    //Call ReverseAdd function
    ReverseAdd(list, size);

    return 0;
}