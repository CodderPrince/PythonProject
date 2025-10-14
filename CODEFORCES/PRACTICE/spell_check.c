//spell check
#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        getchar();        
        char str[n];
        gets(str);        
        int i,a=0,b=0,c=0,d=0,e=0;
        if(n == 5)
        {
            for(i=0; i<5; i++)
            {
                if(str[i] == 'T')
                {
                    a++;
                }
                else if(str[i] == 'i')
                {
                    b++;
                }
                else if(str[i] == 'm')
                {
                    c++;
                }
                else if(str[i] == 'u')
                {
                    d++;
                }
                else if(str[i] == 'r')
                {
                    e++;
                }
            }
        }
            if(a==1 && b==1 && c==1 && d==1 && e==1)
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
