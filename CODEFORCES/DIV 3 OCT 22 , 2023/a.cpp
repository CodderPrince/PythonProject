#include <iostream>
#include <string>

using namespace std;

int min_seconds(const string &pin) {
    int seconds = 0;
    int current_digit = 1;

    for (int i = 0; i < 4; i++) {
        int target_digit = pin[i] - '0';

        int diff = abs(target_digit - current_digit);
        int steps_forward = diff;
        int steps_backward = 10 - diff;

        if (steps_forward < steps_backward) {
            seconds += steps_forward;
        } else {
            seconds += steps_backward;
        }

        seconds++;  // Press the digit
        current_digit = target_digit;
    }

    return seconds;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string pin;
        cin >> pin;
        int result = min_seconds(pin);
        cout << result << endl;
    }

    return 0;
}
