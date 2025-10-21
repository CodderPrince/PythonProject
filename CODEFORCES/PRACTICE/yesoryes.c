#include <stdio.h>
#include <string.h>

int main() 
{
  int t;
  scanf("%d", &t);
  while (t--) 
  {
    char str[4];
    scanf("%s", str);
    if ((strcmp(str, "YES") == 0 || strcmp(str, "YEs") == 0 || strcmp(str,"yES")==0
        || strcmp(str, "YeS") == 0 || strcmp(str, "yes") == 0 || strcmp(str,"Yes")==0
        || strcmp(str,"yeS")==0 || strcmp(str,"yEs")==0)) 
    {
      printf("YES\n");
    } 
    else 
    {
      printf("NO\n");
    }
  }

  return 0;
}
