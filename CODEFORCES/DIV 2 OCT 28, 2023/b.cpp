#include <iostream>
#include <string>
using namespace std;
#define ll long long int
bool isGoodString(const string &s)
{

    char prev = '\0';
    for (char c : s)
    {

        if (c == prev)
        {
            return false;
        }

        prev = c;
    }

    return true;
}

bool canMakeGoodString(const string &s, const string &t)
{
    ll n = s.length();
    ll m = t.length();

    if (t.find("11") != string::npos || t.find("00") != string::npos)
    {
        return false;
    }

    ll cnt0 = 0, cnt1 = 0;
    for (char c : s)
    {
        if (c == '0')
        {
            cnt0++;
        }
        else
        {
            cnt1++;
        }
    }

    if (cnt0 % 2 == 1 && cnt1 % 2 == 1)
    {
        return false;
    }

    if ((s.find("00") == string::npos && s.find("11") == string::npos) && (t.substr(m - 2) == "00" || t.substr(m - 2) == "11"))
    {
        return false;
    }

    if ((t.substr(m - 2) == "00" || t.substr(m - 2) == "11") && cnt0 % 2 == 1 && cnt1 % 2 == 1)
    {
        return false;
    }

    return true;
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        string s, t;
        cin >> s >> t;

        cout << (isGoodString(s) || canMakeGoodString(s, t) ? "Yes" : "No") << endl;
    }

    return 0;
}
