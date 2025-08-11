#include<stdio.h>
int main()
{
    int i,n,m;char a,b;int sum=0,sum1=0,sum2=0,sum3;
    double t,l,y;
    b='%';
    scanf("%d",&m);//test case use hoyese
    for(i=1;i<=m;i++)
    {
        scanf("%d %c",&n,&a);
       if('C'==a){
        sum=sum+n;
       }
       if('R'==a){
        sum1=sum1+n;
       }
       if('S'==a){
        sum2=sum2+n;
       }
    }
    sum3=sum+sum1+sum2;
    t=(sum/(sum3*1.0))*100.00;
    l=(sum1/(sum3*1.0))*100.00;
    y=(sum2/(sum3*1.0))*100.00;
    printf("Total: %d cobaias\n",sum3);
    printf("Total de coelhos: %d\n",sum);
    printf("Total de ratos: %d\n",sum1);
    printf("Total de sapos: %d\n",sum2);
    printf("Percentual de coelhos: %.2lf %c\n",t,b);
    printf("Percentual de ratos: %.2lf %c\n",l,b);
    printf("Percentual de sapos: %.2lf %c\n",y,b);
}