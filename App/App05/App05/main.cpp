#include <iostream>
#include "QueType.h"
using namespace std;

int main()
{
	QueType queue(1000);
	QueType throwout(1000);

	int num;
	cin >> num;
	
	for (int i = 1; i <= num; i++)
	{
		queue.Enqueue(i);
	}

	int item;

	while (true)
	{
		queue.Dequeue(item);
		throwout.Enqueue(item);
		if (queue.IsEmpty())
			break;
		queue.Dequeue(item);
		queue.Enqueue(item);
	}

	while (!throwout.IsEmpty())
	{
		throwout.Dequeue(item);
		cout << item << ' ';
	}
	cout << endl;
}