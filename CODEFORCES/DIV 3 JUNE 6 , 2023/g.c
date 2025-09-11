#include <stdio.h>

int main() {
  int x, n;

  // Get the initial sector number
  scanf("%d", &x);

  // Initialize the number of sectors
  n = 1;

  while (1) {
    // Move the arrow clockwise
    printf("+ 1\n");
    fflush(stdout);

    // Read the new sector number
    scanf("%d", &x);

    // If the new sector number is equal to the initial sector number,
    // then we have found the number of sectors
    if (x == n) {
      break;
    }

    // Otherwise, increase the number of sectors by 1
    n++;
  }

  // Print the number of sectors
  printf("! %d\n", n);
  fflush(stdout);

  return 0;
}
