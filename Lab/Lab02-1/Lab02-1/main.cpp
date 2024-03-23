#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
	ifstream input_file(argv[1]);
	ofstream output_file(argv[2]);

	char ch;
	while (input_file.eof() != true)
	{
		// 공백문자 여부 상관없이 한 문자(1byte)만큼 읽음
		input_file.get(ch);
		if(!input_file) break;
		if (ch == '\r') // ch가 LF('\r')이라면
			output_file << '\n';
		else
			output_file << ch;
	}
	input_file.close();
	output_file.close();
}