    #include<stdio.h>
    int main()
    {
        int i,j;
        for(i=1; i<=7; i++)
        {
            for(j=1; j<=i; j++)
            {
                if(i%2==0)
                {
                    printf("Blank Line");
                    break;
                }
                else
                {
                    printf("*");
                }
            }
            printf("\n");
        }
return 0;
    }
