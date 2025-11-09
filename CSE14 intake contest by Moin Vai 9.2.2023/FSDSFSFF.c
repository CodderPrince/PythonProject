#include<stdio.h>
int main()
{
    int a,b,c,i,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {

        scanf("%d%d%d",&a,&b,&c);
        if(a==b+c)
        {
            printf("YES\n");
        }
       else
       {
           printf("NO\n");

       }
    }

     for(i=1; i<=t; i++)
     {

       if(b==a+c)
        {
            printf("YES\n");
        }
       else
       {
           printf("NO\n");
       }
     }

      for(i=1; i<=t; i++)
      {
       if(c==b+a)
        {
            printf("YES\n");
        }
       else
       {
           printf("NO\n");
       }

    }






    return 0;
}
