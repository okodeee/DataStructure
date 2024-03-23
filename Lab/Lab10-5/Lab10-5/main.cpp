#include <iostream>
#include <fstream>
using namespace std;
#include "TreeType.h"
#include "SortedType.h"


//리스트가 가지는 아이템을 배열로 옮긴 뒤, 배열에서 입력 순서를 계산하여 트리에 입력한다.

void AddElement(TreeType& tree, int Array[], int from, int to);
void MakeTree(TreeType &tree, SortedType<int> &list);

int main()
{
	TreeType tree;
	SortedType<int> list;

	list.InsertItem(1);
	list.InsertItem(2);
	list.InsertItem(3);
	list.InsertItem(4);
	list.InsertItem(5);
	list.InsertItem(6);
	list.InsertItem(7);

	MakeTree(tree, list);

	ofstream fout("TreePrint.txt");
	tree.Print(fout);
	fout.close();

	return 0;
}

void MakeTree(TreeType &tree, SortedType<int> &list)
{
	int length = list.LengthIs(); //리스트 크기를 얻는다
	int * array = new int[length]; //동적 배열 할당
	int item_info;
	int i;

	list.ResetList();

	for (i = 0; i < length; i++)
	{
		list.GetNextItem(item_info);
		array[i] = item_info;
	}

	AddElement(tree, array, 0, length - 1);

	delete[] array; // 동적 배열 삭제
}

void AddElement(TreeType& tree, int Array[], int from, int to)
{
	int mid; //중간 값을 기록하는 변수
	if (from <= to) { //함수의 종료조건
		mid = (from + to) / 2;
		tree.InsertItem(Array[mid]);
		AddElement(tree, Array, from, mid - 1);
		AddElement(tree, Array, mid + 1, to);
	}
}