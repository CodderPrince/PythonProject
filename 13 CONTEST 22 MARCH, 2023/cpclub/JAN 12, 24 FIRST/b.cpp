#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string word;
        cin >> word;

        int lowercaseCount = 0, uppercaseCount = 0;

        for (int i = 0; i < n; i++)
        {
            if (islower(word[i]))
            {
                lowercaseCount++;
            }
            else
            {
                uppercaseCount++;
            }
        }

        cout << lowercaseCount << " " << uppercaseCount << endl;
    }

    return 0;
}
