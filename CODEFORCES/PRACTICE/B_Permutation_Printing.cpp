#include <iostream>
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

        vector<int> permutation(n);

        int largest = n;
        int smallest = 1;

        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0)
            {
                permutation[i] = largest;
                largest--;
            }
            else
            {
                permutation[i] = smallest;
                smallest++;
            }
        }

        for (int i = 0; i < n; ++i)
        {
            cout << permutation[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
