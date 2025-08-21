//prince

#include<bits\stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,z;
        cin>>n;
        if(n<7 || n==9)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if((n-5) % 3 == 0)
            {
                cout<<"YES"<<endl<<"1 2 "<<n-3<<endl;
            }
            else
            {
                cout<<"YES"<<endl<<"1 4 "<<n-5<<endl;
            }
        }
    }

    return 0;
}