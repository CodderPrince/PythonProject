# 2D
arr = [
    [1, 2],
    [3, 4],
    [5, 6],
    [7, 8]
]

print("2D Array Addresses:")
for i in range(len(arr)): 
    for j in range(len(arr[i])):
        print(f"Index: [{i}][{j}] Value: {arr[i][j]} Address: {id(arr[i][j])}")
