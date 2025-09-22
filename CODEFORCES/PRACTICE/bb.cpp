#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int operations = 0;

        // Count the number of adjacent pairs (A, B)
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == 'A' && s[i + 1] == 'B') {
                ++operations;
                ++i; // Skip the next character since it's already part of the swap
            }
        }

        cout << operations << "\n";
    }

    return 0;
}
