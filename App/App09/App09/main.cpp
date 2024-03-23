#include <iostream>
using namespace std;
#include "TreeType.h"

int main()
{
	TreeType tree;
	int num = 0;
	int input[100];
	bool found;


	do {

		cin >> input[num];
		num++;

	} while (getc(stdin) == ' ');

	for (int i = 0; i <= num; i++) {
		if (input[i] == -1)
			tree.DeleteLeaf();
		else {
			tree.RetrieveItem(input[i], found);

			if (found)
				tree.DeleteItem(input[i]);
			else 
				tree.InsertItem(input[i]);
		}
	}
	
	cout << tree.LeafCount() << endl;

	return 0;
}