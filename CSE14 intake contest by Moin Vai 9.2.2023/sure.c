#include<stdio.h>
int main(){
int a=12,b=777,c=901773;

if (a>b && a<c || a<b && a>c)
    printf("%d",a);
else if (b>a && b<c || b<a && b>c)
    printf("%d",b);
else
    printf("%d",c);
    return 0;
}
