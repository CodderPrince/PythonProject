#include <stdio.h>
int main()
{
 int x, y, sum = 0, i;
 int min, max;
 scanf("%d%d", &x,&y);
    if(x < y)
{
     min = x;//let x=6, y=-5 here -5,-4,-3,-2,-1,0,1,2,3,4,5,6
     max = y;
 }
    else
{
     max = x;
     min = y;
}
 for(i = (min + 1); i < max; i++)
 {
  if(i % 2 != 0)
  {
   sum = sum + i;
  }
}
 printf("%d\n", sum);
 return 0;
}