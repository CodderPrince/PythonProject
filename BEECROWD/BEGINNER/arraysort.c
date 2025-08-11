#include<stdio.h>
int main()
{
    int a,b,c,temp;
    int array[3];
    scanf("%d %d %d",&a, &b, &c);
    array[0]=a;/*initialize kore diyese array er index er value*/
    array[1]=b;
    array[2]=c;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(array[i]<array[j])
            {
                temp = array[j];/*array swap kore diyesi jate max ber hoi*/
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    printf("%d\n%d\n%d\n",array[0],array[1],array[2]);
    printf("\n%d\n%d\n%d\n",a,b,c);
    return 0;
}
/*1. 0!<0 J++*
2. 0<1 THEN SWAP MAX ARRAY[0]=MAX
3 INPUT TO 9 CONDITION*/