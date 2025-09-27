#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t; 
    cin >> t; 
    while (t--) {
        int n; 
        cin >> n;
        vector<int> a(n), b(n); // Input array a and output array b
        unordered_map<int, int> freq; // Frequency map
        
        int current_mode = 1; // Initialize with a valid value
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++; // Update frequency of the current value
            
            if (freq[a[i]] > freq[current_mode] || 
                (freq[a[i]] == freq[current_mode] && a[i] < current_mode)) {
                current_mode = a[i]; // Update the mode
            }
            b[i] = current_mode; // Assign mode to b[i]
        }
        
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
