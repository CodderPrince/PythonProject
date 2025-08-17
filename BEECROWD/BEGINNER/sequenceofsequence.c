#include <stdio.h>
int main()
{
    int n, i, j, cnt=0;
    while(scanf("%d", &n) != EOF)
    {
        int num = 1;
        cnt++;
        num = num + ((n*(n + 1)) / 2);//Fibonacci series law
        if(n == 0)
        {
              printf("Caso %d: %d numero\n", cnt, num);
              printf("0");
        }
        else
        {
            printf("Caso %d: %d numeros\n", cnt, num);
            printf("0");
        } 
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=i; j++)
                printf(" %d", i);
        }
        printf("\n\n");
    }
    return 0;
}