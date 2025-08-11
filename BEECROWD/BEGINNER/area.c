 #include <stdio.h>
    int main()
    {
     double a, b, c;
     scanf("%lf %lf %lf", &a, &b, &c);
     printf("TRIANGULO: %.3lf\n", (a * c) / 2);//trivuj .5*base*height
     printf("CIRCULO: %.3lf\n", c * c * 3.14159);//circle: pi*r*r
     printf("TRAPEZIO: %.3lf\n", ((a + b) / 2) * c);//trapiziam= .5(a+b)*height
     printf("QUADRADO: %.3lf\n", b * b);//sqare= a*a
     printf("RETANGULO: %.3lf\n", a * b);//ayotarkhetro: base*height
     return 0;
    }         