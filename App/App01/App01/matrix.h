#pragma once
using namespace std;  // ostream을 위해서 써야함


class Matrix {

public:

	Matrix() {

		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				matrix[i][j] = 0;
			}
		}

	}

	Matrix(int ff, int fs, int sf, int ss) {

		matrix[0][0] = ff;
		matrix[0][1] = fs;
		matrix[1][0] = sf;
		matrix[1][1] = ss;
	}

	int get_ff() {
		return matrix[0][0];
	}

	int get_fs() {
		return matrix[0][1];
	}

	int get_sf() {
		return matrix[1][0];
	}

	int get_ss() {
		return matrix[1][1];
	}

	int sum() {
		return matrix[0][0] + matrix[0][1] + matrix[1][0] + matrix[1][1];
	}

private:
	int matrix[2][2];

};