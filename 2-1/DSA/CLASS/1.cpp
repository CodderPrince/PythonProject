#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    vector<vector<string>> result;

    void solve(vector<string> &board, int row, unordered_set<int> &cols, unordered_set<int> &diags, unordered_set<int> &antiDiags)
    {
        cout << "Board size: " << board.size() << endl;
        cout << "Board:\n";
        for (const auto &x : board)
        {
            cout << x << endl;
        }

        if (row == board.size())
        {
            result.push_back(board);
            return;
        }

        for (int col = 0; col < board.size(); col++)
        {
            cout << "Row: " << row << endl;
            cout << "Coloumns: " << col << endl;

            int diag_id = row - col;
            cout << "Diagonal Sum: " << diag_id << endl;
            int anti_diag_id = row + col;
            cout << "Anti Diagonal Sum: " << anti_diag_id << endl;
            cout << "Columns Array:\n";
            for (const auto &x : cols)
            {
                cout << x << " ";
            }
            cout << "\nDiagonal Sum Array:\n";
            for (const auto &x : diags)
            {
                cout << x << " ";
            }
            cout << "\nAnti Diagonal Sum Array:\n";
            for (const auto &x : antiDiags)
            {
                cout << x << " ";
            }

            if (cols.find(col) != cols.end())
            {
                cout << "\nColoumns array cond. true\n";
                continue;
            }
            if (diags.find(diag_id) != diags.end())
            {
                cout << "\nDiagonal Sum array cond. true\n";
                continue;
            }
            if (antiDiags.find(anti_diag_id) != antiDiags.end())
            {
                cout << "\nAnti Diagonal Sum array cond. true\n";
                continue;
            }

            cols.insert(col);
            diags.insert(diag_id);
            antiDiags.insert(anti_diag_id);
            board[row][col] = 'Q';

            solve(board, row + 1, cols, diags, antiDiags);

            cols.erase(col);
            diags.erase(diag_id);
            antiDiags.erase(anti_diag_id);
            board[row][col] = '.';
        }
    }

    vector<vector<string>> solveNQueens(int n)
    {
        if (n == 0)
            return {};
        vector<string> board(n, string(n, '.'));
        // For n = 3, board = {"...", "...", "..."} initially

        int start_row = 0;
        unordered_set<int> cols;
        unordered_set<int> diags;
        unordered_set<int> antiDiags;
        solve(board, start_row, cols, diags, antiDiags);

        return result;
    }
};

int main()
{
    Solution sol;
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<vector<string>> solutions = sol.solveNQueens(n);

    for (const auto &solution : solutions)
    {
        for (const auto &row : solution)
        {
            cout << row << endl;
        }
        cout << endl;
    }

    return 0;
}
