def simple_hash(key):
    hash_value = 0
    for char in key:
        hash_value += ord(char)
    return hash_value % table_size
