//floor_number.c
//prince

#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double a,b;
        int c;
        scanf("%lf %lf",&a,&b);
        if(a<=2)
        {
            printf("1\n");
        }
        else
        {
            a = a-2;
            c = ceil(a/b);
            printf("%d\n",c+1);
        }
    }

    return 0;
}