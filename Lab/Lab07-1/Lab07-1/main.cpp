#include <iostream>
using namespace std;
#include "SortedType.h"

int main() {
	SortedType<ItemType> list;

	list.InsertItem('X');
	list.InsertItem('Y');
	list.InsertItem('Z');

	list.PrintReverse();
}