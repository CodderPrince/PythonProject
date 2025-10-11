// prince

#include <bits\stdc++.h>
using namespace std;

int newArray(int arr1[], int arr2[], int n)
{
    int temp[n + n];
    int i, k = 0;
    for (i = 0; i < n; i++)
    {
        temp[k] = arr2[i];
        k++;
    }
    for (i = 0; i < n; i++)
    {
        temp[k] = arr1[i];
        k++;
    }
    for (k = 0; k < (n + n); k++)
    {
        cout << temp[k] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    int arr1[n], arr2[n], i;
    for (i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    int x = newArray(arr1, arr2, n);

    return 0;
}