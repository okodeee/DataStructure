#include <iostream>
#include "QueType.h"
using namespace std;

int main()
{
	QueType queue;

	ItemType item = 1;
	while (item <= 10)
	{
		cout << item << endl;
		queue.Enqueue(item);
		item++;
	}
	
	while (!queue.IsEmpty())
	{
		queue.Dequeue(item);
		cout << item << endl;
	}
}