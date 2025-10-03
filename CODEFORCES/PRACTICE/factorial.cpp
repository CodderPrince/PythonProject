// prince

#include <bits\stdc++.h>
using namespace std;

long long int factorial(long long int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int sum = factorial(n);
        cout << sum << endl;
    }

    return 0;
}
