// prince

#include <bits/stdc++.h>
using namespace std;

int zero(int arr[], int n)
{
    int k = 0;
    int temp[n];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp[k] = arr[i];
            k++;
        }
    }

    while (k < n)
    {
        temp[k] = 0;
        k++;
    }

    for (int k = 0; k < n; k++)
    {
        cout << temp[k] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    zero(arr, n);

    return 0;
}
