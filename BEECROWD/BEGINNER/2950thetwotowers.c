#include <stdio.h>
int main() 
{
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);

    double icm = (double) n / (x + y);
    printf("%.2f\n", icm);
//solve by see input and output
    return 0;
}
