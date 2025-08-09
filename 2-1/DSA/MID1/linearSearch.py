# optimize linear search
'''Prince | 12105007'''


def linearSearch(arr, searchItem):
    for i in range(len(arr)):  # Corrected this line
        if arr[i] == searchItem:
            print(f"Item found at index: {i}")
            return i  # Return the index of the found item

    print("Item not found!")
    return -1  # Return -1 to indicate that the item was not found
    

# Main function
arr = [30, 4, 52, 6, 7, 80, 9]  
searchItem = 7

linearSearch(arr, searchItem)
