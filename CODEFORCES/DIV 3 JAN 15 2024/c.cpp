#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, f, a, b;
        cin >> n >> f >> a >> b;

        vector<int> moments(n);
        for (int i = 0; i < n; ++i) {
            cin >> moments[i];
        }

        sort(moments.begin(), moments.end());

        int charge = f;
        int result = 0;

        for (int i = 0; i < n; ++i) {
            int diff = (i == 0) ? moments[i] : moments[i] - moments[i - 1];
            int charge_needed = diff * a;

            if (charge_needed > charge) {
                if (b < a) {
                    charge += b;
                } else {
                    result = 1;
                    break;
                }
            }

            charge -= charge_needed;
        }

        if (!result) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
