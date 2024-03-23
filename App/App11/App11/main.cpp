#include <iostream>
#include "Student.h"
#include "HashTable.h"
using namespace std;

int main() {

	Student stu[100];

	Student emptyItem;
	emptyItem.InitValue(0000000000, (char*) "None", 0.0);

	HashTable<Student> hashTable(emptyItem);

	int num;
	cin >> num;

	int id;
	char* name;
	float gpa;

	for (int i = 0; i < num; i++) {
		cin >> id >> name >> gpa;
		stu[i].InitValue(id, name, gpa);
		hashTable.InsertItem(stu[i]);
	}



	return 0;
}