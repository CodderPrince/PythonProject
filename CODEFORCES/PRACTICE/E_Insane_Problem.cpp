// prince

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        long long total_pairs = 0;
        long long power = 1;

        while (power * l1 <= r2) {
            long long start = max(l1, (l2 + power - 1) / power);
            long long end = min(r1, r2 / power);

            if (start <= end) {
                total_pairs += (end - start + 1);
            }

            if (power > r2 / k) break;
            power *= k;
        }
        cout << total_pairs << endl;
    }
    return 0;
}
