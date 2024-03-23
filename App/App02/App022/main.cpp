#include <iostream>
#include "unsorted.h"
#include "sorted.h"
using namespace std;

int main() {

	int lengthset;
	cin >> lengthset;

	int input, sum = 0;
	ItemType item;
	UnsortedType list_A;
	UnsortedType list_B;
	SortedType list_C;

	for (int i = 0; i < lengthset; i++) {
		cin >> input;
		item.Initialize(input);
		list_A.InsertItem(item);
	}
	for (int i = 0; i < lengthset; i++) {
		cin >> input;
		item.Initialize(input);
		list_B.InsertItem(item);
	}
	for (int i = 0; i < lengthset; i++) {
		sum += (list_A.GetItem(i)).get_value();
		sum += (list_B.GetItem(i)).get_value();
		item.Initialize(sum);
		list_C.InsertItem(item);
		sum = 0;
	}
	for (int i = 0; i < lengthset; i++) {
		item = list_C.GetItem(i);
		item.Print(cout);
		cout << ' ';
	}

	return 0;
}