class FixedHeapDynamic {
    constructor(size) { this.arr = new Array(size); }
    set(idx, val) { if(idx < this.arr.length) this.arr[idx] = val; }
    get(idx) { return (idx < this.arr.length) ? this.arr[idx] : -1; }
}

const arr = new FixedHeapDynamic(5);
arr.set(0, 10); arr.set(1, 20);
console.log("0:", arr.get(0), "1:", arr.get(1));
