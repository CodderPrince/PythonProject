// prince

#include <bits\stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int original = n;
    long long int reversed = 0;

    while (n > 0)
    {
        long long int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    if (original == reversed)
    {
        cout << original << endl;
        cout << "YES" << endl;
    }
    else
    {
        cout << reversed << endl;
        cout << "NO" << endl;
    }

    return 0;
}
