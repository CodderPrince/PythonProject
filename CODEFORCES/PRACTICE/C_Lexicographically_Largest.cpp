#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        multiset<int, greater<int>> S;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            S.insert(a[i] + i);
        }

        vector<int> b(S.begin(), S.end());

        for (int i = 0; i < n; ++i) {
            auto it = S.find(a[i] + i);
            S.erase(it);
            cout << *S.begin() << " ";
        }

        cout << endl;
    }

    return 0;
}
