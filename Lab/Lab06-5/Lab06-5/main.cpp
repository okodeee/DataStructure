#include <iostream>
using namespace std;
#include "SortedType.h"

typedef int ItemType;

int main()
{
	SortedType<ItemType> list;

	list.InsertItem(1);
	list.InsertItem(2);
	list.InsertItem(2);
	list.InsertItem(4);
	list.InsertItem(5);

	list.DeleteItem(2);

	ItemType item;
	int length = list.LengthIs();
	list.ResetList();
	for (int i = 0; i < length; i++) {
		list.GetNextItem(item);
		cout << item << endl;
	}
}