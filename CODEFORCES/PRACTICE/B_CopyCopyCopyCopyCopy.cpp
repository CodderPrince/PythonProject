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
        ll arr[n];
        // vector<ll> arr(n);
        set<ll> st;
        /*
        #include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
   vector<ll>arr={1,2,5,3,2};
   cout<<arr.size();

return 0;
}*/
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            st.insert(arr[i]);
        }
        cout << st.size() << nl;
    }

    return 0;
}