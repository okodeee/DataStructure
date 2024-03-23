#include <iostream>
#include "QueType.h"
using namespace std;

bool Identical(QueType& queue1, QueType& queue2);

int main()
{
	QueType queue1;
	QueType queue2;

	queue1.Enqueue(2);
	queue1.Enqueue(6);
	queue1.Enqueue(7);
	queue1.Enqueue(4);
	queue1.Enqueue(5);
	queue1.Enqueue(6);
	queue1.Enqueue(10);
	queue1.Enqueue(15);
	queue1.Enqueue(3);

	queue2.Enqueue(2);
	queue2.Enqueue(6);
	queue2.Enqueue(7);
	queue2.Enqueue(4);
	queue2.Enqueue(5);
	queue2.Enqueue(6);
	queue2.Enqueue(12);
	queue2.Enqueue(15);
	queue2.Enqueue(3);

	cout << Identical(queue1, queue2) << endl;
}

bool Identical(QueType& queue1, QueType& queue2)
{
	QueType temp1;
	QueType temp2;
	int item1, item2;
	int count = 0;

	while (!queue1.IsEmpty())
	{
		queue1.Dequeue(item1);
		queue2.Dequeue(item2);

		if (item1 != item2)
			count++;
		temp1.Enqueue(item1);
		temp2.Enqueue(item2);
	}

	while (!temp1.IsEmpty())
	{
		temp1.Dequeue(item1);
		queue1.Enqueue(item1);
	}

	while (!temp2.IsEmpty())
	{
		temp2.Dequeue(item2);
		queue2.Enqueue(item2);
	}

	if (count == 0)
		return true;
	return false;
}