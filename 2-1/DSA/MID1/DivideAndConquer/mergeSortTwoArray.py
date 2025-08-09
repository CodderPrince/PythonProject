# optimize merge sort of Two Array
'''Prince | 12105007'''


def mergeTwoarray(arr1, arr2):
    n1 = len(arr1)
    n2 = len(arr2) 

    i, j = 0, 0
    mergeArray = []

    while i < n1 and j < n2:
        if arr1[i] < arr2[j]:
            mergeArray.append(arr1[i])
            i += 1
        
        else:
            mergeArray.append(arr2[j])
            j += 1

    while i < n1:
        mergeArray.append(arr1[i])
        i += 1
    
    while j < n2:
        mergeArray.append(arr2[j])
        j += 1

    return mergeArray


# main
arr1 = [2, 5, 9]
arr2 = [-1, 3]

print(f"\nInitial Sorted Array1: {arr1}")
print(f"\nInitial Sorted Array2: {arr2}")

merge = mergeTwoarray(arr1, arr2)
print(f"\nAfter Sorting: {merge}\n")
