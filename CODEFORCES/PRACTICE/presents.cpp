//presents
//prince

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],i,j;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=1; i<=n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr[j]==i)
            {
                cout<<j+1<<" ";
            }
        }
        
    }
    cout<<endl;

    return 0;
}