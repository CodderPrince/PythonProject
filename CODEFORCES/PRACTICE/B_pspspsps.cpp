#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

// Function to check if a valid permutation exists
bool isValidPermutation(int n, const string& s) {
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        p[i] = i + 1;
    }

    // Iterate through the string and check constraints
    for (int i = 0; i < n; i++) {
        if (s[i] == 'p') {
            set<int> seen;
            for (int j = 0; j <= i; j++) {
                seen.insert(p[j]);
            }
            if ((int)seen.size() != i + 1) return false;
        } else if (s[i] == 's') {
            set<int> seen;
            for (int j = i; j < n; j++) {
                seen.insert(p[j]);
            }
            if ((int)seen.size() != n - i) return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        // Check if a valid permutation exists
        if (isValidPermutation(n, s)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
