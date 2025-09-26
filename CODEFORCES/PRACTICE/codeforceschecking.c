//codeforces checking
#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str[27];
        gets(str);
        int i;
        for(i=0; i<strlen(str); i++)
        {
            if(str[0] == 'c' || str[0] == 'o' || str[0] == 'd' || str[0] == 'f' || str[0] == 'r' || str[0] == 'e' || str[0] == 's')
            {
                printf("YES\n");
                break;
            }
            else
            {
                printf("NO\n");
            }
        }
    }

    return 0;
}