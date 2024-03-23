#include <iostream>
using namespace std;
#include "StackType.h"

int main() {

	StackType left_stack; // 커서 왼쪽에 있는 문자를 관리
	StackType right_stack; // 커서 오른쪽에 있는 문자를 관리
	ItemType temp;
	
	char* input = new char[100];
	cin >> input; //문자열 입력
	
	for (int i = 0; i < 100; i++) {
		char c = input[i];
		if (c == NULL)
			break;

		switch (c) {
		case '<':
			if (!left_stack.IsEmpty()) {
				// 커서 기준 왼쪽에 있는 문자를 right_stack으로 옮긴다
				// 커서가 왼쪽으로 한 칸 움직인다.
				temp = left_stack.Top();
				left_stack.Pop();
				right_stack.Push(temp);
			}
			break;

		case '>':
			if (!right_stack.IsEmpty()) {
				// 커서 기준 오른쪽에 있는 문자를 left_stack으로 옮긴다
				// 커서가 오른쪽으로 한 칸 움직인다.
				temp = right_stack.Top();
				right_stack.Pop();
				left_stack.Push(temp);
			}
			break;

		case '-':
			if (!left_stack.IsEmpty()) {
				// 커서 왼쪽에 있는 문자를 삭제
				left_stack.Pop();
			}
			break;

		default:
			//커서 왼쪽에 문자 삽입
			left_stack.Push(c);
			break;

		}
	}

	while (!left_stack.IsEmpty()) {
		// 커서 왼쪽에 있는 문자와 오른쪽에 있는 문자를 합침
		// left_stack에 있는 문자를 right_stack으로 이동
		temp = left_stack.Top();
		left_stack.Pop();
		right_stack.Push(temp);
	}

	while (!right_stack.IsEmpty()) {
		// 문자를 순서대로 출력
		temp = right_stack.Top();
		right_stack.Pop();
		cout << temp;
	}

	return 0;

}