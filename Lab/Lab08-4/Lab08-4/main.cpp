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
		//경우의 수가 1가지 이므로 1을 리턴.
		return 1;
	else
		//row+1, col 과 row, col+1을 더한다.
		return NumPaths(row + 1, col, n) + NumPaths(row, col + 1, n);
}


//프로그램 수행 시 배열 mat[][]는 모두 -1(아직 경로 수가 구해지지 않음)로 초기화 되어있다고 가정한다.
const int MAX_ROWS = 5;
const int MAX_COLS = 5;
int mat[MAX_ROWS][MAX_COLS];
int NumPaths_B(int row, int col, int n)
{
	if (mat[row][col] == 0) { // 아직 구해지지 않은 경우
	// (a) 번의 코드를 이용하여 계산
	//	위에서 구한 값을 mat[row][col]에 기억시켜 놓음
		mat[row][col] = NumPaths(row, col, n);
	}
	return mat[row][col];
}