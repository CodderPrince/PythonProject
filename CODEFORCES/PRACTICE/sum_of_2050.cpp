//Sum of 2050
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        int count = 0;
        while(n>=2050)
        {
            count++;
            ll x = 2050;
            while(x<=n)
            {
                x = x*10;
            }
            x = x/10;
            n = n-x;
        }
        if(n != 0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<count<<endl;
        }
    }

    return 0;
}