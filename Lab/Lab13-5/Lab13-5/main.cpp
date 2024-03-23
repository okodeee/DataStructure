#include <iostream>
#include "Student.h"
#include "HeapSort.h"
using namespace std;


int main()
{
	int list[9];
	list[0] = 25;
	list[1] = 17;
	list[2] = 36;
	list[3] = 2;
	list[4] = 3;
	list[5] = 100;
	list[6] = 1;
	list[7] = 19;
	list[8] = 7;

	HeapSort(list, 9);

	return 0;
}