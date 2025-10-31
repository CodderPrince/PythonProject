#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int cnt = 0;
    int temp[100001]; // Assuming there are at most 100001 prime numbers up to t

    for (int i = 2; i <= t; i++)
    {
        int j;
        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j * j > i)
        {
            temp[cnt++] = i;
        }
    }

    cout << cnt << endl;
    for (int k = 0; k < cnt; k++)
    {
        cout << temp[k] << " ";
    }
    cout << endl;

    return 0;
}
