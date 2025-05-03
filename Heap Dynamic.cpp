#include <iostream>
using namespace std;

class HeapDynamic {
    int* arr;
    int size, capacity;
public:
    HeapDynamic() : size(0), capacity(2) { arr = new int[capacity]; }
    void insert(int val) {
        if(size == capacity) { capacity *= 2; int* newArr = new int[capacity]; memcpy(newArr, arr, size * sizeof(int)); delete[] arr; arr = newArr; }
        arr[size++] = val;
    }
    int get(int idx) { return (idx < size) ? arr[idx] : -1; }
    ~HeapDynamic() { delete[] arr; }
};

int main() {
    HeapDynamic arr;
    arr.insert(10); arr.insert(20); arr.insert(30);
    cout << "0: " << arr.get(0) << ", 1: " << arr.get(1) << endl;
    return 0;
}
