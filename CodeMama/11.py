'''Prince'''

import math

x1, y1 = map(float, input().split())
x2, y2 = map(float, input().split())

m = (x2 - x1) ** 2
n = (y2 - y1) ** 2
distance = math.sqrt(m + n)
print(f"Distance: {distance:.2f}")
