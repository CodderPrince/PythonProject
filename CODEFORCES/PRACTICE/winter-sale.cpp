// prince

#include <bits\stdc++.h>
using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;
    double sum = 0;
    sum = (double)(b * 100) / (100 - a);
    cout << fixed << setprecision(2) << sum << endl;

    return 0;
}