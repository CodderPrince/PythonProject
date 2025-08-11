/*eita optimize korte hobe
#include <stdio.h>
#include<string.h>
int main() 
{
    int tourists = 0, jeeps = 0;
    char move;
    while (1) 
    {
        scanf("%s", move);
        if (move == 'ABEND') 
        {
            break; // end of processing
        }
        int t;
        scanf("%d", &t);
        if (move == 'SALIDA') 
        {
            tourists = tourists + t;
            jeeps++;
        } 
        else 
        {
            tourists = tourists - t;
            jeeps--;
        }
    }
    printf("%d\n%d\n", tourists, jeeps);
    return 0;
}*/
#include <stdio.h>
int main() 
{
    int tourists = 0, jeeps = 0;
    char move[7];
    while (1) 
    {
        scanf("%s", move);
        if (move[0] == 'A') 
        //zero index e abend er a pai tahole break kore dibe
        {
            break; // end of processing
        }
        int t;
        scanf("%d", &t);
        if (move[0] == 'S') 
        //zero index e salida er s pai tahole tourist sum korbe
        {
            tourists = tourists + t;
            jeeps++;
        } 
        else 
        //vuelta pai mane tourist ber hoye jasse tai sub korte thabe 
        {
            tourists = tourists - t;
            jeeps--;
        }
    }
    printf("%d\n%d\n", tourists, jeeps);
    return 0;
}

