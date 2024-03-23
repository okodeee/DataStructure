#include <iostream>
#include "ItemType.h"
#include "sorted.h"
using namespace std;

int main()
{
	SortedType s_list1, s_list2, s_list3; // ����Ʈ ����
	ItemType item1, item2, item3, item4, item5, item6, item7, item8,item9, item10; //�ʿ��� ��ŭ ����.
	item1.Initialize(3); //item�� �ʿ��� ��ŭ �ʱ�ȭ
	item2.Initialize(5);
	item3.Initialize(6);
	item4.Initialize(8);
	item5.Initialize(9);
	s_list1.InsertItem(item1); //����Ʈ�� ���� �ִ´�.
	s_list1.InsertItem(item2);
	s_list1.InsertItem(item3);
	s_list1.InsertItem(item4);
	s_list1.InsertItem(item5);
	item6.Initialize(1);
	item7.Initialize(2);
	item8.Initialize(4);
	item9.Initialize(7);
	item10.Initialize(11);
	s_list2.InsertItem(item6);
	s_list2.InsertItem(item7);
	s_list2.InsertItem(item8);
	s_list2.InsertItem(item9);
	s_list2.InsertItem(item10);

	return 0;
}

void MergeList(SortedType list1, SortedType list2, SortedType& result)
{
	// ����Ʈ�� current position�� �ʱ�ȭ �Ѵ�.
	list1.ResetList();
	list2.ResetList();
	// list1�� list2�� ���̸� LengthIs()�Լ��� ���� ��´�.
	int length_list1, length_list2;
	length_list1 = list1.LengthIs();
	length_list2 = list2.LengthIs();
	// ���� ����Ʈ�̹Ƿ� InsertItem(��)�Լ��� �����ϴ� ����� �ִ�.
	// ���� list1�� ���̸�ŭ �ݺ��Ͽ� GetNextItem(��)�� item�� �޾� result�� �ִ´�.
	ItemType item;
	item.Initialize(3);
	for (int i = 0; i < length_list1; i++) {
		result.InsertItem(item);
		list1.GetNextItem(item);
	}

	// list2���� ���̸�ŭ ������ ���� GetNextItem(��)�� item�� ���, result�� �ִ´�.
	item.Initialize(1);
	for (int i = 0; i < length_list2; i++) {
		result.InsertItem(item);
		list2.GetNextItem(item);
	}
}