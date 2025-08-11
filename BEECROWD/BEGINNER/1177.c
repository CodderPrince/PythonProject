
#include <stdio.h>
int main()
{
    int N[1000], x, y,z;
    scanf ("%d", &x);
    for(y=0,z=0; y<1000; y++)
    {
        printf("N[%d] = %d\n",y,z);
        z++;
        if(z==x)
            z=0;
    }
    return 0;
}