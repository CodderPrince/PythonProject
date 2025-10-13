#include <bits\stdc++.h>
using namespace std;

int shift(int arr[], int n, int x)
{
   
    int temp[n], i;

    for (i = 0; i < n; i++)
    {
        temp[(i + x) % n] = arr[i];
    }

    for (i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    shift(arr, n, x);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
