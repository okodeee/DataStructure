const int MAX_ITEMS = 200;

#include <iostream>
using namespace std;

class FullStack
{};

class DoubleStack
{
public:

	DoubleStack()
		: top_big(200), top_small(-1) {};
	bool IsFull() const;
	void Push(int newItem);
	void Print();

private:
	int top_small;
	int top_big;
	int items[MAX_ITEMS];
};

bool DoubleStack::IsFull() const
{
	return (top_big - top_small == 1);
}

void DoubleStack::Push(int newItem)
{
	if (IsFull())
		throw FullStack();
	if (newItem <= 1000)
	{
		top_small++;
		items[top_small] = newItem;
	}
	else
	{
		top_big--;
		items[top_big] = newItem;
	}
}

void DoubleStack::Print()
{
	cout << "첫 번째 스택:" << endl;
	while (top_small != -1)
	{
		cout << items[top_small] << endl;
		top_small--;
	}
	cout << "두 번째 스택:" << endl;
	while (top_big != 200)
	{
		cout << items[top_big] << endl;
		top_big++;
	}
}

int main() {
	DoubleStack stack;
	stack.Push(1);
	stack.Push(2);
	stack.Push(3);
	stack.Push(4);
	stack.Push(1003);
	stack.Push(1004);
	stack.Push(1005);

	stack.Print();

	return 0;
}