#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // Calculate the last two digits of the product efficiently
    int lastTwoDigits = ((a % 100) * (b % 100)) % 100;
    lastTwoDigits = (lastTwoDigits * (c % 100)) % 100;
    lastTwoDigits = (lastTwoDigits * (d % 100)) % 100;

    // Display the result
    cout << (lastTwoDigits < 10 ? "0" : "") << lastTwoDigits << endl;

    return 0;
}
