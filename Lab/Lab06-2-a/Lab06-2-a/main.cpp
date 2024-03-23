#include <iostream>
using namespace std;
#include "QueType.h"

template <class ItemType>
void ReplaceItem(QueType<ItemType> &queue, ItemType oldItem, ItemType newItem);

typedef int ItemType;

int main()
{
	QueType<ItemType> queue;
	queue.Enqueue(1);
	queue.Enqueue(2);
	queue.Enqueue(3);
	queue.Enqueue(4);
	queue.Enqueue(5);

	ReplaceItem(queue, 2, 7);

	int item;
	while (!queue.IsEmpty())
	{
		queue.Dequeue(item);
		cout << item << endl;
	}

}

template <class ItemType>
void ReplaceItem(QueType<ItemType> &queue, ItemType oldItem, ItemType newItem)
{
	// �ӽ÷� ����� ť�� ����. 
	// Dequeue�� ���� ���� ����
	QueType<ItemType> temp_queue;
	int item;

	while (!queue.IsEmpty()) {

		//Dequeue
		queue.Dequeue(item);

		if (item == oldItem) { //dequeue�� ����� oldItem�� ���ų� �ٸ� ��� ����
			temp_queue.Enqueue(newItem);
		}
		else {
			temp_queue.Enqueue(item);
		}
	}
	while (!temp_queue.IsEmpty()) {
		// temp_queue�� ������ queue�� ����.
		temp_queue.Dequeue(item);
		queue.Enqueue(item);
	}
}