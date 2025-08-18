#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    char str1[101], str2[101];
    int i,j,str1_len,str2_len;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        
        gets(str1);
        gets(str2);
        str1_len= strlen(str1);
        str2_len= strlen(str2);
        for(i=0; i<(str1_len - str2_len); i++)
        {
            if(str2[0]==str1[i])
            {
                for(j=1; j<str2_len; j++)
                {
                    if(str2[j]!=str1[i+j])
                    
                        break;
                    
                }
                    if(j==str2_len)
                    {
                        printf("%d\n",i);
                        break;
                    }
            }
        }
    }
    
}