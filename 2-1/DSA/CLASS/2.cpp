/*Problem no: 4
N-Queen Problems*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007            // 1e9 + 7
#define PI 3.14159265358979323846 // acos(-1)
#define nl "\n"

// create an class for online solution
class Solution
{
public:
    // create an sub array where store every simple result
    vector<vector<string>> result;

    void solve(vector<string> &board, int row, unordered_set<int> coloumns, unordered_set<int> diagonals,
               unordered_set<int> antiDiagonals)
    {
        // if traversing all rows then push that result to board
        if (row == board.size())
        {
            result.push_back(board);
            return;
        }

        for (int col = 0; col < board.size(); col++)
        {
            int diagonalsSum = row - col;
            int antidiagonalSum = row + col;

            // check any condition is fillup or not
            //  if fill-up means not possible to set queen that index
            if (coloumns.find(col) != coloumns.end() ||
                diagonals.find(diagonalsSum) != diagonals.end() ||
                antiDiagonals.find(antidiagonalSum) != antiDiagonals.end())
            {
                continue;
            }

            // if any condition is not true it's means we can
            // placed queen that index so locked this index

            coloumns.insert(col);
            diagonals.insert(diagonalsSum);
            antiDiagonals.insert(antidiagonalSum);
            board[row][col] = 'Q'; // placed queen that place

            // now go to the next row
            solve(board, row + 1, coloumns, diagonals, antiDiagonals);

            // when backtracking if queens placed not helpful
            // then remove queen and unlocked 3 items and
            // fill up with dot(.)

            coloumns.erase(col);
            diagonals.erase(diagonalsSum);
            antiDiagonals.erase(antidiagonalSum);
            board[row][col] = '.';
        }
    }

    // create solveNqueen function
    vector<vector<string>> solveNqueen(int n)
    {
        // base case
        if (n == 0)
        {
            return {};
        }

        // initially fill all the chess board to dot(.)
        vector<string> board(n, string(n, '.'));

        // initially start row = 0

        int start_row = 0;
        // create 3 unordered set for store 3 different result
        unordered_set<int> coloumns;
        unordered_set<int> diagonals;
        unordered_set<int> antiDiagonals;

        // call solve function
        solve(board, start_row, coloumns, diagonals, antiDiagonals);

        // now everytime return the result
        return result;
    }
};

int main()
{
    Solution sol;

    // input number of queens
    int n;
    cout << "Enter the number of queens: ";
    cin >> n;

    // create a solutions array where store all answers
    vector<vector<string>> solutions = sol.solveNqueen(n);

    // print
    for (const auto &x : solutions)
    {
        for (const auto &row : x)
        {
            cout << row << nl;
        }
        cout << nl;
    }

    return 0;
}
