#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        char s[51];
        scanf("%d %s", &n, s);

        int count = 1;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[i-1]) {
                count++;
            }
        }

        printf("%d\n", (count+1)/2);
    }

    return 0;
}