
#include <iostream>
using namespace std;

// A function to find the GCD of two numbers using the Euclidean algorithm
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

// A function to find the maximum balance of a problemset
int max_balance(int x, int n)
{
    // If x is divisible by n, then the maximum balance is x / n
    if (x % n == 0)
        return x / n;
    // Otherwise, the maximum balance is the GCD of x / n and x % n
    return gcd(x / n, x % n);
}

int main()
{
    // Read the number of test cases
    int t;
    cin >> t;
    // Loop over the test cases
    while (t--)
    {
        // Read the values of x and n
        int x, n;
        cin >> x >> n;
        // Print the maximum balance of the problemset
        cout << max_balance(x, n) << endl;
    }
    return 0;
}
