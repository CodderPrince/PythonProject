# Initialize the hash table with legal words
legal_words = {"apple": True, "banana": True, "orange": True}

# Function to check if a word is legal
def is_legal_word(word):
    return word in legal_words

# Check if 'apple' is a legal word
print(is_legal_word("apple"))  # Output: True

# Check if 'grape' is a legal word
print(is_legal_word("grape"))  # Output: False
