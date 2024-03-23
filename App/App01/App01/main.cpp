#include <iostream>
#include "matrix.h"
using namespace std;

Matrix compute(Matrix &A, Matrix &B, Matrix &C)
{
	int ff = 3 * A.get_ff() + 2 * B.get_ff() - 5 * C.get_ff();
	int fs = 3 * A.get_fs() + 2 * B.get_fs() - 5 * C.get_fs();
	int sf = 3 * A.get_sf() + 2 * B.get_sf() - 5 * C.get_sf();
	int ss = 3 * A.get_ss() + 2 * B.get_ss() - 5 * C.get_ss();

	return Matrix(ff, fs, sf, ss);
}

int main()
{
	int a, b, c, d;
	int e, f, g, h;
	int i, j, k, l;

	cout << "A : ";
	cin >> a >> b >> c >> d;
	cout << "B : ";
	cin >> e >> f >> g >> h;
	cout << "C : ";
	cin >> i >> j >> k >> l;

	Matrix A(a, b, c, d);
	Matrix B(e, f, g, h);
	Matrix C(i, j, k, l);

	Matrix D;

	D = compute(A, B, C);

	int result = D.sum();

	cout << result;

	return 0;
}