
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

public class dIsBFS {

    // Edge class to represent a directed edge from a source to a destination
    static class Edge {

        int src;  // Source vertex
        int dest; // Destination vertex

        // Constructor to initialize an edge with source and destination
        public Edge(int s, int d) {
            this.src = s;
            this.dest = d;
        }
    }

    // Method to create the graph
    public static void createGraph(ArrayList<Edge>[] graph) {
        // Initialize all vertices with an empty list
        for (int i = 0; i < graph.length; i++) {
            graph[i] = new ArrayList<>(); // Initialize an empty list for each vertex
        }

        // Adding edges to represent a disconnected graph
        graph[0].add(new Edge(0, 1));
        graph[0].add(new Edge(0, 2));

        graph[1].add(new Edge(1, 0));

        graph[2].add(new Edge(2, 0));

        // Second disconnected component
        graph[3].add(new Edge(3, 4));
        graph[3].add(new Edge(3, 5));

        graph[4].add(new Edge(4, 3));

        graph[5].add(new Edge(5, 3));
        graph[5].add(new Edge(5, 6));

        graph[6].add(new Edge(6, 5));
    }

    // BFS function to perform a Breadth-First Search
    public static void bfs(ArrayList<Edge> graph[], int V, boolean vis[], int start) {
        // Create a queue for BFS
        Queue<Integer> q = new LinkedList<>();

        // Start BFS from vertex start index i
        q.add(start);

        // Run the BFS loop while the queue is not empty
        while (!q.isEmpty()) {
            // Remove the current node from the queue
            int curr = q.remove();

            // Check if the node has been visited or not
            if (vis[curr] == false) {
                // Step 1: Print the current node
                System.out.print(curr + " ");  // Print the visited node

                // Step 2: Mark the current node as visited
                vis[curr] = true;

                // Step 3: Add all neighbors of the current node to the queue
                for (int i = 0; i < graph[curr].size(); i++) {
                    Edge e = graph[curr].get(i);
                    // Add the destination vertex of the current edge to the queue
                    q.add(e.dest);
                }
            }
        }
    }

    public static void main(String[] args) {
        int V = 7;  // Number of vertices

        /*
            Graph structure:
            Component 1:           Component 2:
        
             0                    3
            /  \                 /  \
            1   2                4   5
                                    /
                                    6
            
         */
        // Array of ArrayLists to represent the graph
        ArrayList<Edge> graph[] = new ArrayList[V];

        // Call the method to create the graph with the given edges
        createGraph(graph);

        // Create a visited boolean array to keep track of visited nodes
        boolean vis[] = new boolean[V];
        // By default, all indexes are false, meaning no node is visited yet

        // Print the BFS traversal result
        System.out.print("\nAfter BFS: ");
        for (int i = 0; i < V; i++) {
            if (vis[i] == false) {
                bfs(graph, V, vis, i); // Perform BFS for each disconnected component
            }
        }

        System.out.println("\n\n");  // For better formatting in output
    }
}
