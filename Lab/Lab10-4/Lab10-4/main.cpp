#include <iostream>
using namespace std;
#include "TreeType.h"


int Smaller(TreeType tree, int value);

int main()
{
	TreeType example;

	example.InsertItem('k');
	example.InsertItem('f');
	example.InsertItem('o');
	example.InsertItem('c');
	example.InsertItem('g');
	example.InsertItem('p');
	example.InsertItem('a');

	cout << Smaller(example, 'g') << endl;

	return 0;
}

//트리로부터 아이템을 순차적으로 얻으면서 그 값의 개수를 카운트 한다.
//주어진 value보다 큰 아이템을 얻을 경우 즉시 루프를 벋어나도록 한다.
int Smaller(TreeType tree, int value)
{
	ItemType item;
	bool finished = false;
	int count = 0;

	tree.ResetTree(IN_ORDER);

	do {
		tree.GetNextItem(item, IN_ORDER, finished);

		if (item < value)
			count++;
		else
			finished = true;
	} while (!finished);

	return count;
}