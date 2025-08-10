import networkx as nx

# Create a graph
population = nx.Graph()

# Add individuals (nodes) and interactions (edges)
population.add_edge("Person1", "Person2")
population.add_edge("Person2", "Person3")
population.add_edge("Person3", "Person4")
population.add_edge("Person4", "Person1")

# Function to simulate disease spread
def simulate_disease(graph, initially_infected):
    status = {node: "S" for node in graph.nodes}  # S for susceptible
    for node in initially_infected:
        status[node] = "I"  # I for infected
    
    # One round of spreading infection
    new_infected = set()
    for node in initially_infected:
        for neighbor in graph.neighbors(node):
            if status[neighbor] == "S":
                new_infected.add(neighbor)
    
    for node in new_infected:
        status[node] = "I"
    
    return status

# Initial infected individuals
initially_infected = ["Person1"]

# Simulate disease spread
status_after_spread = simulate_disease(population, initially_infected)
print(status_after_spread)
