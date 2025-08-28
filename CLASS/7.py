def permute_string(s, l, r):
    if l == r:
        print("".join(s))
        return
    
    for i in range(l, r + 1):
        s[l], s[i] = s[i], s[l]
        permute_string(s, l + 1, r)
        s[l], s[i] = s[i], s[l]

string = input("Enter a string: ")
n = len(string)
s = list(string)
permute_string(s, 0, n - 1)