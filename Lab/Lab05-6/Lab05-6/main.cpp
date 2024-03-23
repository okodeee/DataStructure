#include <iostream>
#include "QueType.h"
using namespace std;

int main()
{
	QueType queue;

	queue.Enqueue(5);
	queue.Enqueue(4);
	queue.Enqueue(2);
	queue.Enqueue(3);
	queue.Enqueue(1);
	queue.Enqueue(8);

	int item;

	queue.MinDequeue(item);
	cout << item << endl;

	queue.Enqueue(6);

	while (!queue.IsEmpty())
	{
		queue.Dequeue(item);
		cout << item << endl;
	}

}