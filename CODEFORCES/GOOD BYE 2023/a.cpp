#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> b(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }

        int product = 1;
        for (int i = 0; i < n; ++i)
        {
            product *= b[i];
        }

        if (product == 2023)
        {
            cout << "YES\n";
            for (int i = 0; i < k; ++i)
            {
                cout << "1 ";
            }
            cout << "\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
