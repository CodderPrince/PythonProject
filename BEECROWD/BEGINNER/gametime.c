#include <stdio.h>
int main()
{
    int a,b;
    scanf ("%d%d", &a, &b);
    if(a==b)
        printf("O JOGO DUROU 24 HORA(S)\n");
    else if(a<=b)
        printf ("O JOGO DUROU %d HORA(S)\n",b-a);//16,2 hole ajke 24-16=8hours and agamikal 2hours run hoyese
    else
        printf("O JOGO DUROU %d HORA(S)\n",(24-a)+b);
        /*input and output kheyal rakhte hobe 16,2 hole bujhai je ajker diner 16hours e game start hoyese
        and jokhon agamikal er 2hours tokhon game ta shes hoyese jehetu din 24hours hoi tai ajke
        24-16=8hours and agamikal 2hours game running silo tai tai total 8+2=10hours */
    return 0;
}