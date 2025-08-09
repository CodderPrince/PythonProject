
import java.util.Arrays;

public class adjMatrix {

    // Method to create the graph using an adjacency matrix
    public static void createGraph(int[][] graph) {
        // Initialize the matrix with a default value for no edges (assuming a large value represents no edge)
        for (int i = 0; i < graph.length; i++) {
            Arrays.fill(graph[i], Integer.MAX_VALUE); // Initialize with infinity (or any large value)
        }

        // Set the diagonal to zero, representing no cost to travel from a vertex to itself
        for (int i = 0; i < graph.length; i++) {
            graph[i][i] = 0;
        }

        // Manually adding edges with their weights
        graph[0][2] = 2;    // Edge from vertex 0 to vertex 2 with weight 2
        graph[1][2] = 10;   // Edge from vertex 1 to vertex 2 with weight 10
        graph[1][3] = 0;    // Edge from vertex 1 to vertex 3 with weight 0
        graph[2][0] = 2;    // Edge from vertex 2 to vertex 0 with weight 2
        graph[2][1] = 10;   // Edge from vertex 2 to vertex 1 with weight 10
        graph[2][3] = -1;   // Edge from vertex 2 to vertex 3 with weight -1
        graph[3][1] = 0;    // Edge from vertex 3 to vertex 1 with weight 0
        graph[3][2] = -1;   // Edge from vertex 3 to vertex 2 with weight -1
    }

    // Method to print the adjacency matrix
    public static void printGraph(int[][] graph) {
        int vertexCount = graph.length;
        System.out.println("Adjacency Matrix:");

        for (int i = 0; i < vertexCount; i++) {
            for (int j = 0; j < vertexCount; j++) {
                if (graph[i][j] == Integer.MAX_VALUE) {
                    System.out.print("INF\t");  // Print INF for no edge
                } else {
                    System.out.print(graph[i][j] + "\t");
                }
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int vertexCount = 4;  // Define the number of vertices

        // Create an adjacency matrix for the graph
        int[][] graph = new int[vertexCount][vertexCount];

        // Call method to create the graph
        createGraph(graph);

        // Print the adjacency matrix representation of the graph
        printGraph(graph);

        // Print neighbors of vertex 2
        System.out.println("Neighbors of vertex 2:");
        for (int j = 0; j < vertexCount; j++) {
            if (graph[2][j] != Integer.MAX_VALUE && graph[2][j] != 0) {
                System.out.println("Destination: " + j + " ; Weight: " + graph[2][j]);
            }
        }
    }
} 
