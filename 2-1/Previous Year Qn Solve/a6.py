class FileSystemNode:
    def __init__(self, name, is_file=False):
        self.name = name
        self.is_file = is_file
        self.children = []

    def add_child(self, child):
        self.children.append(child)

    def __repr__(self, level=0):
        ret = "\t" * level + self.name + "\n"
        for child in self.children:
            ret += child.__repr__(level + 1)
        return ret

# Create the file system tree
root = FileSystemNode("root")
folder1 = FileSystemNode("folder1")
file1 = FileSystemNode("file1.txt", is_file=True)
file2 = FileSystemNode("file2.txt", is_file=True)

root.add_child(folder1)
folder1.add_child(file1)
folder1.add_child(file2)

# Print the file system structure
print(root)
