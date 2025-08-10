//prince

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, count = 0;
        cin >> n;
        for (int b = 1; b < n; ++b) {
            int a = n - b;
            if (a > 0) count++;
        }
        cout << count << endl;
    }
    return 0;
}
