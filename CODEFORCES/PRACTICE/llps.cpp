
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == str[str.size() - 1])
        {
            cout << str[i];
        }
    }
    cout << nl;

    return 0;
}