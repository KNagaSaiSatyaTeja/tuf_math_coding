public class MyQueue {

    int front, rear;
    int arr[] = new int[100005];

    MyQueue() {
        front = 0;
        rear = 0;
    }

    // Function to push an element x in a queue.
    void push(int x) {
        arr[rear++] = x;
    }

    // Function to pop an element from queue and return that element.
    int pop() {
        if (front >= rear) {
            return -1;
        }
        return arr[front++];
    }

    public static void main(String[] args) {
        MyQueue q = new MyQueue();

        // Push elements into the queue
        q.push(5);
        q.push(10);
        q.push(15);

        // Pop elements from the queue and print
        System.out.println("Popped: " + q.pop()); // 5
        System.out.println("Popped: " + q.pop()); // 10
        System.out.println("Popped: " + q.pop()); // 15
        System.out.println("Popped: " + q.pop()); // -1 (queue is empty)
    }
}
