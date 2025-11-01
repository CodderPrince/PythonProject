#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

const int INF = 1e9 + 7;

int main()
{
    int test_cases;
    cin >> test_cases;

    while (test_cases--)
    {
        int array_length;
        cin >> array_length;
        string input_string;
        cin >> input_string;

        vector<int> integer_array(array_length);
        vector<int> prefix_sum(array_length + 1, 0);

        for (int i = 0; i < array_length; i++)
        {
            if (input_string[i] == '+')
            {
                integer_array[i] = 1;
            }
            else
            {
                integer_array[i] = -1;
            }

            prefix_sum[i + 1] = prefix_sum[i] + integer_array[i];
        }

        vector<int> dp(array_length + 1, INF);
        dp[0] = 0;

        for (int i = 1; i <= array_length; i++)
        {
            int sum = 0;
            for (int j = 0; j < i; j++)
            {
                int penalty = abs(prefix_sum[i] - prefix_sum[j]) * (i - j);
                dp[i] = min(dp[i], dp[j] + penalty);
            }
        }

        cout << dp[array_length] << endl;
    }

    return 0;
}
