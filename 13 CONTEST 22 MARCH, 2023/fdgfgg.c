#include<stdio.h>
int main()
{
int H,A,N;
int attacks=0;
scanf("%d %d",&H,&A);
N=H/A;
attacks=N;
if(N>0)
{
printf("%d\n",attacks+1); 
}
//else
//{
//printf("%d\n",attacks); 
//} 
 
return 0;
}