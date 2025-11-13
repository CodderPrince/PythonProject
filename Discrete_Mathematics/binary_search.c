#include<stdio.h>
int main()
{
    int array[]={1,3,34,45,78,113,114,124,145,160,200};
    //array size 10 but element 11 because array start at 0 index
    int left=0, right=10, middle=0;
    int find_item= 114;
    //want to know is this item available above index & which index it is available
    while(left<=right)
    {
        middle= (left+right)/2;
        //at first we calculate the middle index
        if(array[middle]==find_item)
        {
            printf("Array found at index: %d\n",middle);
            return 0;
        }
        else if(array[middle]<find_item)
        {
            left= middle + 1;
        }
        else
        {
            right= middle-1;
        }
    }
    printf("Item not found above index\n");
    return 0;
}
/*
array[]={1  3   34  45  78  113 114 124 145 160 200};
index=   0  1   2   3   4   5   6   7   8   9   10
find_item=114
1. middle= (0+10)/2=5
5 index= 113<114
its mean all item 0 index to 5 index is small to find_item because it's a sorted array
so we don't need to find 0 to 5 index item anymore
so we increase left item middle+1
now left=5+1=6 && right=10
2. middle= (6+10)/2=8==145>114
its mean 8 index to 10 index all item is bigger than find_item
so we don't need to find 8 to 10 index anymore
so we decrease right 1 index
right=8-1=7; left=6
3. middle= (6+7)/2=6 [it's count only integer number because we declare integer variable]
6 index mean==114
the condition is true and find item so print the index number
*/
/* run time complexity= O(logN) 
jehetu ordek kore middle hosse tai
big O notation logN hobe*/ 
/*space complexity: 0(1)
constant space use kora hoyese kono
extra space use kora hoyni tai eta 
constant space hobe*/
