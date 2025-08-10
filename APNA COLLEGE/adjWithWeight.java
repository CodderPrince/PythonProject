
import java.util.ArrayList;

public class adjWithWeight {

    // Edge class to represent a directed edge from a source to a destination
    static class Edge {

        int src;  // Source vertex
        int dest; // Destination vertex
        int wt;

        // Constructor to initialize an edge with source and destination
        public Edge(int s, int d, int w) {
            this.src = s;
            this.dest = d;
            this.wt = w;
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
        graph[0].add(new Edge(0, 2, 2));

        graph[1].add(new Edge(1, 2, 10));  // Edge from vertex 1 to vertex 2
        graph[1].add(new Edge(1, 3, 0));  // Edge from vertex 1 to vertex 3

        graph[2].add(new Edge(2, 0, 2));  // Edge from vertex 2 to vertex 0
        graph[2].add(new Edge(2, 1, 10));  // Edge from vertex 2 to vertex 1
        graph[2].add(new Edge(2, 3, -1));  // Edge from vertex 2 to vertex 3

        graph[3].add(new Edge(3, 1, 0));  // Edge from vertex 3 to vertex 1
        graph[3].add(new Edge(3, 2, -1));  // Edge from vertex 3 to vertex 2
    }

    // Method to print the graph
    public static void printGraph(ArrayList<Edge>[] graph) {
        for (int i = 0; i < graph.length; i++) {
            System.out.print("Vertex " + i + ": ");
            for (Edge edge : graph[i]) {
                System.out.print(" -> " + edge.dest);  // Print all destinations for each vertex
            }
            System.out.println();  // Move to the next line after printing all edges for a vertex
        }
    }

    public static void main(String[] args) {
        int vertexCount = 4;  // Define the number of vertices

        // Create an array of ArrayLists to represent the adjacency list of the graph
        ArrayList<Edge>[] graph = new ArrayList[vertexCount];

        // Call method to create the graph
        createGraph(graph);

        // Print the adjacency list representation of the graph
        printGraph(graph);

        //print any index value
        //print 2's neighbors
        for (int i = 0; i < graph[2].size(); i++) {
            Edge e = graph[2].get(i);
            System.out.println("Source: " + e.src + " ; Destination: " + e.dest + " ; Weight: " + e.wt);
        }
    }

}
 
