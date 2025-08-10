#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Create a vector to store integers
    vector<int> numbers;

    // Get the number of elements from the user
    int numElements;
    cout << "Enter the number of elements: ";
    cin >> numElements;

    // Read the elements from the user
    for (int i = 0; i < numElements; i++)
    {
        int element;
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        numbers.push_back(element);
    }

    // Print the elements of the vector
    for (int element : numbers)
    {
        cout << element << " ";
    }

    return 0;
}