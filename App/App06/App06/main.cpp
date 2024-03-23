#include <iostream>
using namespace std;
#include "StackType.h"

int main() {

	StackType left_stack; // Ŀ�� ���ʿ� �ִ� ���ڸ� ����
	StackType right_stack; // Ŀ�� �����ʿ� �ִ� ���ڸ� ����
	ItemType temp;
	
	char* input = new char[100];
	cin >> input; //���ڿ� �Է�
	
	for (int i = 0; i < 100; i++) {
		char c = input[i];
		if (c == NULL)
			break;

		switch (c) {
		case '<':
			if (!left_stack.IsEmpty()) {
				// Ŀ�� ���� ���ʿ� �ִ� ���ڸ� right_stack���� �ű��
				// Ŀ���� �������� �� ĭ �����δ�.
				temp = left_stack.Top();
				left_stack.Pop();
				right_stack.Push(temp);
			}
			break;

		case '>':
			if (!right_stack.IsEmpty()) {
				// Ŀ�� ���� �����ʿ� �ִ� ���ڸ� left_stack���� �ű��
				// Ŀ���� ���������� �� ĭ �����δ�.
				temp = right_stack.Top();
				right_stack.Pop();
				left_stack.Push(temp);
			}
			break;

		case '-':
			if (!left_stack.IsEmpty()) {
				// Ŀ�� ���ʿ� �ִ� ���ڸ� ����
				left_stack.Pop();
			}
			break;

		default:
			//Ŀ�� ���ʿ� ���� ����
			left_stack.Push(c);
			break;

		}
	}

	while (!left_stack.IsEmpty()) {
		// Ŀ�� ���ʿ� �ִ� ���ڿ� �����ʿ� �ִ� ���ڸ� ��ħ
		// left_stack�� �ִ� ���ڸ� right_stack���� �̵�
		temp = left_stack.Top();
		left_stack.Pop();
		right_stack.Push(temp);
	}

	while (!right_stack.IsEmpty()) {
		// ���ڸ� ������� ���
		temp = right_stack.Top();
		right_stack.Pop();
		cout << temp;
	}

	return 0;

}