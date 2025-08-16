#include <stdio.h>
int main()
{
    int x, i, j, n,c;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
    scanf("%d", &x);
    c=0;
    for(j=1; j<=x; j++)
    {
	if(x%j==0)
    c++;
    }
    if(c==2)
    {
       printf("%d eh primo\n", x);
	}
    else
    {
       printf("%d nao eh primo\n", x);
	}
    }
    return 0;
}