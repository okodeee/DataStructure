#include <iostream>
using namespace std;
#include "UnsortedType.h"

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

	list_a.MergeLists(list_b, result);

	ItemType item;
	int length;

	result.ResetList();
	length = result.LengthIs();

	for (int i = 0; i < length; i++) {
		result.GetNextItem(item);
		cout << item << endl;
	}
}