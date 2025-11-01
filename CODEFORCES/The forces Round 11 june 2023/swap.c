// PRINCE

#include <stdio.h>

int swap(long long *a, long long *b)
{
    long long temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    swap(&a, &b);
    printf("%lld %lld\n", a, b);

    return 0;
}
