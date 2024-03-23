#include <iostream>
#include "StackType.h"
using namespace std;

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

	stack.ReplaceItem(3, 5);

	while (!stack.IsEmpty())
	{
		ItemType item = stack.Top();
		stack.Pop();
		cout << "Item: " << item << endl;
	}
	return 0;
}