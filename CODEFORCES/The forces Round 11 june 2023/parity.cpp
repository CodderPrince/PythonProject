#include <iostream>
#include <vector>

using namespace std;

int main() {
    int b, k;
    cin >> b >> k;

    vector<int> a(k);
    for (int i = 0; i < k; i++) {
        cin >> a[i];
    }

    int lastDigit = a[k - 1];

    if (lastDigit % 2 == 0) {
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }

    return 0;
}
