//age_in_days.c
//prince

#include<stdio.h>

int main()
{
    int age;
    scanf("%d",&age);
    int year=0,mon=0,day=0;
    
        while(age>=365)
        {
            age = age-365;
            year++;
        }
        while(age>=30)
        {
            age = age-30;
            mon++;
        }
    
    printf("%d years\n",year);
    printf("%d months\n",mon);
    printf("%d days\n",age);

    return 0;
}