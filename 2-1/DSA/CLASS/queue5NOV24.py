def sort_stacks(arr):
    
    S1 = []  
    S2 = []  
    
    for num in arr:
        S1.append(num)
    
    while S1:
       
        temp = S1.pop()
        
        while S2 and S2[-1] < temp:
            S1.append(S2.pop())
        
        S2.append(temp)
    
    sorted_arr = []
    while S2:
        sorted_arr.append(S2.pop())
    
    return sorted_arr


arr = [5, 4, 2, 10]
sorted_arr = sort_stacks(arr)
print("Sorted Array:", sorted_arr)
