// prince

#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << max << endl;

    return 0;
}
