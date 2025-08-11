#include<stdio.h>
int main()
{
    int i,j;
    //scanf("")=60
    for(i=1; i<15; i+=3)
    {
        printf("I=%d ",i);

        for(j=60; j>=0; j-=5 )
        {
           printf("J=%d\n",j);
        }
        
    }
    
}