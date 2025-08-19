// prince

#include <bits\stdc++.h>
using namespace std;

int max(int arr[], int t)
{
    int m = arr[0];
    int i;
    for (i = 1; i < t; i++)
    {
        if (m < arr[i])
        {
            m = arr[i];
        }
    }
    return m;
}
int min(int arr[], int t)
{
    int n = arr[0];
    int i;
    for (i = 1; i < t; i++)
    {
        if (n > arr[i])
        {
            n = arr[i];
        }
    }
    return n;
}
int main()
{
    int t;
    cin >> t;
    int arr[t];
    int i, m, n;
    for (i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    int maximum = max(arr, t);
    int minimum = min(arr, t);
    cout << minimum << " " << maximum << endl;

    return 0;
}