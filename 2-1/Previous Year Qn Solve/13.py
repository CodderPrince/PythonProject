# Define the string W
W = "ABCD"

# (a) Finding the Length of W
# The len() function returns the length of the string
length_of_W = len(W)
print("Length of W:", length_of_W)

# (b) Listing All Substrings of W
substrings_of_W = []

# Iterate over all possible starting indices
for i in range(len(W)):
    # Iterate over all possible ending indices
    for j in range(i + 1, len(W) + 1):
        # Extract substring from index i to index j-1
        substring = W[i:j]
        substrings_of_W.append(substring)

print("Substrings of W:", substrings_of_W)
