//h4x0r.c
//prince

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100000000];
   // getchar();
    //gets(str); 
    scanf("%s",str);
    long long int i, n=strlen(str);
    for (i = 0; i < n; i++) 
    {
        if (str[i] == 'a') 
        {
            str[i] = '4'; 
        } 
        else if (str[i] == 'i') 
        {
            str[i] = '1'; 
        } 
        else if (str[i] == 'e') 
        {
            str[i] = '3'; 
        } 
        else if (str[i] == 'o') 
        {
            str[i] = '0'; 
        } 
        else if (str[i] == 's') 
        {
            str[i] = '5'; 
        }
    }
    //str[i]='\0';
    printf("%s\n", str); 

    return 0;
}
