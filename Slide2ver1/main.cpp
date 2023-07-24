#include <iostream>
using namespace std;

typedef struct Matrix {
	unsigned int m, n;
	double** data;
};

void createMatrix(Matrix& M) {
	cout << "Nhap so hang va so cot cua ma tran: ";
	cin >> M.m >> M.n;
	M.data = new double* [M.m];
	for (int i = 0; i < M.m; ++i)
		M.data[i] = new double[M.n];
}

void deleteMatrix(Matrix& M) {
	for (int i = 0; i < M.n; ++i)
		delete[]M.data[i];
	delete[]M.data;
}

void getMatrixData(Matrix M) {
	cout << "Nhap gia tri cac phan tu trong ma tran:\n";
	for (int i = 0; i < M.m; ++i)
		for (int j = 0; j < M.n; ++j)
			cin >> M.data[i][j];
}

void printMatrix(Matrix M) {
	cout << "Xuat ma tran:\n";
	for (int i = 0; i < M.m; ++i) {
		for (int j = 0; j < M.n; ++j)
			cout << M.data[i][j] << " ";
		cout << endl;
	}
}

int main() {
	//Chuong trinh 1
	//Viet chuong trinh nhap vao 2 ma tran. Tinh tong, hieu, tich hai ma tran da nhap va in ket qua ra man hinh.
	{
		Matrix M;
		createMatrix(M);
		getMatrixData(M);
		printMatrix(M);
		deleteMatrix(M);
	}
	system("pause");
	return 0;
}