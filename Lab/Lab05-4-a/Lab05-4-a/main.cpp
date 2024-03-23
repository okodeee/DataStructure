#include <iostream>
#include "QueType.h"
using namespace std;

int Length(QueType& queue);

int main()
{
	QueType queue;

	queue.Enqueue(7);
	queue.Enqueue(4);
	queue.Enqueue(5);
	queue.Enqueue(6);
	queue.Enqueue(9);

	cout << Length(queue) << endl;

}

int Length(QueType& queue)
{
	QueType temp;
	int item;
	int length = 0;

	while (!queue.IsEmpty())
	{
		queue.Dequeue(item);
		length++;
		temp.Enqueue(item);
	}

	while (!temp.IsEmpty())
	{
		temp.Dequeue(item);
		queue.Enqueue(item);
	}

	return length;
}