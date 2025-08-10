#include <iostream>

using namespace std;

int main()
{
    // Create an array to store 10 integers
    int numbers[10];

    // Get the number of elements from the user
    int numElements;
    cout << "Enter the number of elements: ";
    cin >> numElements;

    // Try to read the elements from the user
    for (int i = 0; i < numElements; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Print the elements of the array
    for (int i = 0; i < numElements; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}