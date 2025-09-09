/*
Author: PRINCE
VARSITY: BRUR
DEPARTMENT: CSE
*/

#include <stdio.h>

int main() 
{
    int t;
    scanf("%d", &t);
    
    while (t--) 
    {
        long long int n;
        scanf("%lld", &n);
        
        long long int a[n], i;
        for (i = 0; i < n; i++) 
        {
            scanf("%lld", &a[i]);
        }
        
        long long int min_bn = a[n-1] + 1; 
        if (n % 2 == 0) 
        {
            printf("%lld\n", min_bn - 2); 
        } 
        else 
        {
            for (i = n - 2; i >= 0; i--) 
            {
                if (min_bn <= a[i]) 
                {
                    min_bn = a[i] + 1;
                }
            }
            printf("%lld\n", min_bn); 
        }
    }
    
    return 0;
}
