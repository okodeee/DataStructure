#include <iostream>
using namespace std;

/*
SquardMatrix ADT Specification
2���� �迭 | �ִ� ũ��� 50���� ��� ��

MakeEmpty(n)
��� | Matrix�� n �� �� ���θ� 0���� �ʱ�ȭ
���� | N�� �ִ� ũ��� 50
��� | N ���� �� ���� 0���� �ʱ�ȭ

StoreValue(i, j, value)
��� | value�� i��°��, j��° ���� ��ġ�� ����
���� | i�� j�� �ִ� ũ��� N
��� | i��° ��, j��° ���� ��ġ�� value�� ����

Add(MatrixA, MatrixB)
��� | �� ����� �Բ� ���Ѵ�
���� | �� ����� ũ�Ⱑ ��ġ
��� | ���� ��ġ�� ���� ������ ��ȯ

Subtract(MatrixA, MatrixB)
��� | MatrixB�� MatrixA�κ��� ����
���� | �� ����� ũ�Ⱑ ��ġ
��� | ���� ��ġ�� ���� ������ ��ȯ

Copy(MatrixA, MatrixB)
��� | MatrixA�� MatrixB�� ����
���� | MatrixB�� ũ�Ⱑ MatrixA���� ŭ
��� | MatrixA�� ������ MatrixB�� ����
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