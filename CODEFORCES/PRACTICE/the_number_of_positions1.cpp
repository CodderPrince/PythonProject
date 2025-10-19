//the_number_of_positions.c
//prince

#include<bits/stdc++.h>
using namespace std;
int main()

{
    int a,b,c;
    cin>>a>>b>>c;

    int r=min(a-b,c+1);

    cout<<r<<endl;

    return 0;
}
