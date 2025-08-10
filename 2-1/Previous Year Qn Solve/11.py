import networkx as nx
import matplotlib.pyplot as plt

def compute_lps(pattern):
    length = 0  # length of the previous longest prefix suffix
    lps = [0] * len(pattern)
    
    # the loop calculates lps[i] for i = 1 to len(pattern)-1
    i = 1
    while i < len(pattern):
        if pattern[i] == pattern[length]:
            length += 1
            lps[i] = length
            i += 1
        else:
            if length != 0:
                length = lps[length - 1]
            else:
                lps[i] = 0
                i += 1
    return lps

def build_kmp_graph(pattern, lps):
    G = nx.DiGraph()
    n = len(pattern)
    
    # Add states
    for i in range(n + 1):
        G.add_node(i)
    
    # Add edges based on pattern
    for i in range(n):
        G.add_edge(i, i + 1, label=pattern[i])
    
    # Add edges for mismatch cases
    for i in range(1, n):
        j = lps[i - 1]
        if j != 0:
            G.add_edge(i, j, label='ε')  # ε represents epsilon transitions
    
    return G

def draw_graph(G):
    pos = nx.spring_layout(G)
    labels = nx.get_edge_attributes(G, 'label')
    nx.draw(G, pos, with_labels=True, node_size=700, node_color="lightblue", font_size=10, font_weight="bold")
    nx.draw_networkx_edge_labels(G, pos, edge_labels=labels, font_color='red')
    plt.show()

pattern = "aaaba"
lps = compute_lps(pattern)
print("LPS table:", lps)

G = build_kmp_graph(pattern, lps)
draw_graph(G)

#pip install matplotlib
#install this library in terminal