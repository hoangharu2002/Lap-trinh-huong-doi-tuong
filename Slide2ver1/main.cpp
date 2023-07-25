#include <iostream>
using namespace std;

//Ham chuong trinh 1
typedef struct Matrix {
	unsigned int m, n;
	double** data;
};

void createMatrix(Matrix& M) {
	M.data = new double* [M.m];
	for (int i = 0; i < M.m; ++i)
		M.data[i] = new double[M.n] {0};
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

Matrix productTwoMatrixes(Matrix A, Matrix B) {
	Matrix productMatrix;
	productMatrix.m = A.m;
	productMatrix.n = B.n;
	createMatrix(productMatrix);
	for (int i = 0; i < A.m; ++i)
		for (int j = 0; j < B.n; ++j)
			for (int l = 0; l < A.n; ++l)
				productMatrix.data[i][j] += A.data[i][l] * B.data[l][j];
	return productMatrix;
}
//Ham chuong trinh 1

//Ham chuong trinh 2
typedef struct PhanSo {
	int tu, mau;
};

int getGCD(int a, int b) {
	if (a == 0)
		return b;
	if (b == 0)
		return a;
	while (a != b) {
		if (a > b) {
			if (a % b == 0)
				return b;
			a %= b;
		}
		else {
			if (b % a == 0)
				return a;
			b %= a;
		}
	}
	return a;
}



bool checkFraction(PhanSo p) {
	if (p.mau == 0)
		return false;
	return true;
}

void reduceFraction(PhanSo &p) {
	if (p.tu * p.mau > 0) {
		if (p.tu < 0)
			p.tu *= -1;
		if (p.mau < 0)
			p.mau *= -1;
		if (p.tu == 0)
			return;
		int ucln = getGCD(p.tu, p.mau);
		p.tu /= ucln;
		p.mau /= ucln;
		return;
	}
}
//Ham chuong trinh 2


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

		//Tich cua hai ma tran
		cout << "Tich cua hai ma tran la:\n";
		if (A.n != B.m)
			cout << "Khong the tinh tich cua hai ma tran nay!\n";
		else
			printMatrix(productTwoMatrixes(A, B));

		//Gia phong vung nho
		deleteMatrix(A);
		deleteMatrix(B);
	}
	//Chuong trinh 2
	//Viet chuong trinh cho phep nhap mot day phan so. Cai dat ham tinh tong cac phan so va tim phan so lon nhat.
	{
		int n;
		cout << "Hay nhap so luong phan tu cua mang phan so: ";
		cin >> n;
		PhanSo* ps = new PhanSo[n];

		delete[]ps;
	}
	cout << "\n\n";
	system("pause");
	return 0;
}