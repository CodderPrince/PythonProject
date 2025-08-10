#include<stdio.h>
#include<time.h>
int main()
{
time_t t;
t=time(NULL);
struct tm tm=*localtime(&t);
printf("Current Date: %d/%d/%d", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);


return 0;
}
