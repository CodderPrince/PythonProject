import networkx as nx

# Create a directed graph
assembly_steps = nx.DiGraph()

# Add edges representing dependencies (step A must be done before step B)
assembly_steps.add_edge("Install wings", "Install engines")
assembly_steps.add_edge("Install fuselage", "Install wings")
assembly_steps.add_edge("Install engines", "Paint airplane")

# Function to print dependencies
def print_dependencies(graph):
    for step in graph:
        print(f"Step: {step}, Depends on: {list(graph.predecessors(step))}")

# Print the dependencies
print_dependencies(assembly_steps)
