//i_wanna_be_the_guy.c
//prince

#include<stdio.h>

int main()
{
    int n,flag=0;
    scanf("%d",&n);
    int i, n1;
    scanf("%d",&n1);
    int arr1[n1];
    for(i=0; i<n1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    int j, n2;
    scanf("%d",&n2);
    int arr2[n2];
    for(j=0; j<n2; j++)
    {
        scanf("%d",&arr2[j]);
    }
    for(i=0; i<n1; i++)
    {
        if(arr1[i] == n)
        {
            flag=1;
            break;
        }
    }
    for(j=0; j<n2; j++)
    {
        if(arr2[j] == n)
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        printf("I become the guy.\n");
    }
    else
    {
        printf("Oh, my keyboard!\n");
    }

    return 0;
}