# prince

def palindrome(num):
    reverse = 0
    original = num
    while num > 0:
        remainder = num % 2
        reverse = reverse * 2 + remainder
        num = num//2

    return original == reverse


n = int(input())
if n % 2 == 1 and palindrome(n):
    print("YES")
else:
    print("NO")
