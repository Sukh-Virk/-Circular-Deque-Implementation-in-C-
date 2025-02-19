#ifndef DEQUE_H
#define DEQUE_H

#include <iostream>
using namespace std;

template <typename Object>
class Deque
{
public:
    Deque()
    {
        theCapacity = 8;
        objects = new Object[theCapacity];
        theSize = 0;
        front = 0;
        back = 0;
    }


    ~Deque()
    {
        delete[] objects;
    }

    bool empty() const { return size() == 0; }
    int size() const { return theSize; }
    void clear() {
        delete[] objects;
        front = 0;
        back = 0;
        theSize = 0;
        theCapacity = 8;
        objects = new Object[theCapacity];
    }
    void reserve(int newCapacity) {
        int counter = 0;
        int copyAllElements = theSize;
        int position = front;
        // if new capacity is larger than hte current
        if (newCapacity > theCapacity) {
            // we create a new array so we can store transfer with the larger cap
            Object* copyA1 = new Object[newCapacity];
            // while loop which copys elements into the array
            while (counter < copyAllElements)
            {
                copyA1[counter] = objects[position];
                position++;
                position = position % theCapacity;
                counter++;

            }
            //delete old pointer for memory leak

            delete[] objects;
            // set the objects pointer to point to new array
            objects = copyA1;
            //update capacity;
            theCapacity = newCapacity;
            //reset front to the front which is 0
            front = 0;
            //reset the back to thesize which would be the back of the deque
            back = theSize;
        }
    }




    void enqueue(const Object& x)// Insert a new object at the back 
    {

        if (theSize == theCapacity) reserve(2 * theCapacity + 1);
        objects[back] = x;
        back = (back + 1) % theCapacity;
        theSize++;
    }

    void jump(const Object& x)// Insert a new object at the front 

    {
        // if needs to be resized
        if (theSize == theCapacity) reserve(2 * theCapacity + 1);
        // increment size
        theSize++;
        //front would equal front - 1 add the capacity for negative numbers then mod cap for wrap
        front = (front - 1 + theCapacity) % theCapacity;
        //set the front index to the object we send to it
        objects[front] = x;
    }

    Object dequeue()// Remove and return the object at the front 
    {
        //just incase try to acess element not in range
        if (theSize == 0)
        {
            cout << "the Deque is empty cannot remove elements ";
        }
        theSize--;
        Object temp = objects[front];
        front = (front + 1 + theCapacity) % theCapacity;
        return temp;
    }

    Object eject()// Remove and return the object at the back 
    {
        //same reason
        if (theSize == 0)
        {
            cout << "Deque is empty cannot remove elements!" << endl;
        }

        theSize--;
        Object temp = objects[back];
        back = (back - 1 + theCapacity) % theCapacity;
        return temp;
    }

    //display only shows whats
    void display() const {
        int counter = 0;
        int displayElements = front;
        int allElements = theSize;
        cout << "Front: " << front << endl;
        cout << "Back: " << back << endl;
       
        cout << "<";
        //while loop to copy elements
        while (counter < allElements)
        {
            cout << counter << "= " << objects[displayElements] << ", ";
            ++displayElements;
            displayElements = (displayElements % theCapacity);
            counter++;


        }
        cout << ">" << endl;

    }
   //display for debugging
    void ddisplay() const {
        //similar to display except show elements of the entire array
        int counter = 0;
        int showFront = front;
        int  allElements = theCapacity;
        cout << "capacity= " << theCapacity << ", size=" << theSize << ", back= " << back << ", front= " << front << endl;
        cout << "[";
        while (counter < allElements)
        {
            cout << counter << "= " << objects[showFront] << ", ";
            showFront++;
            showFront = showFront % theCapacity;
            counter++;
        }
        cout << "]";
    }

    //overloading the [] operator
    Object& operator[](int positionWanted) {
        // take in the poistion wanted we add the front value and wrap it
        int newPosition = (front + positionWanted) % theCapacity;
        return objects[newPosition];
    }




private:
    int theSize;
    int front;
    int back;
    int theCapacity;
    Object* objects;
};
#endif
