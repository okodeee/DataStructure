#include <iostream>
using namespace std;
#include "QueType.h"

typedef int ItemType;

int main()
{
	QueType<ItemType> queue;
	queue.Enqueue(1);
	queue.Enqueue(2);
	queue.Enqueue(3);
	queue.Enqueue(4);
	queue.Enqueue(5);

	queue.ReplaceItem(2, 7);
	
	int item;

	while (!queue.IsEmpty())
	{
		queue.Dequeue(item);
		cout << item << endl;
	}
}