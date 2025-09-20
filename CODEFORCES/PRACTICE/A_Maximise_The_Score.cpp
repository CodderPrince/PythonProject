#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> nums(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> nums[i];
        }

        sort(nums.begin(), nums.end());

        int score = 0;
        for (int i = 0; i < n; i++)
        {
            score += nums[i * 2];
        }

        cout << score << endl;
    }

    return 0;
}