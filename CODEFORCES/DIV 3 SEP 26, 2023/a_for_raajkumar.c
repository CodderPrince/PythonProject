//raajkumar_30

#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int p;
    scanf("%d", &p);

    while (p--) 
    {
        int a, k;
        scanf("%d %d", &a, &k);
        int arr[a];
        int i,count=0;
        for(i=0; i<a; i++)
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



    