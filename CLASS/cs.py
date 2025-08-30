from typing import List
from itertools import combinations_with_replacement

# Example input
candidates = [2, 3, 6, 7]
target = 7

# Generate results directly using list comprehension
result = [
    list(combo)
    for r in range(1, target // min(candidates) + 1)
    for combo in combinations_with_replacement(candidates, r)
    if sum(combo) == target
]

# Output the result
print(result)  # Output: [[2, 2, 3], [7]]
