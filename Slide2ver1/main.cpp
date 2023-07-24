#include <iostream>
using namespace std;

typedef struct Matrix {
	unsigned int m, n;
	double** data;
};

void createMatrix(Matrix& M) {
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
	for (int i = 0; i < M.m; ++i) {
		for (int j = 0; j < M.n; ++j)
			cout << M.data[i][j] << " ";
		cout << endl;
	}
	cout << endl;
}

Matrix sumMatrixes(Matrix A, Matrix B) {
	Matrix sumMatrix;
	sumMatrix.m = A.m;
	sumMatrix.n = A.n;
	createMatrix(sumMatrix);
	for (int i = 0; i < A.m; ++i)
		for (int j = 0; j < A.n; ++j)
			sumMatrix.data[i][j] = A.data[i][j] + B.data[i][j];
	return sumMatrix;
}

Matrix differMatrixes(Matrix A, Matrix B) {
	Matrix differMatrix;
	differMatrix.m = A.m;
	differMatrix.n = A.n;
	createMatrix(differMatrix);
	for (int i = 0; i < A.m; ++i)
		for (int j = 0; j < A.n; ++j)
			differMatrix.data[i][j] = A.data[i][j] - B.data[i][j];
	return differMatrix;
}


int main() {
	//Chuong trinh 1
	//Viet chuong trinh nhap vao 2 ma tran. Tinh tong, hieu, tich hai ma tran da nhap va in ket qua ra man hinh.
	{
		Matrix A, B;
		//Khoi tao ma tran A
		cout << "Nhap so hang va so cot cua ma tran: ";
		cin >> A.m >> A.n;
		createMatrix(A);
		getMatrixData(A);

		//Khoi tao ma tran B
		cout << "Nhap so hang va so cot cua ma tran: ";
		cin >> B.m >> B.n;
		createMatrix(B);
		getMatrixData(B);

		//Tong cua hai ma tran
		cout << "Tong cua hai ma tran tren:\n";
		if (A.m != B.m || A.n != B.n)
			cout << "Khong the tinh tong hai ma tran nay!\n";
		else
			printMatrix(sumMatrixes(A, B));

		//Hieu cua hai ma tran
		cout << "Hieu cua hai ma tran tren:\n";
		if (A.m != B.m || A.n != B.n)
			cout << "Khong the tinh hieu hai ma tran nay!\n";
		else
			printMatrix(differMatrixes(A, B));

		//Gia phong vung nho
		deleteMatrix(A);
		deleteMatrix(B);
	}
	cout << "\n\n";
	system("pause");
	return 0;
}