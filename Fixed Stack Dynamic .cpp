#include <iostream>
using namespace std;

class FixedStackDynamic {
    int* stack;
    int top, capacity;
public:
    FixedStackDynamic(int size) : capacity(size), top(-1) {
        stack = new int[capacity];
    }
    void push(int val) { if(top < capacity - 1) stack[++top] = val; }
    int pop() { return (top >= 0) ? stack[top--] : -1; }
    ~FixedStackDynamic() { delete[] stack; }
};

int main() {
    FixedStackDynamic stack(5);
    stack.push(10); stack.push(20);
    cout << "Popped: " << stack.pop() << endl;
    return 0;
}
