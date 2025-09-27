// prince

#include <bits\stdc++.h>
using namespace std;

int main()
{
    long long n, k, a;
    cin >> n >> k >> a;

    long long result = n * k * a;

    if (result >= INT_MIN && result <= INT_MAX)
    {
        cout << "int" << endl;
    }
    else if (result >= LLONG_MIN && result <= LLONG_MAX)
    {
        cout << "long long" << endl;
    }
    else
    {
        cout << "double" << endl;
    }

    return 0;
}
