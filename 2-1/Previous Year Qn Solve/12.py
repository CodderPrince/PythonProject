def compute_lps(pattern):
    length = 0  # length of the previous longest prefix suffix
    lps = [0] * len(pattern)
    
    # the loop calculates lps[i] for i = 1 to len(pattern)-1
    i = 1
    while i < len(pattern):
        if pattern[i] == pattern[length]:
            length += 1
            lps[i] = length
            i += 1
        else:
            if length != 0:
                length = lps[length - 1]
            else:
                lps[i] = 0
                i += 1
    return lps

pattern = "aaaba"
lps = compute_lps(pattern)
print("LPS table:", lps)
