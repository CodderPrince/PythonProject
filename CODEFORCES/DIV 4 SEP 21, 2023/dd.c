/*
Author: PRINCE
VARSITY: BRUR
DEPARTMENT: CSE
*/

#include <stdio.h>
#include <string.h>

int x(char str[], int n, int k) 
{
    int operations = 0;
    int i = 0;

    while (i < n) 
    {
        if (str[i] == 'B') 
        {
            operations++;
            for (int j = i; j < i + k && j < n; j++) 
            {
                str[j] = 'W';
            }
        }

        i++;
    }

    return operations;
}

int main() 
{
    int T;
    scanf("%d", &T);

    while (T--) 
    {
        int n, k;
        scanf("%d %d", &n, &k);

        char str[200005];
        scanf("%s", str);

        int result = x(str, n, k);
        printf("%d\n", result);
    }

    return 0;
}