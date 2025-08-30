#include <stdio.h>

int main() 
{
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

        int b[105], c[105]; // Arrays to store elements of b and c
        int b_index = 0, c_index = 0; // Index counters for b and c arrays
        int even,odd;
        // Split elements between arrays b and c
        for (int i = 0; i < n; i++) 
        {
            if (a[i] % 2 == 0) 
            {
                b[b_index++] = a[i];
                even++;
            } 
            else 
            {
                c[c_index++] = a[i];
                odd++;
            }
        }

        // If either of the arrays is empty, no valid solution exists
        if (b_index == 0 || c_index == 0) 
        {
            printf("-1\n");
            continue;
        }

        // Print elements of arrays b and c
        for (int i = 0; i < c_index; i++) 
        {
            printf("%d ", c[i]);
        }
        printf("\n");
        for (int i = 0; i < b_index; i++) 
        {
            printf("%d ", b[i]);
        }
        
        
        
        printf("\n");
    }

    return 0;
}
