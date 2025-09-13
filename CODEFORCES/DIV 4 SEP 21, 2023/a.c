/*
Author: PRINCE
VARSITY: BRUR
DEPARTMENT: CSE
*/
#include <stdio.h>
#include <string.h>

int main() 
{
    int x;
    scanf("%d", &x);
    while (x--) 
    {
        char s[4];
        scanf("%s", s);
        
    
        if (strcmp(s, "abc") == 0 || strcmp(s, "acb") == 0 || strcmp(s, "bac") == 0 || strcmp(s, "cba") == 0) 
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

