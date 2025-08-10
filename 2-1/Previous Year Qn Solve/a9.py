class FamilyTreeNode:
    def __init__(self, name):
        self.name = name
        self.children = []

    def add_child(self, child):
        self.children.append(child)

    def __repr__(self, level=0):
        ret = "\t" * level + self.name + "\n"
        for child in self.children:
            ret += child.__repr__(level + 1)
        return ret

# Create the family tree
grandparent = FamilyTreeNode("Grandparent")
parent1 = FamilyTreeNode("Parent1")
child1 = FamilyTreeNode("Child1")
child2 = FamilyTreeNode("Child2")

grandparent.add_child(parent1)
parent1.add_child(child1)
parent1.add_child(child2)

# Print the family tree structure
print(grandparent)
