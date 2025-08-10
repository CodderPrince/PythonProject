#include<stdio.h>
int main()
{
    int odd[21],even[21];
    int i,j,N;
    scanf("%d",&N);
    even[0]=1;
    even[1]=1;
    for(i=3; i<=N; i++)
    {
        //scanf("%d",&i);
        if(i%2 == 0)
        {
            even[0]=1;
            for(j=1; j<i-1; j++)
            {
                even[j]= odd[j-1] + odd[j];
            }
            even[j]=1;
        }
        else
        {
            odd[0]=1;
            for(j=1; j<i-1; j++)
            {
                odd[j] = even[j-1] + even[j];
            }
            odd[j] = 1;
        }
        printf("%d",odd[j]);;
    }


    return 0;
}