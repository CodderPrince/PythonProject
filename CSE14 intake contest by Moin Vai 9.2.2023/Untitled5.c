#include<stdio.h>
int main(){
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if (a>b && a<c || a<b && a>c)
    printf("%d the medium number of the three numbers.",a);
else if (b>a && b<c || b<a && b>c)
    printf("%d the medium number of the three numbers.",b);
else
    printf("%d the medium number of the three numbers.",c);
    return 0;
}
