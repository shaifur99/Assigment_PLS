#include <iostream>
using namespace std;

class FixedHeapDynamic {
    int* arr;
    int size;
public:
    FixedHeapDynamic(int s) : size(s) { arr = new int[size]; }
    void set(int idx, int val) { if(idx < size) arr[idx] = val; }
    int get(int idx) { return (idx < size) ? arr[idx] : -1; }
    ~FixedHeapDynamic() { delete[] arr; }
};

int main() {
    FixedHeapDynamic arr(5);
    arr.set(0, 10); arr.set(1, 20);
    cout << "0: " << arr.get(0) << ", 1: " << arr.get(1) << endl;
    return 0;
}
