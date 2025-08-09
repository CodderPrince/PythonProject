def merge(a1, a2):
    
    i, j = 0, 0
    mergeArray = []

    while i < len(a1) and j < len(a2):
        if a1[i] < a2[j]:
            mergeArray.append(a1[i])
            i += 1
        else:
            mergeArray.append(a2[j])
            j+=1

    # remaining
    while i < len(a1):
        mergeArray.append(a1[i])
        i += 1

    while j < len(a2):
        mergeArray.append(a2[j])
        j += 1
    
    return mergeArray

# called

print(merge([2, 5, 9], [-1, 3]))
