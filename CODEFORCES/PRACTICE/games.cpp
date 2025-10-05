#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    ll t;
    cin >> t;
    ll a[t], b[t];
    for (int i = 0; i < t; i++)
    {
        cin >> a[i] >> b[i];
    }
    int cnt=0;
    for(int i=0; i<t; i++)
    {
        for(int j=0; j<t; j++)
        {
            if(a[i]==b[j])
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<nl;

    return 0;
}