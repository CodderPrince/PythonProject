#include <stdio.h>
int main()
{
    double a,b=1,c, Sum=0;
    for(a=1; a<=39; a+=2)
    {
        c=a/b;
        Sum = Sum+c;
        b= b*2;
        /*jehetu loop er moddhe b er value multi koresi tai
        1*2=2
        2*2=4
        4*2=8*/
    }
    printf("%.2lf\n",Sum);
    return 0;
}