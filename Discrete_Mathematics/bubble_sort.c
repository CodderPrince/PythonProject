#include<stdio.h>
int main()
{
    //int array[]={1,4,5,23,78,34,3};
    int array[]={1,4,5,23,78};
    int i,j,size=5;
    int swap,counter=0;
    for(i=0; i<size-1; i++)
    {
        swap=0;
        for(j=0; j<size-1-i; j++)
        /*time complexity komanor jonno size theke 1 bad diyesi karon last digit er ta already
        sorted hoye jabe tai last digit porjonto jawa lagbe na ar sathe i sub koresi karon
        jodi ami sorted array provide kori tahole seta test case 1 er por ar jeno na chole 
        tar jonno ekhane ami abar swap variable use koresi jeno sorted array er jonno time
        complexity onek kom hoi*/
        {
            counter++;
            if(array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                swap=1;
            }
        }
        if(swap==0)
        {
            break;
        }
    }
    printf("\nAfter sorting:\n");
    for(i=0; i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\nTotal loop:%d\n",counter);
    return 0;
}