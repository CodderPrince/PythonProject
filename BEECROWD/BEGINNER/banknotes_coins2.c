#include<stdio.h>
int main()
{
    double x;
    int note[7]={100,50,20,10,5,2,1},money_note[7],a;
    int coin[5]={50,25,10,5,1},money_coin[5];
    scanf("%lf",&x);
    a=x;
    for(int i=0; i<6; i++)
    {
        money_note[i]= a/note[i];
        a= a%note[i];
    }
    a= x*100;
    a=a%100;//flotting poisa duita count korbo
    for(int i=0; i<5; i++)
    {
        money_coin[i] = a/coin[i];
        a= a%coin[i];
    }
    printf("NOTAS:\n");
    for(int i=0; i<6; i++)
    {
        printf("%d nota(s) de R$ %d.00\n",money_note[i],note[i]);
    }
    printf("MOEDAS:\n");
    for(int i=0; i<5; i++)
    {
        printf("%d moeda(s) de R$ %.2f\n",money_coin[i],coin[i]/100.0);
    }
    return 0;
    }