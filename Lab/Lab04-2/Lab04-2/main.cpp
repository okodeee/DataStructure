#include <iostream>
#include "MaxItem.h"
#include "StackTType.h"
using namespace std;

void stack_copy(StackType<int> stack_a, StackType<int>& stack_b);

int main()
{
	StackType<int> stack_a, stack_b;
	stack_a.Push(9);
	stack_a.Push(8);
	stack_a.Push(4);
	stack_a.Push(7);
	stack_a.Push(5);
	stack_a.Push(3);
	
	stack_copy(stack_a, stack_b);

	cout << "stack_a:" << endl;
	while (!stack_a.IsEmpty())
	{
		int result = stack_a.Top();
		stack_a.Pop();
		cout << result << endl;
	}
	cout << "stack_b:" << endl;
	while (!stack_b.IsEmpty())
	{
		int result = stack_b.Top();
		stack_b.Pop();
		cout << result << endl;
	}
}

void stack_copy(StackType<int> stack_a, StackType<int>& stack_b)
{
	StackType<int> temp;
	while (!stack_a.IsEmpty())
	{
		int value = stack_a.Top();
		stack_a.Pop();
		temp.Push(value);
	}
	while (!temp.IsEmpty())
	{
		int value = temp.Top();
		temp.Pop();
		stack_b.Push(value);
	}
}