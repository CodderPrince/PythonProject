/*
 * 11.7
 */

import java.util.ArrayList;
import java.util.Collections;

public class ShuffleArrayList11_7 {
    // Method to shuffle the elements in the given ArrayList
    public static void shuffle(ArrayList<Integer> list) {
        // The Collections.shuffle method shuffles the list randomly
        Collections.shuffle(list);
    }

    public static void main(String[] args) {
        // Example usage
        ArrayList<Integer> list = new ArrayList<>();

        // Adding some integers to the list
        list.add(1);
        list.add(2);
        list.add(3);
        list.add(4);
        list.add(5);

        System.out.println("\nOriginal list: " + list);

        // Shuffling the list
        shuffle(list);

        System.out.println("\nShuffled list: " + list + "\n");
    }
}
