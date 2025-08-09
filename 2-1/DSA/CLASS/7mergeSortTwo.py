# merge two sorted array


def merge_sorted_arrays(arr1, arr2):
    i, j = 0, 0
    merged_array = []
    
    while i < len(arr1) and j < len(arr2):
        if arr1[i] < arr2[j]:
            merged_array.append(arr1[i])
            i += 1
        else:
            merged_array.append(arr2[j])
            j += 1

    while i < len(arr1):
        merged_array.append(arr1[i])
        i += 1

    while j < len(arr2):
        merged_array.append(arr2[j])
        j += 1
    
    return merged_array


print(merge_sorted_arrays([2, 5, 9], [-1, 3]))  
