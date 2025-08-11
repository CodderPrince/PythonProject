#include<stdio.h>
int main()
{
    int n;
    while((scanf("%d",&n) != EOF ))//EOF= END OF FILE
    {//CONTINUOUS LOOF NIYESI AND JOTOKON END OF FILE PABO TOTOKHON TEST CASE CHOLBE
        if(n==0)
        {
            printf("vai ter copa!\n");
        }
        else
        {
            printf("vai ter duas!\n");
        }
    }
    return 0;
}