// prince

#include <bits\stdc++.h>
using namespace std;

int separated(int n, string ch)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << ch << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string ch;
        cin >> n;
        cin >> ch;
        int sep = separated(n, ch);
    }

    return 0;
}