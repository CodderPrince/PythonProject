
import java.util.HashSet;
import java.util.Iterator;

public class hashing {

    public static void main(String[] args) {
        //creating HashSet
        HashSet<Integer> set = new HashSet<>();
        //ArrayList<Integer> list = new ArrayList<>();

        //insert / add
        set.add(1);
        set.add(2);
        set.add(9);
        set.add(5);
        set.add(3);
        set.add(1);
        set.add(7);

        //size
        System.out.println("Size of set: " + set.size());

        //print all elements
        System.out.println("Print all elements: " + set);
        /*
         * HashSet is a unordered data set. There is no guarrantee that the order
         * will remain constant over time.
         * Sometimes it's print ascending order sorting, sometimes it's print
         * random order sorting, etc.
         */

        //search or contains
        if (set.contains(1)) {
            System.out.println(("Set contains 1"));
        }
        if (!set.contains(14)) {
            System.out.println("14 doesn't exist in set");
        }
        if (set.contains(6)) {
            System.out.println("Set contains 6");
        } else {
            System.out.println("In set doesn't exist 6");
        }

        //delete or remove
        set.remove(5);
        //verify
        if (!set.contains(5)) {
            System.out.println("Successfully removed 5");
        }

        ///Iterator
        Iterator it = set.iterator();

        //while loop untill returns false
        System.out.print("Print full set by iterator: ");
        while (it.hasNext()) {
            System.out.print(it.next() + " ");
        }

    }

}
