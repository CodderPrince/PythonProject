#include <stdio.h>
#include<math.h>

int main()
{
    int n;
    float x, term, sum = 1, fact = 1;

    printf("Enter the value of x (0 < x < 1): ");
    scanf("%f", &x);

    for (n = 1; n <= 100; n++)
    {
        fact = fact*n;
        term = (float) (pow(x, n) / fact);
        sum = sum + term;
    }
    
    printf("Sum = %.6f\n",sum);

    return 0;
}