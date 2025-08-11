/*x= (-b+-sqrt(b*b-4ac))//2a*/
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,p,x1,x2;
    scanf("%lf %lf %lf",&a,&b,&c);
    if((b*b-4*a*c)<0 || a==0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        p= sqrt(b*b-4*a*c);
        x1= (-b+p)/(2*a);
        x2= (-b-p)/(2*a);
        printf("R1 = %.5lf\n",x1);
        printf("R2 = %.5lf\n",x2);
    }
}