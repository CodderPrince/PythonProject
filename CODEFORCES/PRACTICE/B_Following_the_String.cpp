#include <iostream>
#include <string>
#include <vector>
using namespace std;

string constructString(vector<int>& trace) {
    int n = trace.size();
    string s(n, 'a'); // Initialize the string with 'a' characters

    for (int i = 0; i < n; i++) {
        int count = trace[i];

        for (int j = 0; j < count; j++) {
            s[i - j - 1] = s[i - j]; // Set the characters based on the trace
        }
    }

    return s;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> trace(n);
        for (int i = 0; i < n; i++) {
            cin >> trace[i];
        }

        string result = constructString(trace);
        cout << result << endl;
    }

    return 0;
}