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
	// 임시로 사용할 큐를 선언. 
	// Dequeue를 받을 변수 선언
	QueType<ItemType> temp_queue;
	int item;

	while (!queue.IsEmpty()) {

		//Dequeue
		queue.Dequeue(item);

		if (item == oldItem) { //dequeue의 결과가 oldItem과 같거나 다른 경우 구분
			temp_queue.Enqueue(newItem);
		}
		else {
			temp_queue.Enqueue(item);
		}
	}
	while (!temp_queue.IsEmpty()) {
		// temp_queue의 내용을 queue로 복원.
		temp_queue.Dequeue(item);
		queue.Enqueue(item);
	}
}