# -*- coding: utf-8 -*-
# Write Python code from here
a, b = map(int, input().split())
# b = int(input())
print(f"Before swapping: num1 = {a}, num2 = {b}")

temp = a
a = b
b = temp
print(f"After swapping: num1 = {a}, num2 = {b}")
