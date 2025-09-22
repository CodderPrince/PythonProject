// prince

#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;

        long long row_capacity = m;
        long long total_seats = 2 * m;
        long long seated_a = min(a, row_capacity);
        long long seated_b = min(b, row_capacity);
        long long remaining_seats = total_seats - seated_a - seated_b;

        long long seated_c = min(c, remaining_seats);
        cout << seated_a + seated_b + seated_c << endl;
    }
    return 0;
}
