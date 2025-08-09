#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007            // 1e9 + 7
#define PI 3.14159265358979323846 // acos(-1)
#define nl "\n"1

// create new function
void permute(string str, int left, int right, set<string> &arr)
{
    // base case
    if (left == right)
    {
        arr.insert(str);
    }

    else
    {
        for (int i = left; i <= right; i++)
        {
            swap(str[left], str[i]);
            permute(str, left + 1, right, arr);
            // backtracking for original string
            swap(str[left], str[i]);
        }
    }
}

int main()
{
    string str;
    cin >> str;
    int left = 0, right = str.size() - 1;
    set<string> arr;

    permute(str, left, right, arr);

    // print

    for (auto &x : arr)
    {
        cout << x << nl;
    }

    return 0;
}