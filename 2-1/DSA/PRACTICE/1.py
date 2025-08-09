# # # # # # # # # # # # # # # strring Permutation

# # # # # # # # # # # # # # # create permutation function
# # # # # # # # # # # # # # def permutation(strr, left, right):
# # # # # # # # # # # # # #     'base case'
# # # # # # # # # # # # # #     if left == right:
# # # # # # # # # # # # # #         print("".join(strr))
# # # # # # # # # # # # # #         return
    
# # # # # # # # # # # # # #         'recursively called'
# # # # # # # # # # # # # #     else:
# # # # # # # # # # # # # #         i = left
# # # # # # # # # # # # # #         while(i <= right):
# # # # # # # # # # # # # #             'swap(strr[left],strr[i])'
# # # # # # # # # # # # # #             strr[left], strr[i] = strr[i], strr[left]
# # # # # # # # # # # # # #             'recursively called'
# # # # # # # # # # # # # #             permutation(strr, left + 1, right)

# # # # # # # # # # # # # #             'backtracking for original strring'
# # # # # # # # # # # # # #             strr[left], strr[i] = strr[i], strr[left]

# # # # # # # # # # # # # #             i += 1

# # # # # # # # # # # # # # # Main function
# # # # # # # # # # # # # # if __name__ == "__main__":
# # # # # # # # # # # # # #     strrr = input("Enter a strring: ")
# # # # # # # # # # # # # #     strrLen = len(strrr) - 1

# # # # # # # # # # # # # #     'create list for access strring index'
# # # # # # # # # # # # # #     strr = list(strrr)

# # # # # # # # # # # # # # # called permutation function
# # # # # # # # # # # # # #     permutation(strr, 0, strrLen)

# # # # # # # # # # # # if __name__ == "__main__":
# # # # # # # # # # # #     strrr = input("Enter a strring: ")
# # # # # # # # # # # #     'convert strring to list'

# # # # # # # # # # # #     strrlen = len(strrr) - 1
# # # # # # # # # # # #     strr = list(strrr)

# # # # # # # # # # # #     permutation(strr, 0, strrlen)

# # # # # # # # # # # # def permutation(strrr, left, right):
# # # # # # # # # # # #     if left == right:
# # # # # # # # # # # #         print("".join(strr))
# # # # # # # # # # # #         return
    
# # # # # # # # # # # #     else:
# # # # # # # # # # # #         i = left
# # # # # # # # # # # #         while(i <= right):
# # # # # # # # # # # #             strr[left], strr[i] = strr[i], strr[left]
# # # # # # # # # # # #             permutation(strr, left + 1, right)
# # # # # # # # # # # #             strr[left], strr[i] = strr[i], strr[left]

# # # # # # # # # # # #             i += 1

# # # # # # # # # # # # import itertools

# # # # # # # # # # # # if __name__ == "__main__":
# # # # # # # # # # # #     strrr = input("Enter a strring: ")
# # # # # # # # # # # #     # Using itertools.permutations to get all permutations
# # # # # # # # # # # #     perms = itertools.permutations(strrr)
    
# # # # # # # # # # # #     # Joining each tuple from the permutations result and printing
# # # # # # # # # # # #     for perm in perms:
# # # # # # # # # # # #         print("".join(perm))

# # # # # # # # # # # # import itertools
# # # # # # # # # # # # if __name__ == "__main__":
# # # # # # # # # # # #     strr = input("Enter a string: ")
# # # # # # # # # # # #     perms = itertools.permutations(strr)

# # # # # # # # # # # #     for i in perms:
# # # # # # # # # # # #         print("".join(i))

# # # # # # # # # # # def perm(strr, left, right):
# # # # # # # # # # #     if left == right:
# # # # # # # # # # #         print("".join(strr))
# # # # # # # # # # #         return
# # # # # # # # # # #     else:
# # # # # # # # # # #         i = left
# # # # # # # # # # #         while(i <= right):
# # # # # # # # # # #             strr[left], strr[i] = strr[i], strr[left]
# # # # # # # # # # #             perm(strr, left + 1, right)
# # # # # # # # # # #             strr[left], strr[i] = strr[i], strr[left]
# # # # # # # # # # #             i+=1

# # # # # # # # # # # if __name__ == "__main__":
# # # # # # # # # # #     strr = input("Enter a string: ")
# # # # # # # # # # #     strr = list(strr)
# # # # # # # # # # #     strlen = len(strr)
# # # # # # # # # # #     perm(strr, 0, strlen - 1)
# # # # # # # # # # from typing import List

# # # # # # # # # # def combinationSum(cand: List[int], target: int) -> List[List[int]]:
# # # # # # # # # #     result = []

# # # # # # # # # #     def combination(i, curr, ts):
# # # # # # # # # #         if ts == target:
# # # # # # # # # #             result.append(curr.copy())
# # # # # # # # # #             return
# # # # # # # # # #         if i >= len(cand):
# # # # # # # # # #             return
# # # # # # # # # #         if ts > target:
# # # # # # # # # #             return
        
# # # # # # # # # #         curr.append(cand[i])
# # # # # # # # # #         combination(i, curr, ts + cand[i])
# # # # # # # # # #         curr.pop() 
# # # # # # # # # #         combination(i + 1, curr, ts) 

# # # # # # # # # #     combination(0, [], 0)
# # # # # # # # # #     return result

# # # # # # # # # # if __name__ == "__main__":
# # # # # # # # # #     cand = [2, 3, 6, 7]
# # # # # # # # # #     target = 7
# # # # # # # # # #     print(combinationSum(cand, target))

# # # # # # # # # from typing import List

# # # # # # # # # def comSum(cand, tar: int) -> List[List[int]]:
# # # # # # # # #     result = []

# # # # # # # # #     def cs(i, curr, ts):
# # # # # # # # #         if ts == tar:
# # # # # # # # #             result.append(curr.copy())
# # # # # # # # #             return
# # # # # # # # #         if i >= len(cand):
# # # # # # # # #             return
# # # # # # # # #         if ts > tar:
# # # # # # # # #             return
        
# # # # # # # # #         curr.append(cand[i])
# # # # # # # # #         cs(i, curr, ts + cand[i])

# # # # # # # # #         curr.pop() 
# # # # # # # # #         cs(i + 1, curr, ts)

# # # # # # # # #     cs(0, [], 0)
# # # # # # # # #     return result

# # # # # # # # # if __name__ == "__main__":
# # # # # # # # #     cand = [2, 3, 6, 7]
# # # # # # # # #     tar = 7
# # # # # # # # #     print(comSum(cand, tar))

# # # # # # # # from typing import List

# # # # # # # # def combinationSum(candidates, target: int) -> List[List[int]]:
# # # # # # # #     result = []

# # # # # # # #     def combination(i, currentValue, totalSum):
# # # # # # # #         if totalSum == target:
# # # # # # # #             result.append(currentValue.copy())
# # # # # # # #             return
        
# # # # # # # #         if totalSum > target:
# # # # # # # #             return
# # # # # # # #         if i >= len(candidates):
# # # # # # # #             return 
        
# # # # # # # #         'two option'
# # # # # # # #         'pickup'
# # # # # # # #         currentValue.append(candidates[i])
# # # # # # # #         'called function'
# # # # # # # #         combination(i, currentValue, totalSum + candidates[i])

# # # # # # # #         # if not taken
# # # # # # # #         currentValue.pop() 
# # # # # # # #         combination(i + 1, currentValue, totalSum)

# # # # # # # #     combination(0, [], 0)
# # # # # # # #     return result

# # # # # # # # if __name__ == "__main__":
# # # # # # # #     candidates = [2, 3, 4, 7]
# # # # # # # #     target = 7
# # # # # # # #     print(combinationSum(candidates, target))

# # # # # # # from typing import List

# # # # # # # def combinationSum(candidates, target: int) -> List[List[int]]:
# # # # # # #     result = []

# # # # # # #     def combination(i, currentValue, totalSum):
# # # # # # #         if totalSum == target:
# # # # # # #             result.append(currentValue.copy()) 
# # # # # # #             return
        
# # # # # # #         if i >= len(candidates) or totalSum > target:
# # # # # # #             return
        
# # # # # # #         'two option'
# # # # # # #         'if taken'
# # # # # # #         currentValue.append(candidates[i])
# # # # # # #         combination(i, currentValue, totalSum + candidates[i])

# # # # # # #         'if not taken'
# # # # # # #         currentValue.pop() 
# # # # # # #         combination(i + 1, currentValue, totalSum)

# # # # # # #     combination(0, [], 0)
# # # # # # #     return result

# # # # # # # if __name__ == "__main__":
# # # # # # #     candidates = [2, 3, 4, 7]
# # # # # # #     target = 7
# # # # # # #     print(combinationSum(candidates, target))

# # # # # # def towerOfHanoi(n, src, helper, dest):
# # # # # #     'base case'
# # # # # #     if n == 1:
# # # # # #        print(f"transfer disk {n} from {src} to {dest}")
# # # # # #        return
    
# # # # # #     'if more than n'
# # # # # #     'transfer n-1 disk from s to h'
# # # # # #     towerOfHanoi(n - 1, src, dest, helper) 
# # # # # #     print(f"transfer disk {n} from {src} to {helper}")
# # # # # #     'now transfer n-1 disk from h to dest'
# # # # # #     towerOfHanoi(n - 1, helper, src, dest)

# # # # # # if __name__ == "__main__":
# # # # # #     n = int(input("Enter the number of disk: "))
# # # # # #     towerOfHanoi(n, "S", "H", "D")

# # # # # 'create new function'

# # # # # def towerOfHanoi(n, src, helper, dest):
# # # # #     'base case'
# # # # #     if n == 1:
# # # # #         print(f"transfer disk {n} from {src} to {dest}")
# # # # #         return
    
# # # # #     towerOfHanoi(n - 1, src, dest, helper)
# # # # #     print(f"transfer disk {n} from {src} to {dest}")
# # # # #     towerOfHanoi(n - 1, helper, src, dest)

# # # # # if __name__ == "__main__":
# # # # #     n = int(input("Enter the number of disk: "))
# # # # #     towerOfHanoi(n, "Src", "Help", "Dest")

# # # # def tow(n, src, helper, dest):
# # # #     if n == 1:
# # # #         print(f"transfer disk {n} from {src} to {dest}")
# # # #         return
    
# # # #     tow(n - 1, src, dest, helper) 
# # # #     print(f"transfer disk {n} from {src} to {dest}")
# # # #     tow(n - 1, helper, src, dest)

# # # # n = 2
# # # # tow(n, "s", "h", "d")

# # # result = []

# # # def solve(board, row, columns, Diagonal, antiDiagonal):
# # #     if row == len(board):  # Base case: if all queens are placed
# # #         result.append(["".join(row) for row in board])  # Append a copy of the board as a solution
# # #         return

# # #     for col in range(len(board)):
# # #         diagonalSum = row - col
# # #         antDigSum = row + col

# # #         # Check if the column, diagonal, or anti-diagonal is under attack
# # #         if col in columns or diagonalSum in Diagonal or antDigSum in antiDiagonal:
# # #             continue

# # #         # Place the queen
# # #         board[row][col] = "Q"
# # #         columns.add(col)
# # #         Diagonal.add(diagonalSum)
# # #         antiDiagonal.add(antDigSum)

# # #         # Recur to place the next queen
# # #         solve(board, row + 1, columns, Diagonal, antiDiagonal)

# # #         # Backtrack: Remove the queen and try another position
# # #         board[row][col] = "."
# # #         columns.remove(col)
# # #         Diagonal.remove(diagonalSum)
# # #         antiDiagonal.remove(antDigSum)

# # # def solveNQueen(n):
# # #     if n == 0:
# # #         return []

# # #     # Create an empty board filled with '.'
# # #     board = [['.' for _ in range(n)] for _ in range(n)]

# # #     # Create sets to track columns, diagonals, and anti-diagonals
# # #     columns = set()
# # #     diag = set()
# # #     antiDiag = set()

# # #     # Call the recursive function to solve the problem
# # #     solve(board, 0, columns, diag, antiDiag)

# # #     global result
# # #     solution = result  # Store the result
# # #     result = []  # Reset the result for future calls

# # #     return solution

# # # if __name__ == "__main__":
# # #     n = int(input("Enter the number of queens: "))
# # #     solution = solveNQueen(n)

# # #     # Print all solutions
# # #     for sol in solution:
# # #         for row in sol:
# # #             print(row)
# # #         print()

# # global result = []

# # def solve(board, row, columns, diag, antiDiag):
# #     if row == len(board):
# #         # Append a valid board configuration
# #         result.append(["".join(row) for row in board])
# #         return
    
# #     for col in range(len(board)):
# #         diagonalSum = row - col
# #         antiDiagSum = row + col 

# #         # Skip if current column or diagonal is under attack
# #         if col in columns or diagonalSum in diag or antiDiagSum in antiDiag:
# #             continue 

# #         # Place the queen
# #         board[row][col] = "Q"
# #         columns.add(col)
# #         diag.add(diagonalSum)
# #         antiDiag.add(antiDiagSum)

# #         # Recurse to the next row
# #         solve(board, row + 1, columns, diag, antiDiag)

# #         # Backtrack: Remove the queen
# #         board[row][col] = "."
# #         columns.remove(col)
# #         diag.remove(diagonalSum)
# #         antiDiag.remove(antiDiagSum)

# # def solveNQueens(n):
# #     # Base case: no queens to place
# #     if n == 0:
# #         return []

# #     # Initialize the result list before solving
# #     global result
# #     result = []

# #     # Initialize the board and sets for columns, diagonals, and anti-diagonals
# #     board = [['.' for _ in range(n)] for _ in range(n)]
# #     columns = set() 
# #     diag = set() 
# #     antiDiag = set() 

# #     # Start solving from the first row
# #     solve(board, 0, columns, diag, antiDiag)

# #     # Return the list of solutions
# #     return result

# # if __name__ == "__main__":
# #     n = int(input("Enter the number of queens: "))
# #     solution = solveNQueens(n)

# #     # Print each solution
# #     for row in solution:
# #         for col in row:
# #             print(col)
# #         print()  # Print a blank line between solutions

# result = []


# def solve(board, row, columns, diagonal, antidiagonal):
#     if row == len(board):
#         result.append(["".join (row) for row in board])
#         return
    
#     for col in range(len(board)):
#         diagonalSum = row - col 
#         antidiagonalSum = row + col 
        
#         if col in columns or diagonalSum in diagonal or antidiagonalSum in antidiagonal:
#             continue

#         board[row][col] = "Q"
#         columns.add(col)
#         diagonal.add(diagonalSum)
#         antidiagonal.add(antidiagonalSum)
#         solve(board, row + 1, columns, diagonal, antidiagonal)

#         columns.remove(col)
#         diagonal.remove(diagonalSum)
#         antidiagonal.remove(antidiagonalSum)
#         board[row][col] = "."

        
# def solveNQueens(n):
#     global result
#     result = []

#     if n == 0:
#         return []
    
#     board = [['.' for _ in range(n)] for _ in range(n)]
#     row = 0

#     columns = set() 
#     diagonal = set() 
#     antidiagonal = set() 
#     solve(board, row, columns, diagonal, antidiagonal)

#     return result


# if __name__ == "__main__":
#     n = int(input("Enter the number of queens: "))
#     solution = solveNQueens(n)

#     for row in solution:
#         for col in row:
#             print(col)
#         print()

def solve(n):
    if n==1:
        return 1
    if n==2:
        return 2
    else:
        return solve(n-1)+(n-2)
if __name__ == "__main__":
    n = int(input())
    result = solve(n)
    print(result)