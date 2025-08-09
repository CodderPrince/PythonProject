
import java.util.HashMap;
import java.util.Map; // Import necessary for using Map.Entry
import java.util.Set;

public class HashMapExample {

    public static void main(String[] args) {

        // Create a HashMap with String keys and Integer values
        HashMap<String, Integer> map = new HashMap<>();

        // Insertion of key-value pairs into the HashMap
        map.put("BD", 18);
        map.put("China", 140);
        map.put("Ind", 120);
        System.out.println("Current map: " + map);

        // Updating the value of the key "BD"
        map.put("BD", 20);
        System.out.println("After update: " + map);

        // Search for a key and get its value
        System.out.println("Value of key 'BD': " + map.get("BD"));

        // Check if a specific key exists in the HashMap
        if (map.containsKey("Ind")) {
            System.out.println("Key 'Ind' exists in the map.");
        }

        // Check if the key "Iran" exists, and print the appropriate message
        if (map.containsKey("Iran")) {
            System.out.println("Key 'Iran' exists in the map.");
        } else {
            System.out.println("Key 'Iran' does not exist in the map.");
        }

        // Iterating through the HashMap using entrySet() to get both key and value
        System.out.println("Iterating through the map:");
        for (Map.Entry<String, Integer> e : map.entrySet()) {
            System.out.println("Key: " + e.getKey() + ", Value: " + e.getValue());
        }

        // Iterating through the HashMap using keySet() to get keys and values
        Set<String> Keys = map.keySet();
        for (String key : Keys) {
            System.out.println("Key: " + key + ", Value: " + map.get(key));
        }

        // Removing the key "BD" from the HashMap
        map.remove("BD");
        System.out.println("After remove: " + map);
    }
}
