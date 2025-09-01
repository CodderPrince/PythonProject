#include <iostream>
#include <vector>
using namespace std;

char determineWinner(int n, string s) {
    int countA = 0, countB = 0;

    // Count the number of wins for <link>player A</link> and <link>player B</link>
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A')
            countA++;
        else
            countB++;
    }

    // If <link>player A</link> won all plays or <link>player B</link> won all plays, return the respective winner
    if (countA == n || countB == n)
        return (countA == n) ? 'A' : 'B';

    // Check if one player has won enough sets to guarantee victory
    for (int i = 1; i <= n; i++) {
        int winsA = 0, winsB = 0;

        // Count the number of wins for each player in sets of size i
        for (int j = 0; j < n; j += i) {
            bool foundA = false, foundB = false;
            for (int k = j; k < j + i && k < n; k++) {
                if (s[k] == 'A')
                    foundA = true;
                else
                    foundB = true;
            }
            if (foundA && !foundB)
                winsA++;
            else if (!foundA && foundB)
                winsB++;
        }

        // If one player has won enough sets, return the respective winner
        if (winsA >= winsB && winsA >= (n + i - 1) / i)
            return 'A';
        else if (winsB >= (n + i - 1) / i)
            return 'B';
    }

    // If no winner can be determined, return '?'
    return 'A';
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;

        cin >> n >> s;

        char winner = determineWinner(n, s);
        cout << winner << endl;
    }

    return 0;
}