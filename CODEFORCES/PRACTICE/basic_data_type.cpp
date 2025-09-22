#include <iostream>
using namespace std;

int main() {
    int i;
    long long ll;
    char ch;
    float f;
    double d;

    cin >> i >> ll >> ch >> f >> d;

    cout << i << endl;
    cout << ll << endl;
    cout << ch << endl;
    cout << fixed << f << endl;
    cout.precision(1); // Set precision for double
    cout << fixed << d << endl;

    return 0;
}
