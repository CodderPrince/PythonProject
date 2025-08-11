#include <stdio.h>
int main() 
{
    int x, m;
    while ( scanf("%d %d", &x, &m)==2) 
    { 
        if (x == 0 && m == 0) break;
        printf("%d\n", m * x);
    }
    return 0;
}
