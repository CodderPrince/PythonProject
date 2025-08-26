/*Problem no: 4
N-Queen Problems*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007            // 1e9 + 7
#define PI 3.14159265358979323846 // acos(-1)
#define nl "\n"

vector<vector<string>> result;

void solve(vector<string> &board, int row, unordered_set<int> &coloumns, unordered_set<int> &Diag, unordered_set<int> &antiD)
{
    // cout<<"Board size: "<<board.size()<<nl;
    // cout<<"Row size: "<<row<<nl;

    if (row == board.size())
    {
        result.push_back(board);
        return;
    }

    for (int col = 0; col < board.size(); col++)
    {
        // cout<<"Coloumn size: "<<col<<nl;
        int diagonalSum = row - col;
        int antiDiagonalSum = row + col;

        if (coloumns.find(col) != coloumns.end() ||
            Diag.find(diagonalSum) != Diag.end() ||
            antiD.find(antiDiagonalSum) != antiD.end())
        {
            continue;
        }

        coloumns.insert(col);
        Diag.insert(diagonalSum);
        antiD.insert(antiDiagonalSum);
        board[row][col] = 'Q';
        solve(board, row + 1, coloumns, Diag, antiD);

        coloumns.erase(col);
        Diag.erase(diagonalSum);
        antiD.erase(antiDiagonalSum);
        board[row][col] = '.';
    }
}

vector<vector<string>> solveNqueen(int n)
{
    if (n == 0)
    {
        return {};
    }

    vector<string> board(n, string(n, '.'));

    int start_row = 0;
    unordered_set<int> coloumns;
    unordered_set<int> Diag;
    unordered_set<int> antiD;

    solve(board, start_row, coloumns, Diag, antiD);

    return result;
}

int main()
{
    int n;
    cout << "Enter the number of Queens: ";
    cin >> n;

    vector<vector<string>> solutions = solveNqueen(n);

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