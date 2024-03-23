#include <iostream>
#include "UnsortedType.h"
using namespace std;

int main()
{
	int item1 = 4;
	int item2 = 1;
	int item3 = 7;
	int item4 = 5;
	UnsortedType<int> list;
	list.InsertItem(item1);
	list.InsertItem(item2);
	list.InsertItem(item3);
	list.InsertItem(item4);
	return 0;

}