// prince

#include <bits/stdc++.h>
using namespace std;

int distinct(int arr[], int n)
{
    set<int> distinctValues;

    for (int i = 0; i < n; i++)
    {
        distinctValues.insert(arr[i]);
    }

    return distinctValues.size();
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

    int dis = distinct(arr, n);
    cout << dis << endl;

    return 0;
}
