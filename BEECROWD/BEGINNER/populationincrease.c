#include<stdio.h>
int main()
{
    int PA,PB,T,i;
    float GA,GB;
    scanf("%d",&T);//test case
 for(i=0; i<T; i++)
 {
    int YEAR=0;
        scanf("%d %d %f %f",&PA,&PB,&GA,&GB);//two population and two growth rate
        while(PA<=PB)//b er population alltime besi
    {
           PA= PA + ((PA*GA)/100);//one year e population kototuku increase hosse setar hisab
           PB= PB + ((PB*GB)/100);
           YEAR++;
            if(YEAR>100)
            {//question e lekha ase 100 year er besi hole ar year er sonkha print na kore nicher lekhata print korlei hobe
                printf("Mais de 1 seculo.\n");
                break;
            }
    }
        if(YEAR<=100)
        {//ar jodi year er sonkha 100 er moddhe thake tahole message soho year print korte hobe
            printf("%d anos.\n",YEAR);
        }
    
 }
    return 0;
}