//2-sum
//prince

#include <stdio.h>

int main() 
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);

    int count = 0;
    long long int i, j, arr[a];

    for (i = 0; i < a; i++) 
    {
        scanf("%lld", &arr[i]);
    }

    for (i = 0; i < a; i++) 
    {
        for (j = i + 1; j < a; j++) 
        {
            if ((arr[i] + arr[j]) == b) 
            {
                count++;
            }
        }
    }

    if (count >= 1) 
    {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }

    return 0;
}

