/*
Author: PRINCE
VARSITY: BRUR
DEPARTMENT: CSE
*/

#include <stdio.h>
#include<math.h>

int main() 
{
    int t;
    scanf("%d", &t);

    while (t--) 
    {
        int n;
        scanf("%d", &n);

        long long int arr[200005];
        arr[0] = 3;
        for (int i = 1; i < n; i++) 
        {
            arr[i] = arr[i - 1] + 5; 
        }

        
        for (int i = 0; i < n; i++)
        {
            printf("%lld ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
