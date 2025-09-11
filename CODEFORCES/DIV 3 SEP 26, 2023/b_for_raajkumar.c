//raajkumar_30

#include <stdio.h>
#include<math.h>
#include<string.h>

int main() 
{
    int p;
    scanf("%d", &p);

    while (p--) 
    {
        int x;
        scanf("%d", &x);

        long long int arr[200005];
        arr[0] = 3;
        for (int i = 1; i < x; i++) 
        {
            arr[i] = arr[i - 1] + 5; 
        }

        
        for (int i = 0; i < x; i++)
        {
            printf("%lld ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
