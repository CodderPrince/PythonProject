#include <iostream>
#include <string>

using namespace std;

void decimalToBinary(int n) {
    if (n <= 0) {
        return; // Base case: stop recursion when n is less than or equal to 0
    }
    decimalToBinary(n / 2); // Recursively call the function with n/2
    cout << n % 2; // Print the remainder (binary digit)
}

int main() {
    int t;
    cin >> t; // Read the number of test cases

    while (t--) {
        int n;
        cin >> n; // Read the decimal number for this test case
        decimalToBinary(n); // Call the recursive function to print the binary equivalent
        cout << endl; // Print a newline after each test case
    }

    return 0;
}
