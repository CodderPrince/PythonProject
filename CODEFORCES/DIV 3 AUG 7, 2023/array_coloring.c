/*
Author: PRINCE(Hacker_3.0)
University: BRUR
Department: CSE
*/

#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int main() 
{
    int m;
    scanf("%d", &m);
    while (m--) 
    {
        int p;
        scanf("%d", &p);
        int a[p];
        for (int i = 0; i < p; i++) 
        {
            scanf("%d", &a[i]);
        }
        int sum_even = 0, sum_odd = 0;
        for (int i = 0; i < p; i++) 
        {
            if (a[i] % 2 == 0) 
            {
                sum_even = sum_even + a[i];
            } 
            else 
            {
                sum_odd = sum_odd + a[i];
            }
        }
        if ((sum_even % 2 == 0 && sum_odd % 2 == 0) || (sum_even >= 2 && sum_odd >= 1 && (sum_even - 1) % 2 == 0)) 
        {
            printf("YES\n");
        } 
        else 
        {
            printf("NO\n");
        }
    }
    
    return 0;
}
