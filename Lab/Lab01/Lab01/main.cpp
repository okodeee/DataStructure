#include <iostream>
using namespace std;

/*
SquardMatrix ADT Specification
2차원 배열 | 최대 크기로 50개의 행과 열

MakeEmpty(n)
기능 | Matrix의 n 행 열 내부를 0으로 초기화
조건 | N의 최대 크기는 50
결과 | N 안의 행 열은 0으로 초기화

StoreValue(i, j, value)
기능 | value를 i번째행, j번째 열의 위치에 저장
조건 | i와 j의 최대 크기는 N
결과 | i번째 행, j번째 열의 위치를 value로 설정

Add(MatrixA, MatrixB)
기능 | 두 행렬을 함께 더한다
조건 | 두 행렬의 크기가 일치
결과 | 같은 위치의 값의 덧셈이 반환

Subtract(MatrixA, MatrixB)
기능 | MatrixB를 MatrixA로부터 뺀다
조건 | 두 행렬의 크기가 일치
결과 | 같은 위치의 값의 뺄셈이 반환

Copy(MatrixA, MatrixB)
기능 | MatrixA를 MatrixB로 복사
조건 | MatrixB의 크기가 MatrixA보다 큼
결과 | MatrixA의 값들이 MatrixB에 저장
*/


//#define MAX_ROWS 50
//#define MAX_COLS 50
const int MAX_ROWS = 50;
class SquareMatrix {
private:
	int matrix[50][50];

public:
	void MakeEmpty(int);
	void StoreValue(int, int, int);


};

void SquareMatrix::MakeEmpty(int n) {
	int i, j = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
			matrix[i][j] = 0;
	}
}

void SquareMatrix::StoreValue(int i, int j, int value) {
	matrix[i][j] = value;
}