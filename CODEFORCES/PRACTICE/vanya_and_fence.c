//vanya_and_fence.c
//prince

#include<stdio.h>

int main()
{
    int number_of_friends, height,height_of_friends;
    scanf("%d %d",&number_of_friends,&height);
    int i,count=0;
    for(i=0; i<number_of_friends; i++)
    {
        scanf("%d",&height_of_friends);
        if(height_of_friends<=height)
        {
            count++;
        }
        else
        {
            count = count+2;
        }
    }
    printf("%d\n",count);

    return 0;
}