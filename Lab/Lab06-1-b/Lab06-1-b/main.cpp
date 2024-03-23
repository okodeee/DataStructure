#include <iostream>
#include "StackType.h"
using namespace std;

int main()
{
	StackType stack;
	stack.Push(1);
	stack.Push(2);
	stack.Push(3);
	stack.Push(4);
	stack.Push(5);

	stack.ReplaceItem(2, 7);

	int temp;
	while (!stack.IsEmpty())
	{
		temp = stack.Top();
		stack.Pop();
		cout << temp << endl;
	}
}