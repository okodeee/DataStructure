#include <iostream>
#include "TreeType.h"
using namespace std;

int main()
{
	int num_node;
	cin >> num_node;

	TreeType example;
	int item[50];

	for (int i = 0; i < num_node; i++)
		cin >> item[i];

	for (int i = 0; i < num_node; i++)
		example.InsertItem(item[i]);

	int num_del;
	cin >> num_del;

	while (num_del) {
		example.del_min();
		num_del--;
	}

	cout << example.LeafCount() << endl;

	return 0;
}