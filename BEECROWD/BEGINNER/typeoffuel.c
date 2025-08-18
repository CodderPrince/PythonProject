#include <stdio.h>
int main()
{
    int a, alcool=0, Gasolina=0, Diesel=0;
    while(1)
    {
        scanf("%d", &a);
        if(a==4)
            break;
        else
        {
            if(a==1)
            alcool++;
            else if(a==2) 
            Gasolina++;
            else if(a==3) 
            Diesel++;
            else 
            continue;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",alcool);
    printf("Gasolina: %d\n",Gasolina);
    printf("Diesel: %d\n",Diesel);
    return 0;
}