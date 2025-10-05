//foxandsnake.c
#include<stdio.h>
#include<string.h>

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int i,j,odd=0;
    for(i=0; i<m; i++)
    {
        if(i%2==0)
        {
            for(j=0; j<n; j++)
            {
                printf("#");
            }
        }
        else
        {
            odd++;
            for(j=0; j<n; j++)
            {
                if(odd % 2 ==1 && j = m-1)
                {
                    printf("#");
                }
            }
        }
        
        
        
        
        printf("\n");
    }
}