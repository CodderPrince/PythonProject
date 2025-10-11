#include<stdio.h>
#include<math.h>

int main()
{
   int n[3],i ,j, temp;
   for( i = 0; i < 3; i++)
    scanf("%d",&n[i]);

   for( i = 0; i < 2; i++)
   {
       for( j = i+1; j < 3; j++)
       {
           if(n[i]>n[j])
           {
               temp = n[i];
               n[i] = n[j];
               n[j] = temp;
           }
       }
    }
    printf("%d",n[2]-n[0]);


}
