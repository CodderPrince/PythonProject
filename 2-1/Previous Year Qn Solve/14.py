def INDEX(T, P):
    try:
        return T.index(P)
    except ValueError:
        return -1

def Length(P):
    return len(P)

def delete_occurrences(T, P):
    while True:
        index = INDEX(T, P)
        if index == -1:
            break
        T = T[:index] + T[index + Length(P):]
    return T

# Example usage
T = "ABCDABCABC"
P = "ABC"
result = delete_occurrences(T, P)
print("Resulting string:", result)  # Output should be "D"
