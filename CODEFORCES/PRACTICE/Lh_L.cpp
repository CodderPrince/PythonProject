#include <bits\stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> sticks(n);
    for (int i = 0; i < n; i++)
    {
        cin >> sticks[i];
    }

    sort(sticks.begin(), sticks.end());

    if (k == n || accumulate(sticks.begin(), sticks.begin() + k - 1, 0) >= sticks[k - 1])
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }

    return 0;
}