#include <stdio.h>
int main()
{
    int a,b=0;
    double c,d=0;
    while(1)
    {
        scanf("%d", &a);
        if(a<0)
            break;
        else
        {
            b+=a;
            d++;
        }
    }
    c=b/d;
    printf("%.2lf\n",c);
    return 0;
}