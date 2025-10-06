#include <iostream>
using namespace std;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;

    // Calculate the largest number of Katryoshkas that can be made
    long long maxKatryoshkas = min(min(n / 2, m / 1), k / 1);

    cout << maxKatryoshkas << endl;

    return 0;
}
