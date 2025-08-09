'''Problem no: 4
N-Queens solve'''

# create result array to store result
# vector<vector<string>>result
result = []

# create solve function


def solve(board, row, coloumns, Diagonal, antiDiagonal):
    'base case'
    if row == len(board):
        # result.push_back(board)
        result.append(["".join(row) for row in board])

    '''for (int col = 0; col < board.size(); col++)'''
    for col in range(len(board)):
        diagonalSum = row - col
        antiDiagonalSum = row + col

        ''' if (coloumns.find(col) != coloumns.end() ||
            Diag.find(diagonalSum) != Diag.end() || 
            antiD.find(antiDiagonalSum) != antiD.end())
        '''
        if col in coloumns or diagonalSum in Diagonal or antiDiagonalSum in antiDiagonal:
            continue

        # insert == add
        board[row][col] = 'Q'
        coloumns.add(col)
        Diagonal.add(diagonalSum)
        antiDiagonal.add(antiDiagonalSum)

        solve(board, row + 1, coloumns, Diagonal, antiDiagonal)

        # erase == remove
        coloumns.remove(col)
        Diagonal.remove(diagonalSum)
        antiDiagonal.remove(antiDiagonalSum)
        board[row][col] = '.'


# create solveNqueen function
def solveNqueen(n):
    # base case
    if n == 0:
        return []

    # initially fill up all index to dot(.)
    # vector<string>board(n,string(n,'.'))
    board = [['.'for _ in range(n)] for _ in range(n)]

    # python is dynamic so recognize automatically
    coloumns = set()
    Diagonal = set()
    antiDiagonal = set()

    # call solve function
    solve(board, 0, coloumns, Diagonal, antiDiagonal)

    # create global result
    global result
    result = []

    # return the result
    return result


if __name__ == "__main__":
    n = int(input("Enter the number of Queens: "))
    # create an variables to store result
    solutions = solveNqueen(n)

    '''for (const auto &x : solutions)
    {
        for (const auto &row : x)
        {
            cout << row << nl;
        }
        cout << nl;
    }'''
    # print
    for x in solutions:
        for row in x:
            print(row)
        print()
