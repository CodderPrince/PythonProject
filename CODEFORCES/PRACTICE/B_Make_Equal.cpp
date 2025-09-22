#include <iostream>
#include <vector>
using namespace std;

bool canMakeEqual(vector<int>& containers) {
    int n = containers.size();
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += containers[i];
    }
    if (sum % n != 0) // If sum is not divisible by n, then we cannot distribute equally
        return false;
    
    int target = sum / n; // Each container should have this amount of water
    for (int i = 0; i < n; ++i) {
        if (containers[i] > target) // If any container has more water than target, we cannot make them equal
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector<int> containers(n);
        for (int i = 0; i < n; ++i) {
            cin >> containers[i];
        }

        if (canMakeEqual(containers))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
