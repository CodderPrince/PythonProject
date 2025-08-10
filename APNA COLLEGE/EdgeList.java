import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class EdgeList {

    // Edge class to represent an edge with source, destination, and weight
    static class Edge {
        int src;
        int dest;
        int wt;

        public Edge(int src, int dest, int wt) {
            this.src = src;
            this.dest = dest;
            this.wt = wt;
        }
    }

    // Method to create the edge list
    public static ArrayList<Edge> createEdgeList() {
        ArrayList<Edge> edges = new ArrayList<>();

        // Manually adding edges
        edges.add(new Edge(0, 2, 2));  // Edge from vertex 0 to vertex 2 with weight 2
        edges.add(new Edge(1, 2, 10)); // Edge from vertex 1 to vertex 2 with weight 10
        edges.add(new Edge(1, 3, 0));  // Edge from vertex 1 to vertex 3 with weight 0
        edges.add(new Edge(2, 3, -1)); // Edge from vertex 2 to vertex 3 with weight -1

        return edges;
    }

    // Method to print the edge list
    public static void printEdgeList(ArrayList<Edge> edges) {
        for (Edge edge : edges) {
            System.out.println("Source: " + edge.src + ", Destination: " + edge.dest + ", Weight: " + edge.wt);
        }
    }

    public static void main(String[] args) {
        // Create the edge list
        ArrayList<Edge> edges = createEdgeList();

        // Print the edge list before sorting
        System.out.println("Edge List (Before Sorting):");
        printEdgeList(edges);

        // Sort the edge list in ascending order based on the weight of the edges
        Collections.sort(edges, new Comparator<Edge>() {
            @Override
            public int compare(Edge e1, Edge e2) {
                return Integer.compare(e1.wt, e2.wt); // Sorting based on weight
            }
        });

        // Print the edge list after sorting
        System.out.println("\nSorted Edge List (After Sorting):");
        printEdgeList(edges);
    }
}
 
