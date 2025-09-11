/*
Author: PRINCE
VARSITY: BRUR
DEPARTMENT: CSE
*/

#include<stdio.h>
#include<string.h>


int main()
{
    int t;
    scanf("%d", &t);

    while (t--) 
    {
        int n, k;
        scanf("%d %d", &n, &k);
        int arr[n];
        int i,count=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]==k)
            {
                count++;
            }
        }

        if (count > 0) 
        {
            printf("YES\n");
        } 
        else 
        {
            printf("NO\n");
        }
    }

    return 0;
}



    