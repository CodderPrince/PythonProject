import java.util.ArrayList;
import java.util.*;

public class TwentyFive {
    public static void main(String[] args) {

        ArrayList<Integer> list = new ArrayList<>();

        // add elements
        list.add(1);
        list.add(3);
        list.add(0);
        System.out.println(list);// [1,3,0]

        // get elements
        int element = list.get(0);
        System.out.println(element);// 1

        // add elements in between
        list.add(1, 5);
        System.out.println(list);

        // set or replace element
        list.set(2, 10);
        System.out.println(list);

        //remove or delete element
        list.remove(2);
        System.out.println(list);

        //size
        int size = list.size();
        System.out.println(size);

        //sorting
        Collections.sort(list);
        System.out.println(list);
    }

}
