#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "printing the array " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " print Done " << endl;
}
int main()
{
    // Take Inputs from User and Store Them in an Array
    int numbers[5];

    cout << "Enter 5 numbers: " << endl;
    //  store input from user to array
    for (int i = 0; i < 5; ++i)
    {
        cin >> numbers[i];
    }
    cout << "The numbers are: ";

    //  print array elements
    for (int n = 0; n < 5; ++n)
    {
        cout << numbers[n] << "  ";
    }
    // declare
    int number[15];

    // accessing an array
    cout << endl
         << "Value of index " << number[10] << endl;

    int num[5] = {5, 6, 6, 3, 12};
    // using range based for loop
    for (const int &n : num)
    {
        cout << n << " ";
    }
    char ch[5];
    cout << endl
         << "Everything is Fine " << endl
         << endl;
}
