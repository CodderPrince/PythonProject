#include <stdio.h>
 int main()
 {
  double a, b, r;
  scanf("%lf %lf", &a, &b);
  /*1 litre a 12 km jai
  total koto km giyese seta 
  age hisab kora lagbe tarpor seta
  ke 12 dara vag korte hobe*/
  r = (a * b)/12;
  printf("%.3lf\n", r);
  return 0;
 }