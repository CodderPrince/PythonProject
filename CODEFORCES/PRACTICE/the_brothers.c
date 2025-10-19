//the_brothers.c
//prince

#include<stdio.h>
#include<string.h>

int main()
{
    char s1[101],s2[101],s3[101],s4[101];
    scanf("%s %s %s %s",s1,s2,s3,s4);
    if(strcmp(s2,s4)==0)
    {
        printf("ARE Brothers\n");
    }
    else
    {
        printf("NOT\n");
    }

    return 0;
}