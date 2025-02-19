#include "Deque.h"
#include <iostream>
using namespace std;


int main()
{
	Deque<int> d;

	cout << "I will be testing the [] operator " << endl;
	cout << "first lets create deque with elements from 1-5";
	for (int i = 1; i < 6; i++)
	{

		d.enqueue(i);
	}

	cout << not "access each element of the deque " <<endl;
	cout << "first element is " << d[0] <<endl;
	cout << "second element is " << d[1] << endl;
	cout << "third element is " << d[2] << endl;
	cout << "fourth element is " << d[3] << endl;
	cout << "fifth element is " << d[4] << endl; 
	d.display();
	cout << "-----------------------------------------------------------------------------" <<endl;
	cout << "now lets change elements of the deque using [] from 6-10" << endl;
	d[0] = 6;
	d[1] = 7;
	d[2] = 8;
	d[3] = 9;
	d[4] = 10;
	cout << "first element is " << d[0] << endl;
	cout << "second element is " << d[1] << endl;
	cout << "third element is " << d[2] << endl;
	cout << "fourth element is " << d[3] << endl;
	cout << "fifth element is " << d[4] << endl;
	d.display();
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << "now lets access and change elements of the deque after using reserve" << endl;
	cout << "we will create deque that is of size 10 elements from 1-10 using both enqueue and jump" << endl;
	d.clear();
	for (int i = 5; i < 11; i++)
	{

		d.enqueue(i);
	}
		

	d.jump(4);
	d.jump(3);
	d.jump(2);
	d.jump(1);
	d.display();

	cout << "lets acess the first element " << d[0] << endl;
	cout << "lets acess the middle element " << d[5] << endl;
	cout << "lets acess the last element " << d[9] <<endl;
	cout << "-----------------------------------------------------------------------------" <<endl;
	cout << "lets change the first element (100) " ;
	d[0] = 100;
	d[5] = 200;
	cout << "lets change the second element(200) ";
	d[9] = 300;
	cout << "lets change the third element (300) ";
	d.display();
	cout << "-----------------------------------------------------------------------------" <<endl;
	cout << "now lets try to access element in array not in the deque: " << endl;
	cout << "should be 0 or garbage value << endl";	
	cout << d[11];
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << " lastly lets prefrom various operations and them access and change elements of deque" << endl;
	d.clear();
	for (int i = 0; i < 10; i++)
	{
		d.enqueue(i);
	}
	for (int i = 0; i < 5; i++)
	{
		d.jump(i);
	}
	d.dequeue();
	d.dequeue();
	d.dequeue();
	d.eject();
	d.eject();
	cout << "deque is now " << endl;
	d.display();
	cout << endl;
	cout << "now lets access some elements" << endl;
	cout << "the first element is " << d[0];
	cout << "last the fifth element is " << d[4];
	cout << "the 8th element is " << d[8];

	cout << " now lets change the second and sixth elements to 1000 and 2000 " << endl;
	d[1] = 1000;
	d[5] = 2000;

	d.display();

		 


	




}


	