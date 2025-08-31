#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void solve(char* s) {
    int n = strlen(s);
    int digits[n];
    for (int i = 0; i < n; i++) {
        digits[i] = s[i] - '0';
    }
    bool found = false;
    do {
        int num = 0;
        for (int i = 0; i < n; i++) {
            num = num * 10 + digits[i];
        }
        if (is_prime(num)) {
            printf("%d\n", num);
            found = true;
            break;
        }
    } while (next_permutation(digits, digits + n));
    if (!found) {
        printf("-1\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[10];
        scanf("%s", s);
        solve(s);
    }
    return 0;
}
