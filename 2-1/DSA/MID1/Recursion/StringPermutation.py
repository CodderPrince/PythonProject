'Problem no: 1 - String Permutation'

'create new function'


def permutation(str, left, right):
    'base case'
    if left == right:
        print("".join(str))
        return

    else:
        i = left
        while (i <= right):
            'swap(str[left],str[i])'
            str[left], str[i] = str[i], str[left]
            'recursive call the function'
            permutation(str, left + 1, right)
            'backtracking for original string'
            str[left], str[i] = str[i], str[left]

            'increment while loop'
            i += 1


'create main function'
if __name__ == "__main__":
    strr = input()
    stringLen = len(strr)
    'create string list for access any character'
    str = list(strr)
    'call new function'
    permutation(str, 0, stringLen - 1)
