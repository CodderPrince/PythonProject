# prince

from math import *
t = int(input())
while t > 0:
    a, b, c = map(int, input().split())
    if a > b:
        if a-b == c:
            print("-")
        else:
            print("+")
    else:
        if a+b == c:
            print("+")
        else:
            print("-")
    t = t-1
