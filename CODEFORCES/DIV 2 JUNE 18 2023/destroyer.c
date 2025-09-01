/*
    AUTHOR: PRINCE
    DEPARTMENT: CSE_BRUR
*/

#include <stdio.h>
#include<conio.h>

int main() 
{
  int t, n, l[100], sum = 0;
  scanf("%d", &t);
  while (t--) 
  {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
    {
      scanf("%d", &l[i]);
      sum = sum + l[i];
    }
    int flag = 1;
    for (int i = 0; i < n; i++) 
    {
      if (l[i] > sum - l[i]) 
      {
        flag = 0;
        break;
      }
    }
    if (flag) 
    {
      printf("YES\n");
    } 
    else 
    {
      printf("NO\n");
    }
    sum = 0;
  }
  
  return 0;
}
