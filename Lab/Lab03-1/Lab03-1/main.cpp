#include <iostream>
#include "ItemType.h"
#include "sorted.h"
using namespace std;

int main()
{
	SortedType s_list1, s_list2, s_list3; // 리스트 선언
	ItemType item1, item2, item3, item4, item5, item6, item7, item8,item9, item10; //필요한 만큼 선언.
	item1.Initialize(3); //item을 필요한 만큼 초기화
	item2.Initialize(5);
	item3.Initialize(6);
	item4.Initialize(8);
	item5.Initialize(9);
	s_list1.InsertItem(item1); //리스트에 값을 넣는다.
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
	// 리스트의 current position을 초기화 한다.
	list1.ResetList();
	list2.ResetList();
	// list1과 list2의 길이를 LengthIs()함수를 통해 얻는다.
	int length_list1, length_list2;
	length_list1 = list1.LengthIs();
	length_list2 = list2.LengthIs();
	// 정렬 리스트이므로 InsertItem(…)함수에 정렬하는 기능이 있다.
	// 따라서 list1의 길이만큼 반복하여 GetNextItem(…)로 item을 받아 result에 넣는다.
	ItemType item;
	item.Initialize(3);
	for (int i = 0; i < length_list1; i++) {
		result.InsertItem(item);
		list1.GetNextItem(item);
	}

	// list2역시 길이만큼 루프를 돌며 GetNextItem(…)로 item을 얻고, result에 넣는다.
	item.Initialize(1);
	for (int i = 0; i < length_list2; i++) {
		result.InsertItem(item);
		list2.GetNextItem(item);
	}
}