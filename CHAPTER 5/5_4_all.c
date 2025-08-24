#include<stdio.h>
int main()
{
    int a=0, b=0, c=0, d=0,e=0, f=0, g=0, h=0,marks;
    printf("Enter 100 students marks: ");
    for(int i= 1; i<=100; i++)
    {
        scanf("%d",&marks);
        if(marks>80)
        {
            a++;
        }
        else if(marks>60)
        {
            b++;
        }
         else if(marks>40)
        {
            c++;
        }
         else if(marks<=40)
        {
            d++;
        }
         if(marks>=81 && marks<=100)
        {
            e++;
        }
        else if(marks>=61 && marks<=80)
        {
            f++;
        }
        else if(marks>=40 && marks<=60)
        {
            g++;
        }
        else if(marks>=0 && marks<=40)
        {
            h++;
        }
    }
    printf("Who have obtained more than 80: %d\n",a);
    printf("Who have obtained more than 60: %d\n",b);
    printf("Who have obtained more than 40: %d\n",c);
    printf("Who have obtained 40 or less  : %d\n",d);
    printf("Range of 81 to 100: %d\n",e);
    printf("Range of 61 to 80: %d\n",f);
    printf("Range of 41 to 60: %d\n",g);
    printf("Range of 0 to 40: %d\n",h);
    return 0;
}
