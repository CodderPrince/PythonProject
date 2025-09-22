//antonandletters
#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<char> s;//create blank set
    int n,k;
    while(n--)
    {
        cin>>k;//{a, b, c}
        s.insert(k);//duplecate element not allow {1,7,3}
    }
    cout<<s.size();//3

    return 0;
}