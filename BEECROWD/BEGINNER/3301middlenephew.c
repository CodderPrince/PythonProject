#include <stdio.h>
int main() 
{
    int h, z, l;
    while (scanf("%d %d %d", &h, &z, &l) == 3) 
    {
        if (h < z && h > l || h > z && h < l) 
        {
            printf("huguinho\n");
        } else if (z < h && z > l || z > h && z < l) 
        {
            printf("zezinho\n");
        } 
        else 
        {
            printf("luisinho\n");
        }
    }
    return 0;
}
//here i need to find the middle nephew just it
