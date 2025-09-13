/*
Author: PRINCE
VARSITY: BRUR
DEPARTMENT: CSE
*/

#include <stdio.h>

int main() 
{
    int m;
    scanf("%d", &m);
    
    while (m--) 
    {
        int z;
        scanf("%d", &z);
        int dig[z];
        
        for (int i = 0; i < z; i++) 
        {
            scanf("%d", &dig[i]);
        }
        int min_index = 0;
        for (int i = 1; i < z; i++) 
        {
            if (dig[i] < dig[min_index]) 
            {
                min_index = i;
            }
        }
        
        dig[min_index]++;
        long long product = 1;
        for (int i = 0; i < z; i++) 
        {
            product = product*dig[i];
        }
        
        printf("%lld\n", product);
    }
    
    return 0;
}
