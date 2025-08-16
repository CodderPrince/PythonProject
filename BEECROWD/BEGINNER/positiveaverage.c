#include <stdio.h>
int main()
{//ekhane array neya jabe na karon kono test case use korte parbo na tai 6 number er jonno loop use koresi
    float num,sum=0;
    int i,count=0;
    for(i=1;i<=6;i++)
    {
        scanf("%f",&num);
        if(num>0)
        {
          sum = sum + num;
          count++;
        }
    }
    float average = sum/count;
    printf("%d valores positivos\n",count);
    printf("%.1f\n",average);
    return 0;
}