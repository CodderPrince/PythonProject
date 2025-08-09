import java.util.*;

public class TSevenFinal {
    public static void main(String[] args) {
        // create linked list
        LinkedList<String> list = new LinkedList<String>();

        list.addFirst("md");
        list.addFirst("An");
        System.out.println(list);

        list.addLast("Nahian");
        System.out.println(list);

        // if don't use last word then by default add in last
        list.add("Prince");
        System.out.println(list);

        // size
        System.out.println(list.size());

        // print
        for (int i = 0; i < list.size(); i++) {
            System.out.print(list.get(i) + " -> ");
        }
        System.out.println("NULL");

        // delete first/remove first
        list.removeFirst();
        System.out.println(list);

        // delete last / remove last
        list.removeLast();
        System.out.println(list);

        // remove specific index
        list.remove(1);
        System.out.println(list);
    }

}
