#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007            // 1e9 + 7
#define PI 3.14159265358979323846 // acos(-1)
#define nl "\n"

int main()
{
    vector<int>v={2,3,6,5,3,7};
    sort(v.begin(),v.end());

    int sz = unique(v.begin(),v.end()) - v.begin();

    cout<<sz<<nl;
    for(int i=0;i<sz; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<nl;  

    //cout<<*max_element(v.begin(),v.end());

    ll a = *max_element(v.begin(),v.end());
    ll b = max_element(v.begin(),v.end())-v.begin();
    cout<<a<<nl;
    cout<<b<<nl; 
    ll c = *min_element(v.begin(),v.end());
    ll d = min_element(v.begin(),v.end())-v.begin();

    cout<<c<<nl;
    cout<<d<<nl;
    
    return 0;
}