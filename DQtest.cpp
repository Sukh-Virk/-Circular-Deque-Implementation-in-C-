#include <iostream>
#include "Deque.h"

using namespace std;
int main() {
    //first we'll create the object of the char type. And test the deque
    Deque<int> deque;




    cout << "Testing jump ";


    cout << "Jumping a single  element (1):" << endl;
    deque.jump(1);
    deque.display();
    cout << endl;
    cout << endl;
    cout << "jumping multiple elements (2-5): " << endl;

    for (int i = 2; i < 6; i++)
    {
        deque.jump(i);
    }

    cout << "display :" << endl;
    deque.display();
    cout << endl << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Testing Dequeue removing the front digit (should be 4321): " << endl;
    deque.dequeue();
    deque.display();
    cout << "removing all elements from deque through dequeue:  " << endl;

    for (int i = 0; i < 4; i++)
    {
        deque.dequeue();
    }
    cout << "display: " << endl;
    deque.display();
    deque.clear();
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Testing enque by adding a single element to the back (1) " << endl;
    deque.enqueue(1);
    deque.display();
    cout << "Testing enqueue by adding multple elements to the back (2-5): ";
    for (int i = 2; i < 6; i++)
    {
        deque.enqueue(i);
    }
    cout << "Elements should be 12345  " << endl << endl;
    cout << "display :" << endl;
    deque.display();
    cout << "------------------------------------------------------------------------------------" << endl;
    deque.display();
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Testing Eject by removing last element should be (1,2,3,4):  " << endl;
    deque.eject();
    deque.display();
    cout << "Testing to see if eject works be removing all elements: " << endl;
    for (int i = 0; i < 4; i++)
    {
        deque.eject();
    }
    deque.display();
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "Testing reserve method adding elements from 1-20 " << endl;
    for (int i = 1; i < 10; i++)
    {
        deque.enqueue(i);
    }
    for (int i = 0; i < 8; i++)
    {
        deque.jump(i);
    }
    cout << "display: " << endl;
    deque.display();
    deque.clear();
    cout << "--------------------------------------------------------------------------------" << endl;

    cout << "Testing clear method first lets add random numbers to the deque " << endl;
    deque.jump(5);
    deque.enqueue(1);
    deque.enqueue(3);
    deque.enqueue(4);
    deque.jump(1);
    deque.enqueue(3);
    deque.jump(10);
    deque.enqueue(5);
    cout << "right now our deque has: " << endl;

    deque.display();
    cout << "Now lets clear the deque and print empty deque: " << endl;
    deque.clear();
    deque.display();
    cout << "--------------------------------------------------------------------------------" << endl;

    cout << "Testing various operations in sequence: " << endl;

    for (int i = 1; i < 11; i++)
    {

        deque.jump(i);
    }
    cout << "First jump 10 elements in " << endl;
    deque.display();
    cout << "then enque next 10 elements: " << endl;
    deque.display();
    for (int i = 11; i < 21; i++)
    {
        deque.enqueue(i);
    }
    cout << "then dequeue and enqueue some random elements: " << endl;
    deque.eject();
    deque.dequeue();
    deque.eject();
    deque.dequeue();
    deque.display();
    deque.dequeue();
    deque.display();
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "removing from the front of an empty deque" << endl;
    deque.clear();
    deque.dequeue();
    deque.display();
    cout << "--------------------------------------------------------------------------------" << endl;
    cout << "removing from the back of an empty deque" << endl;
    cout << "changing element: ";
    deque.clear();
    deque.eject();
    deque.display();
    cout << "-----------------------------------------------------------------------------------" << endl;
    cout << "removing element from the front of the empty deque: " << endl;
    deque.dequeue();
    deque.display();
    cout << "-----------------------------------------------------------------------------------" << endl;
    cout << "removing element from the back of the empty deque: " << endl;
    deque.eject();
    deque.display();
    cout << "-----------------------------------------------------------------------------------" << endl;
    cout << "preforming operations on a very small deque " << endl;
    deque.clear();

    deque.enqueue(2);
    deque.jump(2);
    cout << "deque is now ";
    deque.display();
    cout << " lets add 3 items by jump then remove one ";
    deque.jump(1);
    deque.jump(2);
    deque.jump(3);
    deque.display();
    cout << "now remove one from the back ";
    deque.eject();
    cout << "deque is now" << endl;
    deque.display();
    cout << "-----------------------------------------------------------------------------------" << endl;
    cout << "one more test preforming variety of operations on the deque" << endl;
    cout << "enqueueing two elements then jumping 3 then enqueueing 2";
    deque.enqueue(1);
    deque.enqueue(2);
    deque.display();
    deque.jump(3);
    deque.jump(4);
    deque.jump(5);
    deque.display();
    deque.enqueue(1);
    deque.enqueue(1);
    deque.display();
        cout << "remove one from front";
        deque.dequeue();
        deque.display();
        cout << "add one from again ";
        deque.enqueue(1);
         deque.display();
         cout << "-----------------------------------------------------------------------------------" << endl;
         cout << "End of test for DQ";
}