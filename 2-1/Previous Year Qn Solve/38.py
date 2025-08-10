import heapq

def dijkstra(graph, start):
    # Priority queue to store (cost, node)
    pq = [(0, start)]
    # Dictionary to store the shortest distance to each node
    shortest_distances = {start: 0}
    # Set to track visited nodes
    visited = set()

    while pq:
        # Pop the node with the smallest distance
        current_distance, current_node = heapq.heappop(pq)
        
        if current_node in visited:
            continue
        
        visited.add(current_node)
        
        # Check neighbors of the current node
        for neighbor, weight in graph[current_node].items():
            distance = current_distance + weight
            
            # If the new distance is shorter, update the shortest distance and push to the PQ
            if neighbor not in shortest_distances or distance < shortest_distances[neighbor]:
                shortest_distances[neighbor] = distance
                heapq.heappush(pq, (distance, neighbor))

    return shortest_distances

# Example graph represented as an adjacency list
graph = {
    'A': {'B': 1, 'C': 4},
    'B': {'A': 1, 'C': 2, 'D': 5},
    'C': {'A': 4, 'B': 2, 'D': 1},
    'D': {'B': 5, 'C': 1}
}

# Find shortest paths from node 'A'
shortest_paths = dijkstra(graph, 'A')
print(shortest_paths)  # Output: {'A': 0, 'B': 1, 'C': 3, 'D': 4}
