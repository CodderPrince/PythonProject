
import java.util.Stack;

public class pushAtBottom {

    public static void pushAtBot(int data, Stack<Integer> s) {
        //base case
        if (s.isEmpty()) {
            s.push(data);
            return;
        }

        //recursively
        int top = s.pop();
        pushAtBot(data, s);
        s.push(top);
    }

    public static void main(String[] args) {
        Stack<Integer> s = new Stack<>();

        s.push(1);
        s.push(2);
        s.push(3);
        pushAtBot(4, s);

        while (!s.isEmpty()) {
            System.out.println(s.peek());
            s.pop();
        }
    }

}
