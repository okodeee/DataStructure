#include <iostream>
using namespace std;

int NumPaths(int row, int col, int n);
int NumPaths_B(int row, int col, int n);

int main()
{
	cout << NumPaths(2, 2, 3) << endl;
	cout << NumPaths_B(2, 2, 3) << endl;
	return 0;
}

int NumPaths(int row, int col, int n)
{
	if ((row == n) || (col == n))
		//����� ���� 1���� �̹Ƿ� 1�� ����.
		return 1;
	else
		//row+1, col �� row, col+1�� ���Ѵ�.
		return NumPaths(row + 1, col, n) + NumPaths(row, col + 1, n);
}


//���α׷� ���� �� �迭 mat[][]�� ��� -1(���� ��� ���� �������� ����)�� �ʱ�ȭ �Ǿ��ִٰ� �����Ѵ�.
const int MAX_ROWS = 5;
const int MAX_COLS = 5;
int mat[MAX_ROWS][MAX_COLS];
int NumPaths_B(int row, int col, int n)
{
	if (mat[row][col] == 0) { // ���� �������� ���� ���
	// (a) ���� �ڵ带 �̿��Ͽ� ���
	//	������ ���� ���� mat[row][col]�� ������ ����
		mat[row][col] = NumPaths(row, col, n);
	}
	return mat[row][col];
}