// prince

#include <bits\stdc++.h>
#define lld long long int 
using namespace std;

int main()
{

    lld n, l, a, b,c, max, temp, i, sum = 0, min, row, col;
    cin >> a>>b>>c;
    lld sum1=sum+a+b+c; 
    for(i=2; i<=a; i++)
    {
        if(i%b !=0 && i%c !=0)
        {
            sum1= sum1+i;
        }
        if(i==b || i==c)
        {
            sum1=sum1+i;
        }
    }
    cout<<sum1<<endl;

    return 0;
}