#include<stdio.h>
int main(){
int a,b,c;

scanf("%d%d%d",&a,&b,&c);

if ((a>b && a<c) || (a<b && a>c))


    printf("the median of %d,%d,%d is %d",a,b,c,a);

else if ((b>a && b<c) || (b<a && b>c))


    printf("the median of %d,%d,%d is %d",a,b,c,b);

else



    printf("the median of %d,%d,%d is %d",a,b,c,c);

return 0;
}
