#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    if(a>b)
    {
        if(b>c)
        {
            if((b-c)<(a-b))
            printf(":)\n");
            else 
            printf(":(\n");
        }
        else 
        printf(":)\n");
    }
    else if(b>a)
    {
        if(c>b)
        {
            if((c-b)<(b-a)) 
            printf(":(\n");
            else 
            printf(":)\n");
        }
        else 
        printf(":(\n");
    }
    else if(c>b) 
    printf(":)\n");
    else 
    printf(":(\n");
    return 0;
}
