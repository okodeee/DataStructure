#include <iostream>
#include "StackType.h"
using namespace std;

int main()
{
	StackType stack;
	
	int count;
	cin >> count;

	ItemType input;
	for (int i = 0; i < count; i++)
	{
		cin >> input;
		stack.Push(input);
	}

	int result = 1;
	int high = stack.Top();
	while (!stack.IsEmpty())
	{
		if (stack.Top() > high)
		{
			result++;
			high = stack.Top();
		}
		stack.Pop();
	}

	cout << result << endl;
}