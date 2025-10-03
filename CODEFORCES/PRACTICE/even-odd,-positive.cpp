// prince

#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, even = 0, odd = 0, pos = 0, neg = 0;
    int arr[n];
    for (i = 0; i < n; i = i + 1)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        if (arr[i] % 2 != 0)
        {
            odd++;
        }
        if (arr[i] > 0)
        {
            pos++;
        }
        if (arr[i] < 0)
        {
            neg++;
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;

    return 0;
}