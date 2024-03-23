#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	cout << "파라메터 개수 = " << argc << endl;

	// argv[0]은 실행파일 이름이 들어감을 눈 여겨 볼 것
	for (int i = 0; i < argc; i++)
		cout << i << "-th argement = " << argv[i] << endl;
	return 0;
}





/*
#include <iostream>
#include <fstream>
// myIn.txt 파일에서 첫 문자 읽어서 myOut.txt에 기록
int main() {
	// 입력파일이름과 출력파일이름은 argument를 이용하여 받을 수 있도록 변경할 것
	ifstream input_file("myIn.txt");
	ofstream output_file("myOut.txt");

	char ch;
	while (!(ch==EOF)) {
		// 공백문자 여부 상관없이 한 문자(1byte)만큼 읽음
		input_file.get(ch);
		if()
	}
}
*/