#include <iostream>
#include <vector>

using namespace std;

int calculateDigitSum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int calculateSum(int n)
{
    vector<int> prefixSum(n + 1, 0);

    for (int i = 1; i <= n; ++i)
    {
        int digitSum = calculateDigitSum(i);
        prefixSum[i] = prefixSum[i - 1] + digitSum;
    }

    return prefixSum[n];
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int sum = calculateSum(n);
        cout << sum << "\n";
    }

    return 0;
}