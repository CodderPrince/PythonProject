#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, r;
        cin >> a >> b >> r;

        long long x = min(r, max(a, b));

        long long result = abs((a ^ x) - (b ^ x));
        cout << result << endl;
    }

    return 0;
}