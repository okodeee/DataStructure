#include <iostream>
#include "Student.h"
#include "HashTable.h"
using namespace std;


int main()
{
	Student stu[100];
	stu[0].InitValue(2003200111, (char*)"a", 3.0);
	stu[1].InitValue(2004200121, (char*)"b", 3.2);
	stu[2].InitValue(2005200132, (char*)"c", 2.7);

	HashTable<Student> ht;
	ht.InsertItem(stu[0]);
	ht.InsertItem(stu[1]);
	ht.InsertItem(stu[2]);

	char* input;
	char name[20];
	input = name;
	cin >> input;
	cout << "2" << endl;

	Student item;
	item.InitValue(0, input, 0);

	bool found = false;
	ht.RetrieveItem(item, found);
	item.Print(cout);
	   
	return 0;
}