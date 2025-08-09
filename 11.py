'Create new function'
def permutation(str, left, right, arr):
    'base case'
    if left == right:
        'arr.insert(str)'
        arr.add(str)
    else:
        i = left
        while i <= right:
            str = list(str)
            'swap(str[left],str[i])'
            str[left], str[i] = str[i], str[left]
            str = ''.join(str)
            permutation(str, left+1, right, arr)
            str = list(str)
            str[left], str[i] = str[i], str[left]
            str = ''.join(str)
            i += 1


'Create main function'
if __name__ == "__main__":
    str = input()
    arr = set()
    permutation(str, 0, len(str)-1, arr)

    for x in sorted(arr):
        print(x)
