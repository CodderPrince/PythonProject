#include <stdio.h>
#include <string.h>

int main() {
    int t; // number of test cases
    scanf("%d", &t);
    while (t--) {
        char x[200001]; // the number as a string
        scanf("%s", x);
        int n = strlen(x); // the length of the number
        int k = n - 1; // the initial position to round
        while (k > 0) {
            if (x[k] >= '5') {
                // round up the digit at position k
                x[k] = '0';
                int i = k - 1;
                while (i >= 0 && x[i] == '9') {
                    // carry over the digit at position i
                    x[i] = '0';
                    i--;
                }
                if (i >= 0) {
                    // increase the digit at position i by 1
                    x[i]++;
                    k = i;
                } else {
                    // add a leading 1 to the number
                    printf("1");
                    k = 0;
                }
            } else {
                // round down the digit at position k
                x[k] = '0';
                k--;
            }
        }
        printf("%s\n", x); // print the final number
    }
    return 0;
}
