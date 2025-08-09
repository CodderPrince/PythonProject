    #include<stdio.h>
    int main()
    {
        int i,j;
        printf("Enter the number: ");
        scanf("%d", &i);
        for(j=1; j<=10; j++)
        {
            printf("%d*%d=%d\n", i, j, i*j);
        }
return 0;
    }
