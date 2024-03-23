#include "QueType.h"

QueType::QueType(int max)
// Parameterized class constructor
// Post: maxQue, front, and rear have been initialized.
//       The array to hold the queue elements has been dynamically
//       allocated.
{
  maxQue = max;
  front = maxQue - 1;
  rear = maxQue - 1;
  minimum_pos = maxQue - 1;
  items = new ItemType[maxQue];
  length = 0;
}
QueType::QueType()          // Default class constructor
// Post: maxQue, front, and rear have been initialized.
//       The array to hold the queue elements has been dynamically
//       allocated.
{
  maxQue = 500;
  front = maxQue - 1;
  rear = maxQue - 1;
  minimum_pos = maxQue - 1;
  items = new ItemType[maxQue];
  length = 0;
}
QueType::~QueType()         // Class destructor
{
  delete [] items;
}

void QueType::MakeEmpty()
// Post: front and rear have been reset to the empty state.
{
  front = maxQue - 1;
  rear = maxQue - 1;
  minimum_pos = maxQue - 1;
  length = 0;
}

bool QueType::IsEmpty() const
// Returns true if the queue is empty; false otherwise.
{
	return (length == 0);
}

bool QueType::IsFull() const
// Returns true if the queue is full; false otherwise.
{
	return (length == maxQue);
}

void QueType::Enqueue(ItemType newItem)
// Post: If (queue is not full) newItem is at the rear of the queue;
//       otherwise a FullQueue exception is thrown.  
{
  if (IsFull())
    throw FullQueue();
  else
  {
	  bool work = false;
	  int cur = (front + 1) % maxQue;
	  while (cur == (rear + 1) % maxQue)
	  {
		  if (items[cur] == -1)
		  {
			  items[cur] = newItem;
			  if (items[minimum_pos] > newItem)
				  minimum_pos = cur;
			  length++;
			  work == true;
		  }
	  }

	  if (!work)
	  {
		  rear = (rear + 1) % maxQue;
		  items[rear] = newItem;
		  if (length == 0)
			  minimum_pos = rear;
		  else if (items[minimum_pos] > newItem)
			  minimum_pos = rear;
		  length++;
	  }
  }
}

void QueType::Dequeue(ItemType& item)
// Post: If (queue is not empty) the front of the queue has been 
//       removed and a copy returned in item; 
//       othersiwe a EmptyQueue exception has been thrown.
{
  if (IsEmpty())
    throw EmptyQueue();
  else
  {
    front = (front + 1) % maxQue;
	while (items[front] == -1)
		front = (front + 1) % maxQue;
    item = items[front];
	if (front = minimum_pos)
	{
		minimum_pos = front + 1;
		int cur = (front + 1) % maxQue;
		while (cur == (rear + 1) % maxQue)
		{
			if (items[cur] > 0 && (items[cur] < items[minimum_pos]))
				minimum_pos = cur;
			cur++;
		}
	}
	length--;
  }
}

void QueType::MinDequeue(ItemType& item)
{
	if (IsEmpty())
		throw EmptyQueue();
	else
	{
		item = items[minimum_pos];
		items[minimum_pos] = -1;
		minimum_pos = front + 1;
		int cur = (front + 1) % maxQue;
		while (cur == (rear + 1) % maxQue)
		{
			if (items[cur] > 0 && (items[cur] < items[minimum_pos]))
				minimum_pos = cur;
			cur++;
		}
		length--;
	}
}
