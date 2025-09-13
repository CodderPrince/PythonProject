#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int calculatePoints(char grid[10][10]) {
    int points = 0;
    int ringPoints[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (grid[i][j] == 'X') {
                int distanceFromCenter = abs(i - 4) > abs(j - 4) ? abs(i - 4) : abs(j - 4);
                points += ringPoints[distanceFromCenter];
            }
        }
    }

    return points;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char grid[10][10];
        for (int i = 0; i < 10; i++) {
            scanf("%s", grid[i]);
        }

        int points = calculatePoints(grid);
        printf("%d\n", points);
    }

    return 0;
}