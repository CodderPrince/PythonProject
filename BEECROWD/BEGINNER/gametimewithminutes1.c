#include<stdio.h>
int main()
{
    int start_hour, start_min, end_hour, end_min;
    scanf("%d %d %d %d",&start_hour,&start_min,&end_hour,&end_min);
    if(end_min<start_min)
    {
        end_min= end_min + 60;
        end_hour= end_hour -1;
        end_min= end_min - start_min;
    }
    if(end_hour<start_hour)
    {
        end_hour= end_hour + 24;
        end_hour= end_hour - start_hour;
    }
    else
    {
         end_hour= end_hour - start_hour;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", end_hour,end_min);
    else if(end_hour==start_hour && end_min==start_min)
    {
        printf("O JOGO DUROU 24 HORA(S) E %d MINUTO(S)\n");
    }
    else if(end_min>start_min)
    {
        end_min= end_min - start_min;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", end_hour,end_min);
    return 0;
}