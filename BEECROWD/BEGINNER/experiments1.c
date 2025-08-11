#include<stdio.h>
int main()
{
    int t, n,c,rat=0,rabbit=0,frog=0,total;
    char x;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%d %c", &n,&x);
        if(x == 'C')
        {
            rabbit= rabbit+n;
        }
          if(x == 'R')
        {
            rat= rat+n;
        }
         if(x == 'S')
        {
            frog= frog+n;
        }
    }
        total= rabbit+rat+frog;
        double rabbit_p= (rabbit*100.00)/total;
        double rat_p= (rat*100.00)/total;
        double frog_p= (frog*100.00)/total;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",rabbit);
    printf("Total de ratos: %d\n",rat);
    printf("Total de sapos: %d\n",frog);
    printf("Percentual de coelhos: %.2lf %%\n",rabbit_p);
    printf("Percentual de ratos: %.2lf %%\n",rat_p);
    printf("Percentual de sapos: %.2lf %%\n",frog_p);

return 0;
}