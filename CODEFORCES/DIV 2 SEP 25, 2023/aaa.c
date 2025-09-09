#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int min_value = a[n - 1] + 1;
        if(n%2==0)
        {
            printf("%d\n",min_value-1);
        }
        else
        {
            for (int i = n - 2; i >= 0; i--) {
            if (a[i] >= min_value) {
                min_value = a[i] + 1;
            } else {
                min_value = a[i];
            }
        }

        printf("%d\n", min_value);
        }
        
    }

    return 0;
}