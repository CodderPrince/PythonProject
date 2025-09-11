/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR                                *
 *          --FB: https://facebook.com/mdannahian     *
 *            PB: Tomi Mia's Probability [13]         *
 ******************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned long long fact(int num)
{
    int j;
    unsigned long long total = 1;
    for (j = 1; j <= num; j++)
    {
        total *= j;
    }
    return total;
}

int main()
{

    int n;
    scanf("%d", &n);
    int i;
    getchar();
    for (i = 0; i < n; i++)
    {
        char str[300];
        gets(str);
        char str2[300];
        strcpy(str2, str);
        char *ptr;
        ptr = strtok(str2, " ");
        int num = 0;
        while (ptr != NULL)
        {
            num++;
            ptr = strtok(NULL, " ");
        }
        free(ptr);
        unsigned long long total = 1;
        total = fact(num);
        int j = 0;
        char *ptr2;
        char str3[num][30];
        ptr2 = strtok(str, " ");
        while (ptr2 != NULL)
        {
            strcpy(str3[j++], ptr2);
            ptr2 = strtok(NULL, " ");
        }
        free(ptr2);
        int ara[num];
        memset(ara, 0, sizeof(ara));
        for (j = 0; j < num; j++)
        {
            int k;
            int cnt = 1;
            if (ara[j] == 0)
                for (k = j + 1; k < num; k++)
                {
                    if (strcmp(str3[j], str3[k]) == 0)
                    {
                        ara[j] = 1;
                        ara[k] = 1;
                        cnt++;
                    }
                }
            total /= fact(cnt);
        }
        printf("%d/%llu\n", 1, total);
    }

    return 0;
}