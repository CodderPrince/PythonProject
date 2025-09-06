#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
         int x,y,z;
        scanf("%d", &n);

        if(n<7)
        {
            printf("NO\n");
        }
        else 
        {
           
           if(n%3==1)
           {
            x = n-3;
            n-=3;
            y = n-5;
            n-=5;
            z=n-1;
           }
        }
    }
    return 0;
}
