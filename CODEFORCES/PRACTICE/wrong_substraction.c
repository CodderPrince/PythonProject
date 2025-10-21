//wrong_substraction.c
//prince

#include<stdio.h>

int main()
{
    
    int n,k;
    scanf("%d %d",&n,&k);
    int i,count=0;
    for(i=0; i<k; i++)
    
    {
        if(n%10 != 0)
        {
            n--;
        }
        else 
        {
            n = n/10;
        }
    }
    printf("%d\n", n);

    return 0;
}