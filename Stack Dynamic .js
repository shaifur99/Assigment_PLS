class StackDynamic {
    constructor() { this.stack = []; }
    push(val) { this.stack.push(val); }
    pop() { return this.stack.length ? this.stack.pop() : -1; }
}

const stack = new StackDynamic();
stack.push(10); stack.push(20);
console.log("Popped:", stack.pop());
