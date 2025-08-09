#include<stdio.h>
#include<string.h>

int main()
{

    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str1[101],str2[101];
        gets(str1);
        int i,j=0;
        for(i=0; i<strlen(str1); i++)
        {
            if(str1[i]!=' ')
            {

                str2[j] = str1[i];
                j++;
            }
            else if(j>0)
            {
                str2[j]='\0';
                strrev(str2);
                printf("%s ",str2);
                j=0;
            }
            else
            {
                printf("\n");
            }
        }
        if(j>0)
        {
                str2[j]='\0';
                strrev(str2);
                printf("%s ",str2);
        }
        printf("\n");
    }

    return 0;
}
