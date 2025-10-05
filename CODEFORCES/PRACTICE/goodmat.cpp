#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    ll n;
    cin >> n;
    ll mat[n][n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
            if ((i == j) || (i == (n - 1 - j)) || (i == (n - 1) / 2) || (j == (n - 1) / 2))
            {
                sum += mat[i][j];
            }
        }
    }
    cout << sum << nl;

    return 0;
}

/*
1. main diagonal = mukkho korno i==j
2. secondary = second korno ta (n-1-j)=4,3,2,1,0
3. row er jonno (i==(n-1)/2)
4. for coloumn (j==(n-1)/2)
*/