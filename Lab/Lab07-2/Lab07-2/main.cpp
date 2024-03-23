#include <iostream>
using namespace std;
#include "StackType.h"

int main()
{
	StackType stack;
	StackType newstack;

	stack.Push('Z');
	stack.Push('Y');
	stack.Push('X');

	newstack.Copy(stack);

	ItemType item;
	while (!newstack.IsEmpty()) {
		item = newstack.Top();
		cout << item << endl;
		newstack.Pop();
	}
}