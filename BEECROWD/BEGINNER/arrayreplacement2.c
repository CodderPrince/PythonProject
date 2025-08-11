#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=0; i<10; i++)
    {
        printf("N[%d] = %d\n",i,a);
        a= a+a;
    }
}