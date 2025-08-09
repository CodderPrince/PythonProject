

# merge function
def merge(a1, a2):
    i = 0
    j = 0
    
    mergeArray = []

    # how many we traverse
    while i < len(a1) and j < len(a2):
        if a1[i] < a2[j]:
            mergeArray.append(a1[i])
            i += 1
        
        else:
            mergeArray.append(a2[j])
            j += 1
    
    # remain
    while i < len(a1):
        mergeArray.append(a1[i])
        i += 1
    
    while j < len(a2):
        mergeArray.append(a2[j])
        j += 1
        
    return mergeArray


# main
a1 = [2, 5, 9]
a2 = [-1, 3]
print(merge(a1, a2))
