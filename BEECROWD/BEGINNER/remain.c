#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=10000; i++)
    {
        if(i%n == 2)/*13 input dile 1%13== 13/1= 0 vagshes 1
        2%13== 13/2= 0.   vagshes 2 */
        {
            printf("%d\n",i);
        }
    }
}