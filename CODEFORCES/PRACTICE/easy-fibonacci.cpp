// prince

#include <bits\stdc++.h>
using namespace std;

int fib(int n)
{
    if (n == 0)
    {
        cout << "0\n";
        return 0;
    }
    else if (n == 1)
    {
        cout << "0 1\n";
        return 1;
    }
    else
    {
        int a = 0, b = 1, c;
        cout << a << " " << b << " ";
        int i;
        for (i = 2; i < n; i++)
        {
            c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
        cout << endl;
        return b;
    }
}
int main()
{
    int n;
    cin >> n;
    int f = fib(n);

    return 0;
}
