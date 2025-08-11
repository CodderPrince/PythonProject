#include <stdio.h>
int main() 
{
    int n;
    scanf("%d", &n);
    int pieces = ((n + 1) * (n + 2)) / 2;
    //formula deya ase just ekta code likhte hobe
    printf("%d\n", pieces);
    return 0;
}
