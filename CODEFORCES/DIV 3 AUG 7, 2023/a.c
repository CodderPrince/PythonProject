/*
Author: PRINCE
VARSITY: BRUR
DEPARTMENT: CSE
*/

#include <stdio.h>
#include<math.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) 
    {
        int n;
        scanf("%d", &n);
        
        int a[n];
        for (int i = 0; i < n; i++) 
        {
            scanf("%d", &a[i]);
        }
        
        int sum_even = 0, sum_odd = 0;
        for (int i = 0; i < n; i++) 
        {
            if (a[i] % 2 == 0) 
            {
                sum_even += a[i];
            } 
            else 
            {
                sum_odd += a[i];
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
