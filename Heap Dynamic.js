class HeapDynamic {
    constructor() { this.arr = []; this.capacity = 2; }
    insert(val) {
        if (this.arr.length === this.capacity) this.capacity *= 2;
        this.arr.push(val);
    }
    get(idx) { return (idx < this.arr.length) ? this.arr[idx] : -1; }
}

const arr = new HeapDynamic();
arr.insert(10); arr.insert(20); arr.insert(30);
console.log("0:", arr.get(0), "1:", arr.get(1));
