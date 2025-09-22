#include <iostream>
#include <vector>
using namespace std;

long long apocalypse_year(vector<long long> &signs)
{
    long long n = signs.size();
    long long year = 0;
    long long sign = 0;
    while (sign < n)
    {
        year = (year / signs[sign]) * signs[sign] + signs[sign];
        sign++;
    }
    return year;
}
int main()
{

    long long t;
    cin >> t;
    while (t--)
    {

        long long n;
        cin >> n;

        vector<long long> signs(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> signs[i];
        }

        cout << apocalypse_year(signs) << "\n";
    }
    return 0;
}