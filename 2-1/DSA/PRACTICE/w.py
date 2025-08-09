# Function to check if a word exists in the board
def exist(board: list[list[str]], word: str) -> bool:
    # Get the number of rows and columns in the board
    ROWS, COLUMNS = len(board), len(board[0])
    
    # Create a path set to store all visited cells (for backtracking)
    path = set()

    # Recursive function to solve the problem
    def solve(rows, cols, i):
        # If we have found all the characters in the word, return True
        if i == len(word):
            return True
        
        # Return False if:
        # 1. rows or cols are out of bounds
        # 2. The current board character doesn't match the word[i]
        # 3. The current cell has already been visited
        if (rows < 0 or cols < 0 or rows >= ROWS or cols >= COLUMNS or 
            word[i] != board[rows][cols] or (rows, cols) in path):
            return False

        # Add the current cell to the path (mark it as visited)
        path.add((rows, cols))

        # Recursively check all 4 directions (down, up, right, left)
        result = (solve(rows + 1, cols, i + 1) or  # Down
                  solve(rows - 1, cols, i + 1) or  # Up
                  solve(rows, cols + 1, i + 1) or  # Right
                  solve(rows, cols - 1, i + 1))  # Left

        # Remove the current cell from the path (backtracking)
        path.remove((rows, cols))

        return result

    # Start the search from each cell in the board
    for rows in range(ROWS):
        for cols in range(COLUMNS):
            # If the word is found starting from a particular cell, return True
            if solve(rows, cols, 0):
                return True

    # If no valid path is found, return False
    return False


# Example usage
board = [
    ['A', 'B', 'C', 'E'],
    ['S', 'F', 'C', 'S'],
    ['A', 'D', 'E', 'E']
]

word = "ABFCSEC"  # This word exists in the board

# Call the function and print the result

x = exist(board, word)
print(x)  # use this if we need to print output in true or false

if exist(board, word):
    print(f'The word "{word}" exists in the board.')
else:
    print(f'The word "{word}" does not exist in the board.')
