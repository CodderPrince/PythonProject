#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007            // 1e9 + 7
#define PI 3.14159265358979323846 // acos(-1)
#define nl "\n"

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    cout << "Enter array elements: ";
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter index to delete elements: ";
    int ind;
    cin >> ind;

    // check index is valid or not
    if (ind < 0 || ind > (n - 2))
    {
        cout << "Invalid index!\n";
        return 0;
    }

    // 1 2 3 4 5
    // 2
    int x = ind + 3;
    for (int i = ind; i < n; i++)
    {
        arr[i] = arr[x];
        x++;
    }
    for (int i = 0; i < n - ind; i++)
    {
        cout << arr[i] << " ";
    }
    cout << nl;

    /*for (auto &y : arr)
    {
        cout << y << " ";
    }
    cout << nl;*/

    return 0;
}