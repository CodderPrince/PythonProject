//two_numbers.c
//prince

#include<stdio.h>
#include<math.h>

int main()
{
    float a, b;
    scanf("%f %f", &a, &b);
    float x, y, res;
    x = floor(a / b); 
    y = ceil(a / b);  
    res = round (a / b);      
    printf("floor %.0f / %.0f = %.0f\n", a, b, x);
    printf("ceil %.0f / %.0f = %.0f\n", a, b, y);
    printf("round %.0f / %.0f = %.0f\n", a, b, res);

    return 0;
}
