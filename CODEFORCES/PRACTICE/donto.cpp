#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string str;
        cin >> str;
        map<char, int> mp;
        ll flag = 0;
        for (int i = 0; i < str.size(); i++)
        {
            mp[str[i]]++;

            char temp = str[i];

            while (str[i] == temp)
            {
                i++;
            }

            i--;

            if (mp[temp] > 1)
            {
                flag = 1;
                // break;
            }
        }

        if (flag)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }

    return 0;
}

/*
AABACD
1. str[i]=A , 0 index = 1 , while loop eta increase korbe i = 2
then i-- = 1 and also for loop increase i = 2
er phole AA both are count only one time
when i = 3
then mp er 0 index value = 2
which is true condition (if(mp[temp]>1))
*/