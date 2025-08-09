

def insert(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        
        while j >= 0 and key < arr[j]:
            arr[j+1] = arr[j]

arr = [12, 11, 13, 5, 6]
print(f"Sorted array: {insert}")