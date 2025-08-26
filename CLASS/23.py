# permutations

def permutation(str, left, right):
    if left == right:
        print("".join(str))
        return

    else:
        i = left
        while (i <= right):
            str[left], str[i] = str[i], str[left]
            permutation(str, left+1, right)
            str[left], str[i] = str[i], str[left]

            i += 1


if __name__ == "__main__":
    print("Enter a string:", end=" ")
    strr = input()

    stringLen = len(strr)
    'create list for access'
    str = list(strr)

    'call the function'
    permutation(str, 0, stringLen-1)
