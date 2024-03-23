#include <iostream>
using namespace std;
#include "UnsortedType.h"

template <class ItemType>
void MergeLists(UnsortedType<ItemType> &l_a, UnsortedType<ItemType> &l_b, UnsortedType<ItemType> &result);

typedef int ItemType;

int main()
{
	UnsortedType<ItemType> list_a;
	UnsortedType<ItemType> list_b;
	UnsortedType<ItemType> result;

	list_a.InsertItem(1);
	list_a.InsertItem(6);
	list_a.InsertItem(5);
	list_a.InsertItem(2);
	list_a.InsertItem(3);

	list_b.InsertItem(10);
	list_b.InsertItem(8);
	list_b.InsertItem(9);
	list_b.InsertItem(4);
	list_b.InsertItem(7);

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
void MergeLists(UnsortedType<ItemType> &l_a, UnsortedType<ItemType> &l_b, UnsortedType<ItemType> &result)
{
	ItemType item1, item2;
	int length1, length2;

	l_a.ResetList();
	length1 = l_a.LengthIs();
	for (int i = 0; i < length1; i++) {
		l_a.GetNextItem(item1);
		result.InsertItem(item1);
	}

	l_b.ResetList();
	length2 = l_b.LengthIs();
	for (int i = 0; i < length2; i++) {
		l_b.GetNextItem(item2);
		result.InsertItem(item2);
	}
}
