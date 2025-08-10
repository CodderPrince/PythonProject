def kmp_prefix_function(pattern):
    """
    Computes the prefix function (LPS array) for the KMP algorithm.

    Args:
        pattern: The pattern string.

    Returns:
        A list representing the prefix function (LPS array).
    """
    m = len(pattern)
    pi = [0] * m  # Initialize the prefix function array with zeros
    k = 0  # Length of the current longest prefix suffix

    for i in range(1, m):
        # While there's a mismatch and k is not at the beginning
        while k > 0 and pattern[k] != pattern[i]:
            # Backtrack to the previous possible prefix
            k = pi[k - 1]
        # If a match is found
        if pattern[k] == pattern[i]:
            k += 1  # Extend the length of the prefix
        pi[i] = k  # Store the length in the prefix function array

    return pi

# Example usage:
pattern = "aabaabcab"
prefix_function = kmp_prefix_function(pattern)
print(f"Prefix function for '{pattern}': {prefix_function}") 