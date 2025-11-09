#include<stdio.h>
int main(){
int a,b,c,i,t;
printf("Total text case: ");
scanf("%d", &t);
for(i=1; i<=t; i++)
{
    printf("Enter the value  of a,b &c:\n");
    scanf("%d%d%d",&a,&b,&c);

if (a>b && a<c || a<b && a>c)
{
    printf("%d the medium number of the three numbers./n",a);
}
else if (b>a && b<c || b<a && b>c)
{
    printf("%d the medium number of the three numbers./n",b);
}
else
{
    printf("%d the medium number of the three numbers.",c);
}
}
    return 0;
}
