#include <iostream>
#include "QueType.h"
using namespace std;

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

	cout << queue1.Identical(queue2) << endl;
}