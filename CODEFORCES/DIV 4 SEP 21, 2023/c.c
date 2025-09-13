/*
Author: PRINCE
VARSITY: BRUR
DEPARTMENT: CSE
*/

#include <stdio.h>
#include <string.h>

int Cells(char s[], int n, int k) 
{
    int operations = 0;
    
    for (int i = 0; i < n; ) 
    {
        int j = i;
        
        while (j < n && s[j] != 'B') 
        {
            j++;
        }
        
        if (j == n) 
        {
            break;
        }
        
        for (int x = j; x < j + k && x < n; x++) 
        {
            s[x] = 'W';
        }
        
        operations++;
    }
    
    return operations;
}

int main() 
{
    int t;
    scanf("%d", &t);
    
    while (t--) 
    {
        int n, k;
        scanf("%d %d", &n, &k);
        
        char s[n + 1]; 
        scanf("%s", s);
        
        int operations = Cells(s, n, k);
        printf("%d\n", operations);
    }
    
    return 0;
}
