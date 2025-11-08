#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007            // 1e9 + 7
#define PI 3.14159265358979323846 // acos(-1)
#define nl "\n"
int main()
{
    stack<int> st;
    st.push(100);
    st.push(101);
    st.push(102);

    //print
    while(!st.empty())
    {
        cout<<st.top()<<nl;
        st.pop();
    }

    return 0;
}