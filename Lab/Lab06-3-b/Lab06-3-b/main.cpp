#include <iostream>
using namespace std;
#include "SortedType.h"

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

	list_a.MergeLists(list_b, result);

	ItemType item;
	int length;
	length = result.LengthIs();
	result.ResetList();
	for (int i = 0; i < length; i++) {
		result.GetNextItem(item);
		cout << item << endl;
	}
	
}