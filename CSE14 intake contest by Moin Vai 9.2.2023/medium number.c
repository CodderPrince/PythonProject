#include<stdio.h>
int main(){
int a=2, b=2, c=1;
if ((a>=b && a<=c) || (a<=b && a>=c))

    printf("Medium: %d",a);

else if ((b>=a && b<=c) || (b<=a && b>=c))

    printf("Medium: %d",b);

else

    printf("Medium: %d",c);

return 0;
}
