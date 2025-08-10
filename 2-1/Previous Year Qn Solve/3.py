# Initialize the chess board as an 8x8 matrix with empty strings
chess_board = [["" for _ in range(8)] for _ in range(8)]

# Place some pieces on the board
chess_board[0][0] = "Rook"    # Place a Rook at position (0, 0)
chess_board[0][1] = "Knight"  # Place a Knight at position (0, 1)
chess_board[7][7] = "Queen"   # Place a Queen at position (7, 7)

# Function to print the board
def print_board(board):
    for row in board:
        print("\t".join(piece if piece else "." for piece in row))

# Print the current state of the board
print_board(chess_board)
