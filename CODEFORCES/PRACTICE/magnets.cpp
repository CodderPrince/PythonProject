//prince

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string str[t];
    int i,count=0;
    for(i=0; i<t; i++)
    {
        cin>>str[i];
    }
    for(i=0; i<t; i++)
    {
        if(str[i] != str[i+1])
        {
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}