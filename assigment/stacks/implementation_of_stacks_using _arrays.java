public class MyStack {
    int[] stack = new int[100];
    int top = -1;

    public void push(int x) {
        if (top < 99) { // Fix: top should be < 99 since index max is 99
            stack[++top] = x;
        } else {
            System.out.println("Stack overflow");
        }
    }

    public int pop() {
        int temp = -1;
        if (top > -1) {
            temp = stack[top];
            top--;
        } else {
            System.out.println("Stack underflow");
        }
        return temp;
    }

    public static void main(String[] args) {
        MyStack s = new MyStack();

        // Push elements to stack
        s.push(10);
        s.push(20);
        s.push(30);

        // Pop elements from stack and print
        System.out.println("Popped: " + s.pop()); // 30
        System.out.println("Popped: " + s.pop()); // 20
        System.out.println("Popped: " + s.pop()); // 10
        System.out.println("Popped: " + s.pop()); // Stack underflow, -1
    }
}
