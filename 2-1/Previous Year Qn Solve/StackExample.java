class StackOverflowException extends Exception {
    public StackOverflowException(String message) {
        super(message);
    }
}

class StackUnderflowException extends Exception {
    public StackUnderflowException(String message) {
        super(message);
    }
}

class MyStack {
    private int maxSize;
    private int top;
    private int[] stackArray;

    public MyStack(int size) {
        maxSize = size;
        stackArray = new int[maxSize];
        top = -1; // Indicates an empty stack
    }

    public void push(int item) throws StackOverflowException {
        if (top == maxSize - 1) {
            throw new StackOverflowException("Stack is full!");
        } else {
            stackArray[++top] = item;
            System.out.println(item + " pushed to stack.");
        }
    }

    public int pop() throws StackUnderflowException {
        if (top == -1) {
            throw new StackUnderflowException("Stack is empty!");
        } else {
            int poppedItem = stackArray[top--];
            return poppedItem;
        }
    }
}

public class StackExample {
    public static void main(String[] args) {
        MyStack stack = new MyStack(5); 

        try {
            stack.push(10);
            stack.push(20);
            stack.push(30);
            stack.push(40);
            stack.push(50); 
            stack.push(60); // Should throw StackOverflowException

        } catch (StackOverflowException e) {
            System.out.println("Error: " + e.getMessage());
        }

        try {
            System.out.println(stack.pop() + " popped from stack.");
            System.out.println(stack.pop() + " popped from stack.");
            System.out.println(stack.pop() + " popped from stack.");
            System.out.println(stack.pop() + " popped from stack.");
            System.out.println(stack.pop() + " popped from stack.");
            stack.pop(); // Should throw StackUnderflowException

        } catch (StackUnderflowException e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}