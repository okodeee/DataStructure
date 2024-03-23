#include <iostream>
using namespace std;
#include "UnsortedType.h"

typedef int ItemType;

int main()
{
	UnsortedType<ItemType> list;

	list.InsertItem(1);
	list.InsertItem(6);
	list.InsertItem(5);
	list.InsertItem(2);
	list.InsertItem(3);

	list.DeleteItem(7);

	ItemType item;
	int length = list.LengthIs();
	list.ResetList();
	for (int i = 0; i < length; i++) {
		list.GetNextItem(item);
		cout << item << endl;
	}

}