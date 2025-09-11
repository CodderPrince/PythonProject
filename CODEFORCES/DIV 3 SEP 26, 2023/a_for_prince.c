//prince

#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int m;
    scanf("%d", &m);

    while (m--) 
    {
        int r, k;
        scanf("%d %d", &r, &k);
        int arr[r];
        int i,cnt=0;
        for(i=0; i<r; i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]==k)
            {
                cnt++;
            }
        }

        if (cnt > 0) 
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



    