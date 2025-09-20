#include <bits\stdc++.h>
using namespace std;

bool is_jagged(int a[], int n)
{
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i - 1] < a[i] && a[i] > a[i + 1])
        {
            return true;
        }
    }
    return false;
}

void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

bool sort_permutation(int a[], int n)
{

    if (is_sorted(a, a + n))
    {
        return true;
    }
    if (!is_jagged(a, n))
    {
        return false;
    }

    while (is_jagged(a, n))
    {
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i - 1] < a[i] && a[i] > a[i + 1])
            {
                swap(a, i, i + 1);
                break;
            }
        }
    }

    if (is_sorted(a, a + n))
    {
        return true;
    }

    return false;
}

int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int a[n]; 
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (sort_permutation(a, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
