# -Circular-Deque-Implementation-in-C-\++

verview
This project implements a Circular Deque (Double-Ended Queue) in C++ using a dynamically allocated array. The implementation supports operations to add and remove elements from both ends efficiently.

Files in the Project
Deque.h - Header file defining the Deque class with various operations.
DQtest.cpp - A test file that runs various operations on the Deque class to verify functionality.
DQarraytest.cpp - A test file specifically designed to test the [] operator for accessing and modifying elements.
Features
Enqueue (enqueue(x)) - Adds an element to the back.
Jump (jump(x)) - Adds an element to the front.
Dequeue (dequeue()) - Removes and returns the front element.
Eject (eject()) - Removes and returns the back element.
Reserve (reserve(n)) - Resizes the deque when necessary.
Clear (clear()) - Removes all elements and resets the deque.
Operator Overloading ([]) - Allows access and modification using an index.
Display (display()) - Prints the contents of the deque.
