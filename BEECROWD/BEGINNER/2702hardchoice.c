/*biman er passenger er kase 3ta item deyar jonno shona hobe kon passenger kon item
kotojon chai; ekhane amake ber korte hobe kotogulo item muloto short porbe*/
#include <stdio.h>
int main() 
{
    int available[3], requested[3];
    for (int i = 0; i < 3; i++) 
    {
        scanf("%d", &available[i]);
        //chicken=80; beef=20; pasta=40
    }
    for (int i = 0; i < 3; i++) 
    {
        scanf("%d", &requested[i]);
        //chicken=45; beef=23; pasta=48
    }
    int shortfall = 0;
    for (int i = 0; i < 3; i++) 
    {
        if (requested[i] > available[i]) 
        {
            shortfall = shortfall + requested[i] - available[i];
            /*1. 45<80 available tai condition check hobe na ; shortfall=0
              2. 23>20; shortfall= 0+23-20= 3
              3. 48>40; shortfall= 3+48-40= 11
              ei code ta eibhabei muloto kaj korbe */
        }
    }
    printf("%d\n", shortfall);
    return 0;
}
