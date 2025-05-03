a) Fixed Stack Dynamic (C++ & JavaScript)
Description:
This class implements a stack with a fixed size. A stack is a data structure that follows the Last In, First Out (LIFO) principle. The fixed stack can hold a maximum of N elements, and once it’s full, it will not accept new elements until space is freed by popping elements.

How it works:
Push operation adds an element to the top of the stack if the stack isn’t full.

Pop operation removes and returns the element from the top of the stack if it’s not empty.

If Push exceeds the fixed size, it returns a "Stack Overflow" message.

If Pop is called on an empty stack, it returns a "Stack Underflow" message.

b) Stack Dynamic (C++ & JavaScript)
Description:
This implementation of a dynamic stack allows you to add elements to the stack without any size limit. As elements are pushed, the stack grows dynamically to accommodate new items. The vector in C++ or the array in JavaScript expands automatically as more elements are added.

How it works:
Push operation adds an element to the stack. No explicit size limit is enforced.

Pop operation removes and returns the top element.

The stack automatically resizes when more space is needed (in C++, using vector, in JS, array.push grows dynamically).


c) Fixed Heap Dynamic (C++ & JavaScript)
Description:
A Fixed Heap Dynamic array is an array of a fixed size stored on the heap. The size is allocated during initialization, but data can be inserted at specific indices, allowing for easy access to elements. This array doesn’t resize dynamically, so it’s suitable when the number of elements is known and unlikely to change.

How it works:
Set operation assigns a value to a specific index of the array.

Get operation retrieves the value at a given index.

The array uses heap memory for allocation (new in C++, and an array in JS).


d) Heap Dynamic (C++ & JavaScript)
Description:
A Heap Dynamic array is an array whose size dynamically increases as more elements are inserted. Initially, the array might start with a small capacity, but as elements are inserted, it automatically resizes itself. This allows for a flexible structure that adjusts to the number of elements.

How it works:
Insert operation adds an element to the end of the array. If the current capacity is full, it doubles the capacity of the array.

Get operation retrieves the value at a specified index.

The resizing happens automatically when the array reaches its capacity limit.


Summary of Working for Each Data Structure:
Fixed Stack Dynamic: A stack with a fixed maximum size. It doesn’t grow beyond the initial size and operates on a LIFO basis.

Push and Pop are restricted by the fixed size.

Stack Dynamic: A stack that grows dynamically as elements are pushed. It allows unlimited elements to be added (up to memory constraints) and operates on LIFO.

Push and Pop are performed as long as there’s available memory.

Fixed Heap Dynamic: A fixed-size array stored in heap memory. The size is set during initialization, and elements can be set at specific indices.

Set assigns values to specific indices, and Get retrieves them.

Heap Dynamic: A dynamic array that grows automatically as more elements are inserted. The array resizes when it reaches its capacity.

Insert adds elements, and Get retrieves elements. It automatically resizes when necessary.

Why Use Each Structure?
Fixed Stack Dynamic: Use when you know the maximum size of the stack in advance, and you don't need resizing during the program.

Stack Dynamic: Ideal when you don’t know the maximum size of the stack or when the stack can grow dynamically as you push and pop elements.

Fixed Heap Dynamic: Use when you need a fixed-size array stored in heap memory and want direct index access.

Heap Dynamic: Best used when the number of elements is unknown or may change during runtime, and you need a flexible array that grows automatically.
