#include <stdio.h>

// Function to determine the winner
char* determineWinner(int a, int b, int c) {
    // If the number of buttons that can be pressed by either girl is odd,
    // then the first player will win because she can always ensure that
    // the other player will be left with an odd number of buttons to press.
    if (c % 2 == 1) {
        return "First";
    }

    // If the number of buttons is such that both players can press an even
    // number of buttons, then the second player will win because she can
    // always mimic the moves of the first player and eventually force the
    // first player to be unable to make a move.
    if (a % 2 == 0 && b % 2 == 0) {
        return "Second";
    }

    // If the number of buttons is such that either player can press an odd
    // number of buttons, then the first player will win because she can
    // always ensure that the other player will be left with an odd number
    // of buttons to press.
    return "First";
}

int main() {
    int t; // Number of test cases
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int a, b, c; // Number of buttons for Anna, Katie, and either of them
        scanf("%d %d %d", &a, &b, &c);

        char* winner = determineWinner(a, b, c);
        printf("%s\n", winner);
    }

    return 0;
}