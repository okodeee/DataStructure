#include <iostream>
using namespace std;
#include "TreeType.h"
#include "UnsortedType.h"


bool MatchingItem_Unsorted(TreeType &tree, UnsortedType<ItemType> &list);

int main()
{
	TreeType tree;
	UnsortedType<char> list;

	tree.InsertItem('g');
	tree.InsertItem('b');
	tree.InsertItem('k');
	tree.InsertItem('a');
	tree.InsertItem('e');
	tree.InsertItem('h');
	tree.InsertItem('z');

	list.InsertItem('a');
	list.InsertItem('e');
	list.InsertItem('b');
	list.InsertItem('h');
	list.InsertItem('z');
	list.InsertItem('k');
	list.InsertItem('g');

	cout << MatchingItem_Unsorted(tree, list) << endl;

	return 0;
}


bool MatchingItem_Unsorted(TreeType &tree, UnsortedType<ItemType> &list)
{
	int list_length = list.LengthIs();
	int tree_length = tree.LengthIs();

	if (list_length != tree_length) //���̸� ���� ��, ������ �˻��Ѵ�.
	{
		return false;
	}
	else
	{
		ItemType item;
		bool found;

		list.ResetList(); //list�� iterator�� ����� �غ� �Ѵ�
		for (int i = 0; i < list_length; i++) {
			list.GetNextItem(item); // list���� �ϳ��� �������� �����´�
			tree.RetrieveItem(item, found); //Ʈ���� �ش� �������� �ִ��� �˻�. O(logN)�� �ɸ�.
			if (!found) return false;
		}
		return true;
	}
}

/*
//�Ʒ� ������ ���� �� �� ����ð� �鿡�� ���� ���̰� ������? 
	tree.ResetTree(IN_ORDER); // tree�� iterator�� ����� �غ� �Ѵ�
	for (int i = 0; i < list_length; i++) {
		tree.GetNextItem(item, IN_ORDER, found); // tree���� �ϳ��� �������� �����´�
		list.RetrieveItem(item, found); // list�� �ش� �������� �ִ� �˻�. O(N)�� �ɸ�.
		if (!found));
	}
	*/