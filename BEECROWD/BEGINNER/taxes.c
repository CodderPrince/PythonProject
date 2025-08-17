#include <stdio.h>

int main(){
    double sal;
    scanf("%lf", &sal);
    if(sal <= 2000.00)
    {
        printf("Isento\n");//free no taxes
    }
    else if (sal >= 2000.01 && sal <= 3000.00)
    {
          printf("R$ %.2f\n", (sal - 2000.00)*0.08);
    }
    else if (sal >= 3000.01 && sal <= 4500.00)
    {
          printf("R$ %.2f\n", ((sal - 3000.00)*0.18 + 1000.00*0.08));
    }
    else if (sal >= 4500.01)
    {
          printf("R$ %.2f\n", ((sal - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08));
    }
    return 0;
}
/*example: my salary 6,000
1. 1st 2k no taxes
so, 6k-2k= 4k tax available
4k-1k= 3k ekhane bojhano hoyese 4 er moddhe 1st 1k .80 kore taxe dite hobe
3k-1.5k= 1.5k next 1.5k tax dite hobe .18 kore
last 1.5k tax dite hobe .28 kore*/