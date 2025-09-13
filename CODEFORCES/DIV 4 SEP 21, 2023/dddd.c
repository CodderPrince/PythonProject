/*
Author: PRINCE
VARSITY: BRUR
DEPARTMENT: CSE
*/

#include <stdio.h>
#include <string.h>

int y(char p[], int n, int k) 
{
    int operations = 0;
    int i = 0;

    while (i < n) 
    {
        if (p[i] == 'B') 
        {
            operations++;
            for (int j = i; j < i + k && j < n; j++) 
            {
                p[j] = 'W';
            }
        }

        i++;
    }

    return operations;
}

int main() 
{
    int e;
    scanf("%d", &e);

    while (e--) 
    {
        int n, k;
        scanf("%d %d", &n, &k);

        char p[200005];
        scanf("%s", p);

        int result = y(p, n, k);
        printf("%d\n", result);
    }

    return 0;
}