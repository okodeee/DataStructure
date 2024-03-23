#include <iostream>
#include "QueType.h"
using namespace std;

void ReplaceItem(QueType& queue, int oldItem, int newItem);

int main()
{
	QueType queue;

	queue.Enqueue(2);
	queue.Enqueue(6);
	queue.Enqueue(7);
	queue.Enqueue(4);
	queue.Enqueue(5);
	queue.Enqueue(6);
	queue.Enqueue(10);
	queue.Enqueue(15);
	queue.Enqueue(6);

	ReplaceItem(queue, 6, 20);

	ItemType item;
	while (!queue.IsEmpty())
	{
		queue.Dequeue(item);
		cout << item << endl;
	}
}

void ReplaceItem(QueType& queue, int oldItem, int newItem)
{
	QueType tempQue;
	int item;

	while (!queue.IsEmpty())
	{
		queue.Dequeue(item);
		if (oldItem == item)
			tempQue.Enqueue(newItem);
		else
			tempQue.Enqueue(item);
	}
	while (!tempQue.IsEmpty())
	{
		tempQue.Dequeue(item);
		queue.Enqueue(item);
	}
}