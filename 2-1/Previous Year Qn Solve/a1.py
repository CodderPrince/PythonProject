import networkx as nx

# Create an undirected graph for mutual friendships
social_network = nx.Graph()

# Add users (nodes)
social_network.add_node("Alice")
social_network.add_node("Bob")
social_network.add_node("Charlie")

# Add friendships (edges)
social_network.add_edge("Alice", "Bob")
social_network.add_edge("Bob", "Charlie")

# Display the graph
print("Nodes:", social_network.nodes())
print("Edges:", social_network.edges())

'''pip install networkx
install this library in terminal'''
