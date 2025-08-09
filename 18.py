class Solution:
    def __init__(self):
        self.result = []

    def solve(self, board, row, cols, diags, antiDiags):
        if row == len(board):
            self.result.append(["".join(row) for row in board])
            return
        
        for col in range(len(board)):
            diag_id = row - col
            anti_diag_id = row + col
            
            if col in cols or diag_id in diags or anti_diag_id in antiDiags:
                continue
            
            cols.add(col)
            diags.add(diag_id)
            antiDiags.add(anti_diag_id)
            board[row][col] = 'Q'
            
            self.solve(board, row + 1, cols, diags, antiDiags)

            cols.remove(col)
            diags.remove(diag_id)
            antiDiags.remove(anti_diag_id)
            board[row][col] = '.'

    def solveNQueens(self, n):
        if n == 0:
            return []
        board = [['.' for _ in range(n)] for _ in range(n)] 
        
        start_row = 0
        cols = set()
        diags = set()
        antiDiags = set()
        self.solve(board, start_row, cols, diags, antiDiags)
        
        return self.result

# Example usage:
sol = Solution()
n = int(input("Enter the value of n: "))
solutions = sol.solveNQueens(n)

for solution in solutions:
    for row in solution:
        print(row)
    print()
