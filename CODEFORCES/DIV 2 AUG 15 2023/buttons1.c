/*
Author: PRINCE
VARSITY: BRUR
DEPARTMENT: CSE
*/

#include <stdio.h>

int main() 
{
    int t;
    scanf("%d", &t);

    while (t--) 
    {
        long long int a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);

        int total_buttons = a + b + c;

        if (a > b && a > c) 
        {
            printf("First\n");
        } 
        else if (b > a && b > c) 
        {
            printf("Second\n");
        } 
        else if (a == b && b == c) 
        {
            
            printf("First\n");
        } 
        else if (total_buttons % 2 == 0) 
        {
            printf("Second\n");
        } 
        else 
        {
            printf("First\n");
        }
    }

    return 0;
}