class TrieNode:
    def __init__(self):
        self.children = {}
        self.is_end_of_word = False

class Trie:
    def __init__(self):
        self.root = TrieNode()

    def insert(self, word):
        node = self.root
        for char in word:
            if char not in node.children:
                node.children[char] = TrieNode()
            node = node.children[char]
        node.is_end_of_word = True

    def search(self, word):
        node = self.root
        for char in word:
            if char not in node.children:
                return False
            node = node.children[char]
        return node.is_end_of_word

# Initialize the trie and insert words
spell_checker = Trie()
spell_checker.insert("apple")
spell_checker.insert("banana")
spell_checker.insert("orange")

# Check if words are in the trie
print(spell_checker.search("apple"))  # Output: True
print(spell_checker.search("grape"))  # Output: False
