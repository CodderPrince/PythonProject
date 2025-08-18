#include<stdio.h>
#include<string.h>
int main()
{
   // getchar();
    char str[100];
    //int len=0;
    
    gets(str);
    //len= strlen(str);
    //strrev(len);
    printf("%s\n",strrev(str));

}