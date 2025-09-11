#include <stdio.h>
#include <string.h>

void decryptMessage(char encryptedMsg[], int n) {
    char decryptedMsg[n / 2 + 1];
    int j = 0;

    for (int i = 0; i < n; i += 2) {
        decryptedMsg[j] = encryptedMsg[i];
        j++;
    }

    decryptedMsg[j] = '\0';
    printf("%s\n", decryptedMsg);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char encryptedMsg[n];
        scanf("%s", encryptedMsg);

        decryptMessage(encryptedMsg, n);
    }

    return 0;
}
