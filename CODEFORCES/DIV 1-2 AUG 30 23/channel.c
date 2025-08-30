#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int t;
    scanf(" %d ", &t);
    while (t--) {
        int n, a, q;
        scanf(" %d %d %d ", &n, &a, &q);
        char s[q + 1];
        scanf(" %s ", s);
        int online = a;
        for (int i = 0; i < q; i++) {
            if (s[i] == '+')
                online++;
            else
                online--;
        }
        if (online >= n)
            printf("YES\n");
        else if (online + q < n)
            printf("NO\n");
        else
            printf("MAYBE\n");
    }
    return 0;
}