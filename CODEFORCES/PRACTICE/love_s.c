//love story
#include <stdio.h>
#include <string.h>

int main() 
{
    int t;
    scanf("%d", &t);
    while (t--) 
    {
        int count = 0, i;
        char s[11] = "codeforces";
        char str[11] = {0}; 

        scanf("%s", str);

        for (i = 0; i < 10; i++) 
        {
            if (str[i] != s[i]) 
            {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
