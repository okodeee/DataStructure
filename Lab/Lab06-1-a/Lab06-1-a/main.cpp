#include <iostream>
#include "StackType.h"
using namespace std;

void ReplaceItem(StackType &stack, ItemType oldItem, ItemType newItem);

int main()
{
	StackType stack;
	stack.Push(1);
	stack.Push(2);
	stack.Push(3);
	stack.Push(4);
	stack.Push(5);

	ReplaceItem(stack, 2, 7);

	int temp;
	while (!stack.IsEmpty())
	{
		temp = stack.Top();
		stack.Pop();
		cout << temp << endl;
	}

}

void ReplaceItem(StackType &stack, ItemType oldItem, ItemType newItem)
{
	StackType temp_stack; //백업용 스택
	ItemType temp_Item; // top을 받는 ItemType
	while (!stack.IsEmpty()) {
		//Top,Pop을 사용
		temp_Item = stack.Top();
		stack.Pop();
		if (temp_Item == oldItem)
		{ //top의 결과가 oldItem과 같거나 다른 경우 구분
			temp_stack.Push(newItem);
		}
		else
		{
			temp_stack.Push(temp_Item);
		}
	}
	while (!temp_stack.IsEmpty()) {
		//temp_stack의 내용을 stack에 복원.
		temp_Item = temp_stack.Top();
		temp_stack.Pop();
		stack.Push(temp_Item);
	}
}