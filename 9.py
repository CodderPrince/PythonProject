# -*- coding: utf-8 -*-
# Write Python code from here
# -*- coding: utf-8 -*-
# Write Python code from here
'''Prince'''

s = input() 
vowels = 'aeiouAEIOU'
if any(vowel in s for vowel in vowels):
    print(f"The string contains a vowel.")
else:
    print(f"The string does not contain any vowel.")
