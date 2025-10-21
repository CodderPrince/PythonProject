#include <stdio.h>
#include <string.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    char str[4];
    //gets(str);
    scanf("%s",str)j;
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < 3; i++) {
      if (str[i] == 'Y' || str[i] == 'y') {
        a++;
      } else if (str[i] == 'E' || str[i] == 'e') {
        b++;
      } else if (str[i] == 'S' || str[i] == 's') {
        c++;
      }
    }
    if (a == 1 && b == 1 && c == 1) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }

  return 0;
}
