#include <stdio.h>

long long power(int x, int n) {
    if (n == 0) {
        return 1;
    }
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= x;
    }
    return result;
}

long long calculateEquation(int x, int n) {
    long long result = 0;
    for (int i = 0; i <= n; i += 2) {
        result += power(x, i);
    }
    return result;
}

int main() {
    int x, n;
    scanf("%d %d", &x, &n);

    long long s = calculateEquation(x, n);
    printf("%lld\n", s-1);

    return 0;
}
