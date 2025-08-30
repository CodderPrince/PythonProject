

def permutation(strr, left, right):
    # base case
    if(left == right):
        print("".join(strr))
        return
    
    else:
        i = left
        while(i <= right):
            strr[left], strr[i] = strr[i], strr[left]
            permutation(strr, left + 1, right)
            strr[left], strr[i] = strr[i], strr[left]  

            i += 1


if __name__ == "__main__":
    strr = input("Enter a string: ")
    strr = list(strr)
    strLen = len(strr) - 1
    permutation(strr, 0, strLen)
