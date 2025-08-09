# 1D array

arr = [5, 6, 7, 8, 9]
print("1D Array Address:")
for i in range(len(arr)):
    print(f"Index {i}: Value {arr[i]} Address: {id(arr[i])}")
print()
