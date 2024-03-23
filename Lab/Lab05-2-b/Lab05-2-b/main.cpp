#include <iostream>
#include "QueType.h"
using namespace std;

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

	queue.ReplaceItem(6, 20);

	int item;
	while (!queue.IsEmpty())
	{
		queue.Dequeue(item);
		cout << item << endl;
	}
}