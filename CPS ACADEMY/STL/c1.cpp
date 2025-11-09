#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007            // 1e9 + 7
#define PI 3.14159265358979323846 // acos(-1)
#define nl "\n"

int main()
{
    // vector<ll>v(10,7) ;
    // cout<<v.size()<<nl;

    vector<ll>::iterator it;
    /*  for(auto &x:v)
      {
          x+=2;
      }
      for(it=v.begin(); it != v.end();it++)
      {
          cout<<*it  <<" ";
      }
      cout<<nl;*/
    /*for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<nl;*/
    vector<int> v = {3, 2, 5,4,2, 6, 7,1};
    //sort(v.begin()+1, v.begin()+1);
   // sort(v.begin(),v.end(),greater<int>());
   //sort(v.rbegin(),v.rend());
   reverse(v.begin(),v.end());
    for (auto &x : v)
    {
        cout << x << " ";
    }
    cout << nl;
    ///cout<<v.front()<<nl;
    // v.pop_front();
    cout<<*(v.begin())<<nl;
    v.erase(v.begin()+1);
    cout<<*(v.begin()+1) <<nl;
    cout<<v.front()<<nl;
    cout<<v.back()<<nl;
    v.pop_back();
    cout<<v.back()<<nl;

    return 0;
}