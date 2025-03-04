import plotly.graph_objects as go

# Define the labels for the nodes
labels = ["Source A", "Source B", "Source C", "Target X", "Target Y", "Target Z"]

# Define the sources and targets for the links
source = [0, 1, 0, 2, 3, 3, 4]
target = [3, 3, 4, 4, 5, 5, 5]

# Define the values of the links
values = [8, 4, 2, 8, 4, 2, 3]

# Create the Sankey diagram
fig = go.Figure(data=[go.Sankey(
    node=dict(
        pad=15,  # Padding between nodes
        thickness=20,  # Node thickness
        line=dict(color="black", width=0.5),  # Node border color and width
        label=labels  # Labels for the nodes
    ),
    link=dict(
        source=source,  # Sources for the links
        target=target,  # Targets for the links
        value=values  # Values for the links
    )
)])

# Update the layout
fig.update_layout(title_text="Basic Sankey Diagram", font_size=10)

# Show the diagram
fig.show()