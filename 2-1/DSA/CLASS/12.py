def permute(s, left, right, arr):
    # base case
    if left == right:
        arr.add(s)
    else:
        for i in range(left, right + 1):
            s = list(s)
            s[left], s[i] = s[i], s[left]
            s = ''.join(s)
            permute(s, left + 1, right, arr)
            # backtracking for original string
            s = list(s)
            s[left], s[i] = s[i], s[left]
            s = ''.join(s)

if __name__ == "__main__":
    s = input("Enter the string: ")
    arr = set()
    
    permute(s, 0, len(s) - 1, arr)
    
    # sort and print
    for x in sorted(arr):
        print(x)
