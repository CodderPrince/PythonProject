#include<stdio.h>
#include<conio.h>
int main()
{
    int a1[40],a2[40],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
    }
     printf("Array1: ");
     for(i=0;i<n;i++)
     {
         printf("%d ",a1[i]);
     }
     //copying
    for(i=0;i<n;i++)
    {
        a2[i] = a1[i];
    }
    printf("Array2: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a2[i]);
    }
    getch();
}