#include<stdio.h>

int main()
{
SYSTEMTIME stime;
GetSystemTime (&stime);
    printf("Current Date is = %d-%d-%d",stime.wMonth,stime.wDay,stime.wYear);

    return 0;
}
