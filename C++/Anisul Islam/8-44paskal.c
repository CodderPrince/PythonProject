#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
     int odd[21],even[21],T,n,i,j;
     scanf("%d",&n);
     printf("1");
     printf("1 1");
        even[0]=1;
		even[1]=1;
		odd[0]=1;
		odd[1]=1;
	 for(i=3;i<=n;i++)
     {
		if(i%2==0)
        {
		 even[0]=1;
         printf("1\n");
        
         for(j=1; j<i-1; j++)
         {
            even[j]=odd[j-1]+odd[j];
            printf("%d ",even[j]);
        }
        even[j]=1;
        printf("%d",even[j]);
     }
     else
     {
        odd[0]=1;
        printf("1 ");
        for(j=1; j<i-1; j++)
        {
            odd[j]= even[j-1] + even[j];
            printf("%d ",odd[j]);
        }
        odd[j]=1;
        printf("%d",odd[j]);
     }
     }
     printf("\n");
    }

    return 0;
}