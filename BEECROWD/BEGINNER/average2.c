#include <stdio.h>
    int main()
    {
       double a, b, c, media;
       scanf("%lf%lf%lf", &a, &b, &c);
       media = (a*2 + b*3 + c*5)/(2+3+5);
       printf("MEDIA = %.1lf\n", media);
       return 0;
    }                       