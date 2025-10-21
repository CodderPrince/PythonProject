//winter_sale.c
//PRINCE_BRUR

#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    float s;
    scanf("%d %f",&a,&s);
    float originial_price;
    originial_price = s / (1-(a/100.0));
    printf("%.2f\n",originial_price);

    return 0;
}