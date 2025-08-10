#include <iostream>
#include <stack>
#include <queue>

using namespace std;

// Stack Implementation
void stackExample()
{
    stack<int> myStack;

    // Push elements into the stack
    myStack.push(5);
    myStack.push(10);
    myStack.push(15);

    // Print the top element of the stack
    cout << "Top element of the stack: " << myStack.top() << endl;

    // Pop elements from the stack
    myStack.pop();

    // Print the top element of the stack after popping
    cout << "Top element of the stack after popping: " << myStack.top() << endl;

    // Check if the stack is empty
    cout << "Is the stack empty? " << (myStack.empty() ? "Yes" : "No") << endl;
}

// Queue Implementation
void queueExample()
{
    queue<int> myQueue;

    // Enqueue elements into the queue
    myQueue.push(5);
    myQueue.push(10);
    myQueue.push(15);

    // Print the front element of the queue
    cout << "Front element of the queue: " << myQueue.front() << endl;

    // Dequeue element from the queue
    myQueue.pop();

    // Print the front element of the queue after dequeue
    cout << "Front element of the queue after dequeue: " << myQueue.front() << endl;

    // Check if the queue is empty
    cout << "Is the queue empty? " << (myQueue.empty() ? "Yes" : "No") << endl;
}

int main()
{
    cout << "Stack Example:" << endl;
    stackExample();

    cout << "\nQueue Example:" << endl;
    queueExample();

    return 0;
}