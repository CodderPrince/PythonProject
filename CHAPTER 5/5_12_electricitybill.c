#include<stdio.h>
#include<string.h>
int main()
{
   
    float units,t,n;
    char name[101];
    printf("Input users name: ");
    getchar();
    gets(name);
     printf("Input users units: ");
    scanf("%f",&units);
    if(units<=200)
    {
        t= 100 + .80*units;
    }
    else if(units<=300)
    {
          t= 100 + .90*units;
    }
    else if(units>300)
    {
        t= 100 + 1.0*units;
    }
    if(t>400)
    {
        n= t+ t*.15;
        printf("Total= %.3f\n",n);
    }
    else{
        printf("Total= %.3f\n",t);
    }
}