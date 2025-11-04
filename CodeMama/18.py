# -*- coding: utf-8 -*-
# Write Python code from here
# -*- coding: utf-8 -*-
# Write Python code from here
n=int(input())
if (n%4==0 and n%100!=0) or (n%400==0):
    print(f"{n} is a leap year.")

else:
    print(f"{n} is not a leap year.")