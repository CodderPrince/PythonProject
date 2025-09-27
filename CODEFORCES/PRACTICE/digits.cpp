// prince

#include <bits\stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, l;
        cin >> n;
        if (n == 0)
        {
            cout << "0";
        }
        while (n > 0)
        {
            l = n % 10;
            cout << l << " ";
            n = n / 10;
        }
        cout << endl;
    }

    return 0;
}