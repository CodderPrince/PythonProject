
### 5. Finding the Shortest Path Between Two Cities on a Map


import networkx as nx

# Create a weighted graph
city_map = nx.Graph()

# Add cities (nodes) and roads (edges with weights)
city_map.add_edge("A", "B", weight=10)
city_map.add_edge("A", "C", weight=15)
city_map.add_edge("B", "D", weight=12)
city_map.add_edge("C", "D", weight=10)
city_map.add_edge("B", "E", weight=15)
city_map.add_edge("D", "E", weight=2)

# Function to find the shortest path using Dijkstra's algorithm
def shortest_path(graph, start, end):
    return nx.dijkstra_path(graph, start, end, weight='weight')

# Find the shortest path from A to E
print(shortest_path(city_map, "A", "E"))  # Output: ['A', 'B', 'D', 'E']
