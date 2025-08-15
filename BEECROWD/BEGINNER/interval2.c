#include <stdio.h>
int main()
{
    int t, a, i;
    int in = 0;
    int out = 0;
    scanf("%d", &t);
    for(i = 0; i < t; i++)//test case er loop
    {
        scanf("%d", &a);
        if(a >= 10 && a <= 20)//inteval question e condition diye diyese
        {
            in++;
        }
        else
        {
            out++;
        }

    }
    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}