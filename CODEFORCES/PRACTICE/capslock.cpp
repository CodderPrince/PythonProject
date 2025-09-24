#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    string str;
    cin >> str;

    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] - 32;
    }

    for (ll i = 1; i < str.size(); i++)
    {

        if (str[i] >= 'A' && str[i] <= 'Z')
        {

            str[i] = str[i] + 32;
        }
        else
        {
            str[0] = str[0];
        }
    }
    cout << str << nl;

    return 0;
}