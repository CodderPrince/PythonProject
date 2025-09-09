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
        
        int min_bn = a[n-1] + 1; // Initialize min_bn with a[n-1] + 1
        
        for (int i = n - 2; i >= 0; i--) {
            if (min_bn <= a[i]) {
                min_bn = a[i] + 1;
            }
        }
        
        printf("%d\n", min_bn);
    }
    
    return 0;
}