#include <iostream>
using namespace std;
#include "SortedType.h"

template <class ItemType>
void MergeLists(SortedType<ItemType> &l_a, SortedType<ItemType> &l_b, SortedType<ItemType> &result);

typedef int ItemType;
int main()
{
	SortedType<ItemType> list_a;
	SortedType<ItemType> list_b;
	SortedType<ItemType> result;

	list_a.InsertItem(1);
	list_a.InsertItem(3);
	list_a.InsertItem(5);
	list_a.InsertItem(7);
	list_a.InsertItem(9);

	list_b.InsertItem(2);
	list_b.InsertItem(4);
	list_b.InsertItem(6);
	list_b.InsertItem(8);
	list_b.InsertItem(10);

	MergeLists(list_a, list_b, result);

	ItemType item;
	int length;
	result.ResetList();
	length = result.LengthIs();
	for (int i = 0; i < length; i++) {
		result.GetNextItem(item);
		cout << item << endl;
	}
}

template <class ItemType>
void MergeLists(SortedType<ItemType> &l_a, SortedType<ItemType> &l_b, SortedType<ItemType> &result)
{
	// l_a ����Ʈ�� �����۵��� result�� ����
	// l_b ����Ʈ�� �����۵��� result�� ����
	// l_a, l_b ����Ʈ�� �����۵��� ResetList()�� GetNextItem()�� ������ iterator�� ����Ͽ� ȹ��
	ItemType item;
	int length;

	l_a.ResetList();
	length = l_a.LengthIs();
	for (int i = 0; i < length; i++) {
		l_a.GetNextItem(item);
		result.InsertItem(item);
	}

	l_b.ResetList();
	length = l_b.LengthIs();
	for (int i = 0; i < length; i++) {
		l_b.GetNextItem(item);
		result.InsertItem(item);
	}
}