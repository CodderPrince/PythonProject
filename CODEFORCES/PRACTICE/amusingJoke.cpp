#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    string s4 = s1 + s2;
    sort(s4.begin(), s4.end());
    sort(s3.begin(), s3.end());

    if (s3 == s4)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}