#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char name;
    float sal,bonus;
    double x=0;
    scanf("%s %f %f",&name,&sal,&bonus);
    /*ekhane ekta name input nibo tai string use hobe
    jodi kono character nitam tahole %c hoto*/
    x= sal + bonus*0.15;
    printf("TOTAL = R$ %.2lf\n",x);
    return 0;
}