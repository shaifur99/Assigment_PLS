class FixedStackDynamic {
    constructor(size) { this.capacity = size; this.stack = []; }
    push(val) { if(this.stack.length < this.capacity) this.stack.push(val); }
    pop() { return this.stack.length ? this.stack.pop() : -1; }
}

const stack = new FixedStackDynamic(5);
stack.push(10); stack.push(20);
console.log("Popped:", stack.pop());
