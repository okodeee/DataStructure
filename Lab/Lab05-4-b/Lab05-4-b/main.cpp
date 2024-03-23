#include <iostream>
#include "QueType.h"
using namespace std;

int main()
{
	QueType queue;

	queue.Enqueue(7);
	queue.Enqueue(4);
	queue.Enqueue(5);
	queue.Enqueue(6);
	queue.Enqueue(9);

	cout << queue.Length() << endl;
}