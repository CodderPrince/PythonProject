def interchange_paragraphs(S, k, l):
    # Split the story into paragraphs based on double newline delimiter
    paragraphs = S.split('\n\n')

    # Check if k and l are valid indices
    if k < 1 or k > len(paragraphs) or l < 1 or l > len(paragraphs):
        raise ValueError("Invalid paragraph indices")

    # Convert 1-based indices to 0-based indices for list manipulation
    k_index = k - 1
    l_index = l - 1

    # Swap the k-th and l-th paragraphs
    paragraphs[k_index], paragraphs[l_index] = paragraphs[l_index], paragraphs[k_index]

    # Join the paragraphs back into a single string with double newline as the delimiter
    modified_story = '\n\n'.join(paragraphs)

    return modified_story

# Example usage
S = "Paragraph 1.\n\nParagraph 2.\n\nParagraph 3.\n\nParagraph 4."
k = 2
l = 4
result = interchange_paragraphs(S, k, l)
print("Modified Story:\n", result)
