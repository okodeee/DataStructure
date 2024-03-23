#include <iostream>
#include <fstream>
using namespace std;
#include "TreeType.h"
#include "SortedType.h"


//����Ʈ�� ������ �������� �迭�� �ű� ��, �迭���� �Է� ������ ����Ͽ� Ʈ���� �Է��Ѵ�.

void AddElement(TreeType& tree, int Array[], int from, int to);
void MakeTree(TreeType &tree, SortedType<int> &list);

int main()
{
	TreeType tree;
	SortedType<int> list;

	list.InsertItem(1);
	list.InsertItem(2);
	list.InsertItem(3);
	list.InsertItem(4);
	list.InsertItem(5);
	list.InsertItem(6);
	list.InsertItem(7);

	MakeTree(tree, list);

	ofstream fout("TreePrint.txt");
	tree.Print(fout);
	fout.close();

	return 0;
}

void MakeTree(TreeType &tree, SortedType<int> &list)
{
	int length = list.LengthIs(); //����Ʈ ũ�⸦ ��´�
	int * array = new int[length]; //���� �迭 �Ҵ�
	int item_info;
	int i;

	list.ResetList();

	for (i = 0; i < length; i++)
	{
		list.GetNextItem(item_info);
		array[i] = item_info;
	}

	AddElement(tree, array, 0, length - 1);

	delete[] array; // ���� �迭 ����
}

void AddElement(TreeType& tree, int Array[], int from, int to)
{
	int mid; //�߰� ���� ����ϴ� ����
	if (from <= to) { //�Լ��� ��������
		mid = (from + to) / 2;
		tree.InsertItem(Array[mid]);
		AddElement(tree, Array, from, mid - 1);
		AddElement(tree, Array, mid + 1, to);
	}
}