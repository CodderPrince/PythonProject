//prince

#include <stdio.h>
#include<math.h>


int main() 
{
    int e;
    scanf("%d", &e);

    while (e--) 
    {
        int y;
        scanf("%d", &y);

        long long int ar[200005];
        ar[0] = 3;
        for (int i = 1; i < y; i++) 
        {
            ar[i] = ar[i - 1] + 5; 
        }

        
        for (int i = 0; i < y; i++)
        {
            printf("%lld ", ar[i]);
        }
        printf("\n");
    }

    return 0;
}
