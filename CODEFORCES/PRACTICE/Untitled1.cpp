// input [m][n] matrix and find the largest value

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl
int largestValue(ll m, ll n, ll matrix[][n])

{
    ll max = matrix[0][0];
    ll i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (max < matrix[i][j])
            {
                max = matrix[i][j];
            }
        }
    }
    cout << "Max value of the matrix is: " << max << nl;
}
int main()
{
    ll m, n;
    cout << "Enter the row size: ";
    cin >> m;
    cout << "Enter the coloumn size: ";
    cin >> n;
    ll matrix[m][n];
    ll i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    largestValue(m, n, matrix);

    return 0;
}
