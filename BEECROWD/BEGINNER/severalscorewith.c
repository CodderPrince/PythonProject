#include<stdio.h>
int main()
{
    float n,s,count,k;
    s = count = k = 0;
    while(1)
    {
        scanf("%f",&n);
        if(n < 0.0 || n > 10.0)//first condition
            printf("nota invalida\n");
        else
        {
            s = s + n;
            count++;
            if(count==2)
            {//jehetu 2 ta valid input nite hobe tai count 2 porjonto nite hobe
                s= s/2;
                printf("media = %.2lf\n",s);//jehetu ekbar avg kora shes tai ebar nicher while loop e jabe karon ekhane nested while loop use kora hoyese
                printf("novo calculo (1-sim 2-nao)\n");
                while(1)
                {
                    scanf("%f",&n);
                    if((int)n==1)//scan korre check korbe eta 1 kina nahole else if er moddhe jabe
                    {
                        s = count = 0;
                        k=1;
                        break;
                    }
                    else if((int)n==2)//abar check korbe n 2 kina nahole else er print korbe ar joto input nibo ebhabe choltei thakbe ar else er ta print korte thakbe jodi n=1||2 na hoi karon infinity loop
                    {
                        return 0;
                    }
                    else
                    {
                        printf("novo calculo (1-sim 2-nao)\n");
                    }
                }
            }
        }
    }
    return 0;
}