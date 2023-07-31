#include <iostream>
#include <stdio.h>
#include "date.h"
using namespace std;

void getArrayNumber(int* arr, int n) {
	cout << "Hay nhap mang co 4 phan tu: ";
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
}

void printArrayNumber(int* arr, int n) {
	cout << "Mang cua ban la: ";
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
}

void getArrayFromFile(int* arr, int n, const char* fpath) {
	FILE* file = fopen(fpath, "r");
	for (int i = 0; i < n; ++i)
		fscanf(file, "%d", &arr[i]);
	fclose(file);
}

void printArrayToFile(int* arr, int n, const char* fpath) {
	FILE* file = fopen(fpath, "w+");
	for (int i = 0; i < n; ++i)
		fprintf(file, "%d ", arr[i]);
	fclose(file);
}

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

typedef struct PhanSo {
	int tu, mau;
};

bool checkPhanSo(PhanSo ps) {
	if (ps.mau == 0)
		return false;
	return true;
}

istream& operator>>(istream& cin, PhanSo& ps) {
	cin >> ps.tu >> ps.mau;
	return cin;
}

ostream& operator<<(ostream& cout, PhanSo ps) {
	cout << ps.tu << "/" << ps.mau;
	return cout;
}

void rutgonPS(PhanSo& ps) {
	if (ps.tu == 0)
		return;
	if (ps.tu * ps.mau > 0) {
		if (ps.tu < 0)
			ps.tu *= -1;
		if (ps.mau < 0)
			ps.mau *= -1;
		int ucln = getGCD(ps.tu, ps.mau);
		ps.tu /= ucln;
		ps.mau /= ucln;
	}
	else {
		if (ps.tu < 0)
			ps.tu *= -1;
		if (ps.mau < 0)
			ps.mau *= -1;
		int ucln = getGCD(ps.tu, ps.mau);
		ps.tu /= -ucln;
		ps.mau /= ucln;
	}
}

PhanSo maxPS(PhanSo a, PhanSo b) {
	if (a.tu * b.mau == b.tu * a.mau)
		return a;
	else if (a.tu * b.mau > b.tu * a.mau)
		return a;
	else
		return b;
}

PhanSo operator+(PhanSo a, PhanSo b) {
	PhanSo tong;
	tong.tu = a.tu * b.mau + a.mau * b.tu;
	tong.mau = a.mau * b.mau;
	rutgonPS(tong);
	return tong;
}

PhanSo operator-(PhanSo a, PhanSo b) {
	PhanSo hieu;
	hieu.tu = a.tu * b.mau - a.mau * b.tu;
	hieu.mau = a.mau * b.mau;
	rutgonPS(hieu);
	return hieu;
}

PhanSo operator*(PhanSo a, PhanSo b) {
	PhanSo tich;
	tich.mau = a.mau * b.mau;
	tich.tu = a.tu * b.tu;
	rutgonPS(tich);
	return tich;
}

PhanSo operator/(PhanSo a, PhanSo b) {
	PhanSo thuong;
	thuong.tu = a.tu * b.mau;
	thuong.mau = a.mau * b.tu;
	rutgonPS(thuong);
	return thuong;
}
	
int main() {
	//nhap 4 so nguyen va xuat cac gia tri vua nhap
	//cach 1
	/*{
		int a, b, c, d;
		cout << "Cach 1\nNhap lan luot 4 so nguyen: ";
		cin >> a >> b >> c >> d;
		cout << "Cac so da nhap la: " << a << " " << b << " " << c << " " << d << "\n";
	}*/
	//cach 2
	/*{
		int a[4];
		cout << "Cach 2\nNhap lan luot 4 so nguyen: ";
		cin >> a[0] >> a[1] >> a[2] >> a[3];
		cout << "Cac so da nhap la: " << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << "\n";
	}*/
	//cach 3
	/*{
		int a[4];
		cout << "Cach 3\nNhap lan luot 4 so nguyen: ";
		int i;
		do {
			i = 0;
			cin >> a[0];
			++i;
		} while (i < 4);
		cout << "Cac so da nhap la: ";
		do {
			int i = 0;
			cout << a[i];
			++i;
		} while (i < 4);
	}*/
	//cach 4
	/*{
		int a[4] = { 0 };
		cout << "Cach 4\nNhap lan luot 4 so nguyen: ";
		for (int i = 0; i < 4; ++i)
			cin >> a[i];
		cout << "Cac so da nhap la: ";
		for (int i = 0; i < 4; ++i)
			cout << a[i] << " ";
		cout << endl;
	}*/
	//cach 5
	/*{
		int a[4] = { 0 };
		for (int i = 0; i < 4; ++i) {
			cout << "Moi ban nhap gia tri cho so thu " << i + 1 << " : ";
				cin >> a[i];
				cout << "So ban vua nhap la: " << a[i] << "\n\n";
		}
	}*/
	//cach 6
	/*{
		int a[4] = { 0 };
		getArrayNumber(a, 4);
		printArrayNumber(a, 4);
	}*/
	//cach 7
	/*{
		int a[4] = { 0 };
		const char* fipath = "./input.txt";
		const char* fopath = "./output.txt";
		getArrayFromFile(a, 4, fipath);
		printArrayToFile(a, 4, fopath);
		printArrayNumber(a, 4);
	}*/

	//Bai tap 3
	//a. Viet chuong trinh nhap vao mot phan so, rut gon phan so va xuat ket qua
	/*{
		PhanSo ps;
		cout << "Nhap phan so: ";
		cin >> ps;
		while (!checkPhanSo(ps)) {
			cout << "Phan so khong hop le! Nhap lai: ";
			cin >> ps;
		}
		cout << "Phan so vua nhap la: " << ps;
		rutgonPS(ps);
		cout << "\nPhan so sau khi rut gon la: " << ps;
	}*/
	//b. Viet chuong trinh nhap vao hai phan so, tim phan so lon nhat va xuat ket qua
	/*{
		PhanSo a, b;
		cout << "Nhap lan luot hai phan so a va b: ";
		cin >> a >> b;
		while (!checkPhanSo(a) || !checkPhanSo(b)) {
			if (!checkPhanSo(a)) {
				cout << "Phan so a khong hop le! Nhap lai a: "; cin >> a;
			}
			if (!checkPhanSo(b)) {
				cout << "Phan so b khong hop le! Nhap lai b: "; cin >> b;
			}
		}
		cout << "Hai phan so vua nhap la: " << a << " " << b;
		cout << "\nPhan so lon nhat la: " << maxPS(a, b);
	}*/
	//c. Viet chuong trinh nhap vao hai phan so. Tinh tong, hieu, tich, thuong giua chung va xuat ket qua.
	/*{
		PhanSo a, b;
		cout << "Nhap lan luot hai phan so: "; cin >> a >> b;
		cout << "Hai phan so vua nhap la: " << a << " " << b << "\n";
		cout << "Tong cua hai phan so: " << a + b << '\n';
		cout << "Hieu cua hai phan so: " << a - b << '\n';
		cout << "Tich cua hai phan so: " << a * b << '\n';
		cout << "THuong cua hai phan so: " << a / b << '\n';
	}*/
	//Bai tap 4
	//a. Viet chuong trinh nhap vao mot ngay. Tim ngay ke tiep va xuat ket qua.
	/*{
		Date today;
		cout << "Nhap ngay thang nam: ";
		cin >> today;
		while (!checkToday(today)) {
			cout << "Ngay vua nhap khong hop le! Vui long nhap lai: ";
			cin >> today;
		}
		cout << "Ngay thang nam vua nhap la: ";
		cout << today;
		cout << "\nNgay tiep theo se la: " << getNextday(today);
	}*/
	//b. Viet chuong trinh nhap ho ten, diem toan, diem van cua mot hoc sinh. Tinh diem trung binh va xuat ket qua.
	{

	}
	cout << "\n";
	system("pause");
	return 0;
}