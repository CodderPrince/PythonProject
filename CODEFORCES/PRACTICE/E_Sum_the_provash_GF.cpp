#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {

        int a, b;
        char c;
        scanf("%d %c %d", &a, &c, &b);
        int sum = a + b;
        printf("%d\n", sum);
    }
    return 0;
}