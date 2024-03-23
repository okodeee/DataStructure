#include <iostream>
#include "QueType.h"
using namespace std;

int main()
{
	QueType queue(6);

	queue.Enqueue(5);
	queue.Enqueue(6);
	queue.Enqueue(1);
	queue.Enqueue(2);
	queue.Enqueue(3);
	queue.Enqueue(4);
}