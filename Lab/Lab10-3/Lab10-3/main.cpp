#include "TreeType.h"

int main()
{
	TreeType example;

	example.InsertItem('k');
	example.InsertItem('d');
	example.InsertItem('o');
	example.InsertItem('a');
	example.InsertItem('m');
	example.InsertItem('x');
	example.InsertItem('l');
	example.InsertItem('w');

	example.Ancestors_re('x');

	return 0;
}