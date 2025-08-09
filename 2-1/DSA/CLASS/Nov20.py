'''November 20 Class'''

'''# Example 2D array
name = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9],
    [10, 11, 12],
    [13, 14, 15],
    [16, 17, 18],
    [19, 20, 21],
    [22, 23, 24],
    [25, 26, 27],
    [28, 29, 30],
    [31, 32, 33],
    [34, 35, 36],
]

# Get the first 5 rows and last 10 rows
first_5_rows = name[:5]
last_10_rows = name[-10:]

# Print memory addresses of the first 5 rows
print("Memory addresses of elements in the first 5 rows:")
for i, row in enumerate(first_5_rows):
    for j, item in enumerate(row):
        print(f"Row {i+1}, Col {j+1} ({item}): {id(item)}")

# Print memory addresses of the last 10 rows
print("\nMemory addresses of elements in the last 10 rows:")
for i, row in enumerate(last_10_rows):
    for j, item in enumerate(row):
        print(f"Row {i+1}, Col {j+1} ({item}): {id(item)}")
'''

'''# Factorial
def fact(n):
    if n <= 1:
        return 1
    else:
        return n * fact(n - 1)


# Main program
n = int(input("Enter a number: "))
print(f"Factorial: {fact(n)}")
'''
# 1D array
arr = [5, 6, 7, 8, 9]
print("1D Array Address:")
for index, value in enumerate(arr):
    print(f"Address of element at index {index}: {id(value)}")
print()

# 2D
arr = [
    [1, 2],
    [3, 4],
    [5, 6],
    [7, 8]
]

print("2D Array Address:")
for i, row in enumerate(arr):
    for j, value in enumerate(row):
        print(f"Address of element at arr[{i}][{j}] ({value}): {id(value)}")

#Stack
