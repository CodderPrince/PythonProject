#include<stdio.h>
#include<string.h>
int main( ) 
{ int ary[2][2][3] = { {{1,2,3},{4,5,6}}, {{7,8,9},{10,11,12}} }; printf("%d",*(*(*(ary+1)+ 1)+2)); 
return 0; }