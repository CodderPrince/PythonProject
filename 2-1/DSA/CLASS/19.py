def solve(board, row, columns, Diag, antiD, result):
    if row == len(board):
        result.append(["".join(row) for row in board])
        return
    
    for col in range(len(board)):
        diagonalSum = row - col
        antiDiagonalSum = row + col
        
        if col in columns or diagonalSum in Diag or antiDiagonalSum in antiD:
            continue
        
        columns.add(col)
        Diag.add(diagonalSum)
        antiD.add(antiDiagonalSum)
        board[row][col] = 'Q'
        
        solve(board, row + 1, columns, Diag, antiD, result)

        columns.remove(col)
        Diag.remove(diagonalSum)
        antiD.remove(antiDiagonalSum)
        board[row][col] = '.'

def solveNqueen(n):
    if n == 0:
        return []
    
    result = []  # Reset the result for each call
    board = [['.' for _ in range(n)] for _ in range(n)]
    
    columns = set()
    Diag = set()
    antiD = set()
    
    solve(board, 0, columns, Diag, antiD, result)
    return result

if __name__ == "__main__":
    n = int(input("Enter the number of Queens: "))
    solutions = solveNqueen(n)

    for solution in solutions:
        for row in solution:
            print(row)
        print()
