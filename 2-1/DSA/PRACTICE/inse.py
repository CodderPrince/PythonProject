def insertion(arr):
    n = len(arr)

    for i in range (0, n):
        min_index = i 
        
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j 
        
        arr[i], arr[min_index] = arr[min_index], arr[i]


# main
arr = [5, 2, 3, 1, 4]
insertion(arr) 
print(f"Insertion Sorted Array: {arr}")
