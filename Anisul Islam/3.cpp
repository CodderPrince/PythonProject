#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x;
        if(x%2==0)
        cout<<"Even\n";
        else
        cout<<"Odd\n";
    }

    getch();
}