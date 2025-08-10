class HashTable:
    def __init__(self, size):
        self.size = size
        self.table = [None] * size

    def _hash(self, key):
        hash_value = 0
        for char in key:
            hash_value += ord(char)
        return hash_value % self.size

    def insert(self, key, value):
        index = self._hash(key)
        self.table[index] = value

    def retrieve(self, key):
        index = self._hash(key)
        return self.table[index]

# Example usage
hash_table = HashTable(10)
hash_table.insert("name", "Alice")
print(hash_table.retrieve("name"))  # Output: Alice
