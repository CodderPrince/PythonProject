#include <stdio.h>

// Function to copy one string to another
void copyString(char dest[], char src[]) {
    int i;
    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0'; // Null-terminate the destination string
}

// Function to compare two strings
int compareStrings(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0; // Strings are not equal
        }
        i++;
    }
    // If both strings have reached the end simultaneously, they are equal
    return (str1[i] == '\0' && str2[i] == '\0');
}

// Function to add a string to the end of another string
void appendString(char str1[], char str2[]) {
    int i = 0;
    int j = 0;
    while (str1[i] != '\0') {
        i++;
    }
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0'; // Null-terminate the combined string
}

int main() {
    char source[100], destination[100];
    char str1[100], str2[100];
    char str3[100];

    printf("Enter the first string: ");
    scanf("%s", source);

    printf("Enter the second string: ");
    scanf("%s", str1);

    // Test copying one string to another
    copyString(destination, source);
    printf("Copied String: %s\n", destination);

    // Test comparing two strings
    if (compareStrings(str1, str2)) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    printf("Enter a string to append to the first string: ");
    scanf("%s", str3);

    // Test adding a string to the end of another string
    appendString(source, str3);
    printf("Appended String: %s\n", source);

    return 0;
}
