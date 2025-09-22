// prince

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, a, b, c;
        cin >> n >> a >> b >> c;

        vector<long long> days = {a, b, c};
        long long cycle_sum = a + b + c;

        long long cycles = n / cycle_sum;
        long long total_distance = cycles * cycle_sum;
        long long day = cycles * 3;

        for (int i = 0; total_distance < n; i++)
        {
            total_distance += days[i % 3];
            day++;
        }

        cout << day << endl;
    }
    return 0;
}
