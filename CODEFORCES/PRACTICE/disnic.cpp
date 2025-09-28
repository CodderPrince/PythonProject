#include <bits\stdc++.h>
using namespace std;

int disn(int arr[], int n)
{
    set<int> distinctValues;
    int i;
    for (i = 0; i < n; i++)
    {
        distinctValues.insert(arr[i]);
    }
    return distinctValues.size();
}
int main()
{
    int n;
    cin >> n;
    int arr[n], i;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int d = disn(arr, n);
    cout << d << endl;

    return 0;
}
