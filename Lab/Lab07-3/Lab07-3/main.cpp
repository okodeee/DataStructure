/*
d. GoToTop �Լ��� ���� line�� 0��, 2���� ��,
GoToBottom �Լ��� ���� line�� 1���� ��
*/
#include <iostream>
using namespace std;
#include "TextEditor.h"

int main() {

	TextEditor text;
	char temp1[80] = "The is the first line of text.";
	char temp2[80] = "This is the current line of text.";
	char temp3[80] = "This is the last line of text.";
	text.InsertItem(temp1);
	text.InsertItem(temp2);
	text.InsertItem(temp3);

}