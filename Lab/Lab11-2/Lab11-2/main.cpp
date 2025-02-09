#include <iostream>
using namespace std;
#include "PQType.h"

// x: 56, y: 42, z: 40
int main()
{
	PQType<int> pqueue(50);

	pqueue.Enqueue(56);
	pqueue.Enqueue(27);
	pqueue.Enqueue(42);
	pqueue.Enqueue(26);
	pqueue.Enqueue(15);
	pqueue.Enqueue(3);
	pqueue.Enqueue(19);
	pqueue.Enqueue(25);
	pqueue.Enqueue(24);
	pqueue.Enqueue(5);

	int x, y, z;
	pqueue.Enqueue(28);
	pqueue.Enqueue(2);
	pqueue.Enqueue(40);

	pqueue.Dequeue(x);
	pqueue.Dequeue(y);
	pqueue.Dequeue(z);

	cout << x << " " << y << " " << z << endl;

	return 0;
}