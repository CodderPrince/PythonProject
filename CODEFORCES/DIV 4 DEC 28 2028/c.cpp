#include <bits\stdc++.h>
using namespace std;

// A function to check if Calin can build a square using all the given squares
bool canBuildSquare(int n, int a[])
{
    // Calculate the total area of the squares
    long long totalArea = 0;
    for (int i = 0; i < n; i++)
    {
        totalArea += a[i];
    }
    // Check if the total area is a perfect square
    long long side = sqrt(totalArea);
    return (side * side == totalArea);
}
//prince
int main()
{
    // Read the number of test cases
    int t;
    cin >> t;
    // Process each test case
    for (int i = 0; i < t; i++)
    {
        // Read the number of buckets
        int n;
        cin >> n;
        // Read the number of squares in each bucket
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        // Check if Calin can build a square
        bool result = canBuildSquare(n, a);
        // Output the answer
        if (result)
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
