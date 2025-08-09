#include <bits/stdc++.h>
using namespace std;

#define nl endl

// Create insertion sort function
void insertionsort(vector<int> &arr) // Use reference to avoid copying
{
    for (int i = 1; i < arr.size(); i++)
    {
        int key = arr[i];
        cout << "Key: " << key << nl;
        int j = i - 1;

        // Shift elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
            for (auto k : arr)
            {
                cout << k << " ";
            }
            cout << nl;
        }
        arr[j + 1] = key;
    }

    cout << "After sort: ";
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {23, 1, 10, 5, 2};

    cout << "Before sort: ";
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << nl;

    // Call insertion sort
    insertionsort(arr);

    return 0;
}
