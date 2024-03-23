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

//Ʈ���κ��� �������� ���������� �����鼭 �� ���� ������ ī��Ʈ �Ѵ�.
//�־��� value���� ū �������� ���� ��� ��� ������ ������� �Ѵ�.
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