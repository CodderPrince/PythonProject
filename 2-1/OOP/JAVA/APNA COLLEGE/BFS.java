import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;

public class BFS {
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
        /*
         * Initializing all indices of the graph array with an empty ArrayList.
         * At this stage, all entries are 'null', so we assign an empty ArrayList at each index.
         * This ensures the graph array is ready to hold the edges.
         */
        for (int i = 0; i < graph.length; i++) {
            graph[i] = new ArrayList<>(); // Initialize an empty list for each vertex
        }

        // Adding edges to represent the graph structure
        graph[0].add(new Edge(0, 1));
        graph[0].add(new Edge(0, 2));

        graph[1].add(new Edge(1, 0));
        graph[1].add(new Edge(1, 3));

        graph[2].add(new Edge(2, 0));
        graph[2].add(new Edge(2, 4));

        graph[3].add(new Edge(3, 1));
        graph[3].add(new Edge(3, 4));
        graph[3].add(new Edge(3, 5));

        graph[4].add(new Edge(4, 2));
        graph[4].add(new Edge(4, 3));
        graph[4].add(new Edge(4, 5));

        graph[5].add(new Edge(5, 3));
        graph[5].add(new Edge(5, 4));
        graph[5].add(new Edge(5, 6));

        graph[6].add(new Edge(6, 5));
    }

    // BFS function to perform a Breadth-First Search
    public static void bfs(ArrayList<Edge> graph[], int V) {
        // Create a queue for BFS
        Queue<Integer> q = new LinkedList<>();

        // Create a visited boolean array to keep track of visited nodes
        boolean vis[] = new boolean[V];
        // By default, all indexes are false, meaning no node is visited yet

        // Start BFS from vertex 0
        q.add(0);

        // Run the BFS loop while the queue is not empty
        System.out.print("After BFS: ");
        while (!q.isEmpty()) {
            // Remove the current node from the queue
            int curr = q.remove();

            // Check if the node has been visited or not
            if (!vis[curr]) {
                // Step 1: Print the current node
                System.out.print(curr + " ");  // Debugging note: changed from println to print for better BFS output

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
            1-----3
           /      | \
          0       |   5 --- 6
           \      |  /
            2-----4 /         
         */

        // Array of ArrayLists to represent the graph
        ArrayList<Edge> graph[] = new ArrayList[V];

        // Call the method to create the graph with the given edges
        createGraph(graph);

        // Call the BFS function to traverse the graph starting from vertex 0
        bfs(graph, V);
        System.out.println();  // For better formatting in output
    }
}
