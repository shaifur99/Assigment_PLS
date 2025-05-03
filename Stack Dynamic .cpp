#include <iostream>
#include <vector>
using namespace std;

class StackDynamic {
    vector<int> stack;
public:
    void push(int val) { stack.push_back(val); }
    int pop() { return stack.empty() ? -1 : stack.back(); stack.pop_back(); }
};

int main() {
    StackDynamic stack;
    stack.push(10); stack.push(20);
    cout << "Popped: " << stack.pop() << endl;
    return 0;
}
