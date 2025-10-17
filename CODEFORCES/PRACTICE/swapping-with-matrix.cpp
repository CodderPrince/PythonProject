#include <iostream>
#include <vector>
using namespace std;

void swapRows(vector<vector<int>>& matrix, int x, int y) {
    swap(matrix[x - 1], matrix[y - 1]);
}

void swapColumns(vector<vector<int>>& matrix, int x, int y) {
    for (int i = 0; i < matrix.size(); i++) {
        swap(matrix[i][x - 1], matrix[i][y - 1]);
    }
}

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    vector<vector<int>> matrix(n, vector<int>(n));

    // Input the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Perform row and column swaps
    swapRows(matrix, x, y);
    swapColumns(matrix, x, y);

    // Output the modified matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
