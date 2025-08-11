#include<stdio.h>
int main()
{
    int arr[100];
    int t, temp;//enter how many elements we want to input
    scanf("%d",&t);//ekta test case nibo tate input dibo kotogulo array input nibo
    for(int i=0; i<t; i++)//array er zero index theke start hoye input number er aag porjonto cholbe
    {
        scanf("%d",&arr[i]);//array element gulo input neyar jonno loop use koresi
            for(int j=0; j<=i; j++)//array element gulo sort korar jonno inner loop
            {
                if(arr[i]<arr[j])//simple condition likhe diyesi array er kon element boro
                {
                    temp= arr[j];//array element swap koresi simple 
                    arr[j]= arr[i];
                    arr[i]= temp;
                }
            }
    }
    for(int i=0; i<t; i++)//array er sob element print korar 
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}