//the_number_of_positions.c
//prince

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    d = min(a-b , c+1);
    printf("%d\n",d);

    return 0;
}