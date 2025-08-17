#include <stdio.h>
int main()
{
    int X, N, a,b=0;
    scanf("%d %d", &X, &N);//3 2
    while(N<=0)
    {
        scanf("%d", &N);/*eta just ekta moja kora hoyese muloto hisab kora hobe positive number 
        diyei amora jotoi negative number input dei na keno muloto hisab hobe postive n*/
    }
    for(a=1; a<=N; a++)
    {
        b= b+X;
        X++;
    }
    printf("%d\n",b);
    return 0;
}