// sequence-number.cpp
// prince

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        if (n <= 0 || m <= 0)
        {
            break;
        }

        int sum = 0,min,max;
        if(n<m)
        {
            max=m;
            min=n;
        }
        else
        {
            max=n;
            min=m;
        }
        for (int i = min; i <= max; i++)
        {
            sum = sum+i;
            cout << i << " ";
        }

        cout << "sum =" << sum << endl;
    }

    return 0;
}
