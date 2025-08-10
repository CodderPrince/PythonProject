
import java.util.ArrayList;

public class ArrayListStack {

    static class Stack {

        static ArrayList<Integer> list = new ArrayList<>();

        // Check if stack is empty
        public static boolean isEmpty() {
            return list.size() == 0;
        }

        // Push an element onto the stack
        public static void push(int data) {
            list.add(data);
        }

        // Pop the top element from the stack
        public static int pop() {
            if (isEmpty()) {
                return -1;
            }
            int top = list.get(list.size() - 1);
            list.remove(list.size() - 1);  // Remove the top element
            return top;
        }

        // Peek the top element without removing it
        public static int peek() {
            if (isEmpty()) {
                return -1;
            }
            return list.get(list.size() - 1);
        }
    }

    public static void main(String[] args) {
        // No need to create an object, use class methods directly
        Stack.push(1);
        Stack.push(2);
        Stack.push(3);
        Stack.push(4);

        while (!Stack.isEmpty()) {
            System.out.println(Stack.peek());
            Stack.pop();
        }
    }

}
