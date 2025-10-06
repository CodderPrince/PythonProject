#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (auto &x : arr)
    {
        cin >> x;
    }

    sort(arr.begin(), arr.end());
    //for
   //cout<< accumulate(arr.begin(), arr.begin() + k - 2, 0)<<nl;
    ll sum=0;
    for(int i=0; i<=k; i++)
    {
        sum+=arr[i];
    }
    //cout<<sum<<nl;
    if (n == k)
    {
        cout << "No\n";
    }
    //else if (accumulate(arr.begin(), arr.begin() + k - 2, 0) > arr[k - 1])
    else if(sum>arr[k-1])
    {
        cout << "No\n";
    }
    else
    {
        cout << "Yes\n";
    }

    return 0;
}