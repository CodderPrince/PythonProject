#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

// create function
void insertionSort(vector<int> arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        // let key
        int key = arr[i]; 
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    // print section
    cout << "After sorting: ";
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
    cout << "Before sorting: ";
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << nl;

    // called function
    insertionSort(arr);

    return 0;
}