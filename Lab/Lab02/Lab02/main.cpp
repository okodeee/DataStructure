#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	cout << "�Ķ���� ���� = " << argc << endl;

	// argv[0]�� �������� �̸��� ���� �� ���� �� ��
	for (int i = 0; i < argc; i++)
		cout << i << "-th argement = " << argv[i] << endl;
	return 0;
}





/*
#include <iostream>
#include <fstream>
// myIn.txt ���Ͽ��� ù ���� �о myOut.txt�� ���
int main() {
	// �Է������̸��� ��������̸��� argument�� �̿��Ͽ� ���� �� �ֵ��� ������ ��
	ifstream input_file("myIn.txt");
	ofstream output_file("myOut.txt");

	char ch;
	while (!(ch==EOF)) {
		// ���鹮�� ���� ������� �� ����(1byte)��ŭ ����
		input_file.get(ch);
		if()
	}
}
*/