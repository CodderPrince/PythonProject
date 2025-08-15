#include <stdio.h>
int main()
{
   int a,b,c,d,e,N, p, min;
    scanf("%d", &N);
    int X[N];
    for(a=0; a<N; a++)
        scanf("%d", &X[a]);
    min=X[0];
    for(a=1; a<N; a++)
    {
        if(min>X[a])
        {
            min=X[a];
            p=a;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", min, p);
    return 0;
}