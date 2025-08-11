#include<stdio.h>
int main()
{
    int i=0,number;
    scanf("%d",&number);
    while(i<6)
    {/*question holo ekta number input dile tar poroborti 6 odd number print korte hobe*/
        if(number%2!=0)
        {
            printf("%d\n",number);
            i++;
        }
        number++;
    }
    return 0;
}
/*8 input dile asbe check kore dekhbe vagfol 0 hoi tai number
 1 increase kore abar check korbe eibhabe 6 bar cholbe*/