#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007            // 1e9 + 7
#define PI 3.14159265358979323846 // acos(-1)
#define nl "\n"
int main()
{

    priority_queue<int> q;
    q.push(100);
    q.push(105);
    q.push(103);
    q.push(109);
    q.push(99);

    // print
    while (!q.empty())
    {
        cout << q.top() << nl;
        q.pop();
    }

    return 0;
}