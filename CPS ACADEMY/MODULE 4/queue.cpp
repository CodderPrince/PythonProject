#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007            // 1e9 + 7
#define PI 3.14159265358979323846 // acos(-1)
#define nl "\n"
int main()
{
    queue<int> q;
    q.push(100);
    q.push(101);
    q.push(102);
     //print
     while(!q.empty())
     {
        cout<<q.front()<<nl;
        q.pop();
     }
    return 0;
}