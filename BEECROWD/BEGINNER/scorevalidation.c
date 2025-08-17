#include <stdio.h>
int main()
{
    double a,b,c=0,count=0;
    while(1)
    {//2 ta valid man na pawa porjonto loop chalate thakbo tai infinite loop niyesi
        if(count==2)
            break;
        scanf("%lf", &a);
        if(a>=0 && a<=10)
        {
            count++;
            c = c + a;
        }//ekhane c er kaj hosse dui valid man store kora
        else
            printf("nota invalida\n");
    }
    b = c/2.00;
    printf("media = %.2lf\n", b);
    return 0;
}