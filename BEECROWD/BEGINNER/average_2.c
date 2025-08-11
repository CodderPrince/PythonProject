#include <stdio.h>
    int main()
    {
       double a, b, c, media;
       scanf("%lf%lf%lf", &a, &b, &c);
       media = (a/10 * 2) + (b/10 * 3) + (c/10 * 5);
       printf("MEDIA = %.1lf\n", media);
       return 0;
    }                       