#include <iostream>
#include "TreeType.h"
#include "QueType.h"
using namespace std;

int main()
{
	TreeType example1, example2;

	example1.InsertItem('k');
	example1.InsertItem('f');
	example1.InsertItem('o');
	example1.InsertItem('c');
	example1.InsertItem('g');
	example1.InsertItem('p');
	example1.InsertItem('a');

	example2.InsertItem('k');
	example2.InsertItem('f');
	example2.InsertItem('o');
	example2.InsertItem('c');
	example2.InsertItem('a');
	example2.InsertItem('p');
	example2.InsertItem('q');

	cout << example1.IsBST() << endl;
	cout << example2.IsBST() << endl;

	return 0;
}