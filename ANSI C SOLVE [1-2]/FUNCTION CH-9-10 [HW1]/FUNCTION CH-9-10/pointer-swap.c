// swap two number using pointer function
//prince

#include <stdio.h>

int swapping(int *x, int *y);

int main()
{
    int num1, num2;
    printf("Enter two number: ");
    scanf("%d %d", &num1, &num2);
    printf("\n****Before swapping****\nNumber1 = %d\nNumber2 = %d\n\n", num1, num2);
    swapping(&num1, &num2);
    printf("\n****After swapping****\nNumber1 = %d\nNumber2 = %d\n", num1, num2);
    return 0;
}

int swapping(int *x, int *y)
//*x recieved the address the of num1 value
{
    int temp;
    temp = *x;//temp=5
    *x = *y;//*x=6
    *y = temp;//*y=5
}