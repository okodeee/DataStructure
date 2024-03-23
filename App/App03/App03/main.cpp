#include <iostream>
#include "sorted.h"
#include "ItemType.h"
using namespace std;

int main()
{
	SortedType list1;

	int N;
	cout << "Input N: ";
	cin >> N;

	ItemType item;
	int input;
	cout << "Input list Item: ";
	for (int i = 0; i < N; i++)
	{
		//list1�� Item ����
		cin >> input;
		item.Initialize(input);
		list1.InsertItem(item);
	}
	cout << endl;

	while (1)
	{
		int X;
		cout << "Input X: ";
		cin >> X;

		if (X == 0)
		{
			//list1�� ��� ��� ���

			list1.ResetList();
			for (int i = 0; i < N; i++)
			{
				list1.GetNextItem(item);
				item.Print(cout);
				cout << ' ';
			}
			cout << endl;
			break;
		}

		int Y;
		cout << "Input Y: ";
		cin >> Y;

		//list1�� X�� �����ϴ��� ã�� �����ϸ� Y�� �ٲٱ�
	   //�� ������ ����� �� list1�� ���ĵ� ���¿��� ��
		item.Initialize(X);
		bool found;
		list1.RetrieveItem(item, found);
		if (found)
		{
			list1.DeleteItem(item);
			item.Initialize(Y);
			list1.InsertItem(item);
		}
		cout << "Operation completed." << endl << endl;
	}

	return 0;
}