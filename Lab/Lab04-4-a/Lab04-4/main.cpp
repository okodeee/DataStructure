#include <iostream>
#include "ItemType.h"
#include "StackType.h"
using namespace std;

void ReplaceItem(StackType &st, int oldItem, int newItem);

int main()
{
	StackType stack;
	stack.Push(8);
	stack.Push(3);
	stack.Push(9);
	stack.Push(8);
	stack.Push(3);
	stack.Push(7);
	stack.Push(5);
	stack.Push(3);

	ReplaceItem(stack, 3, 5);

	while (!stack.IsEmpty())
	{
		ItemType item = stack.Top();
		stack.Pop();
		cout << "Item: " << item << endl;
	}
	return 0;
}

void ReplaceItem(StackType &st, int oldItem, int newItem)
{
	StackType temp;

	while (!st.IsEmpty())
	{
		ItemType item = st.Top();
		st.Pop();
		if (item == oldItem)
			item = newItem;
		temp.Push(item);
	}

	while (!temp.IsEmpty())
	{
		ItemType item = temp.Top();
		temp.Pop();
		st.Push(item);
	}
}