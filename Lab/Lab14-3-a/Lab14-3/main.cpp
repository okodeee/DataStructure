#include <iostream>
#include "Student.h"
#include "QuickSort.h"
using namespace std;


int main()
{
	Student stu[3];
	stu[0].InitValue(2003200111, (char*)"�̿���", 3.0);
	stu[1].InitValue(2004200121, (char*)"�ǿ���", 3.2);
	stu[2].InitValue(2005200132, (char*)"������", 2.7);
	Student* stuPtrs[3];

	for (int k = 0; k < 3; k++)
		stuPtrs[k] = &stu[k];
	QuickSortPointer(stuPtrs, 0, 2);
	PrintByPointer(cout, stuPtrs, 3);

	return 0;
}