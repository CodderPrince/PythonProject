/*
container
iterator
[ inclusive both start and end value]
(exclusive both start and end value)

iterator = keyword
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    vector<int> v={2,67,5,84,9};
    sort(v.begin(),v.end());
    for(auto x: v)
    {
        cout<<x<<" ";
    }
    cout<<nl;

    //sort(v.rbegin(),v.rend());
    reverse(v.begin(),v.end());

    for(auto y: v)
    {
        cout<<y<<" ";
    }
    cout<<nl;

    int x = accumulate(v.begin(),v.end(),0);
    cout<<x<<nl;
/*
    auto it = v.begin();
    cout<<*v.begin()<<nl;

    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<nl;*/
/*
    vector<int> v(5);
    //vector<int>::iterator it;
    
    for(auto &x: v)
    {
        cin>>x;
    
    }
    for(auto &x: v)
    {
        cout<<x<<" ";
    }
    cout<<nl;

    //auto it = v.begin();

    cout<<*it<<nl;

    cout<<*(v.end()-1)<<nl;
    sort(v.begin(),v.end());
    //sort(v.begin(),v.end()-1);
    for(auto &y: v)
    {
        cout<<y<<" ";
    }
    cout<<nl;
*/
    return 0;
}