
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char x[200005];
        scanf("%s", x);

        int len = strlen(x);
        int k = len;

        for (int i = len - 1; i >= 0; i--) {
            if (x[i] >= '5') {
                k = i;
                break;
            }
        }

        for (int i = k; i >= 0; i--) {
            if (x[i] == '9') {
                x[i] = '0';
            } else {
                x[i] = x[i] + 1;
                break;
            }
        }

        if (x[0] == '0') {
            printf("1%s\n", x);
        } else {
            printf("%s\n", x);
        }
    }

    return 0;
}
